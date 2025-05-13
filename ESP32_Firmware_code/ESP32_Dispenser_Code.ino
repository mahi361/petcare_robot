
#include <WiFi.h>
#include <ESPAsyncWebServer.h>
#include <ESPAsyncWiFiManager.h>
#include <ESP32Servo.h>

#define trigPin 13
#define echoPin 12
#define servoPin 14

Servo myServo;
long duration;
int distance;

AsyncWebServer server(80);

void setup() {
  Serial.begin(115200);
  myServo.attach(servoPin);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  AsyncWiFiManager wifiManager(&server);
  wifiManager.autoConnect("PetCareDispenser");

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request){
    request->send(200, "text/html", "<html><body><h1>ESP32 Pet Dispenser</h1></body></html>");
  });

  server.begin();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance < 10) {
    dispenseFood();
    delay(5000); // Wait to prevent multiple triggers
  }
}

void dispenseFood() {
  myServo.write(90);
  delay(1000);
  myServo.write(0);
}
