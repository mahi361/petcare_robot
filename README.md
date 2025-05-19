

<h1 align="center"> Design and fabrication of submarine for monitoring coral reefs</h1>
<p align="center">
<img src=".github/assets/hits_logo.png" width="700" height="">
</p>





> *Abstract:*A simple submarine model for coral reef monitoring which is a manually operated vehicle and
uses three types of sensors for monitoring the water in the coral roof ecosystem is presented in this
paper. Coral reefs play a crucial role in the marine ecosystem by serving as a habitat for a wide range
of marine species and supporting the livelihoods of coastal communities. Nevertheless, these delicate
ecosystems are currently facing unparalleled challenges due to climate change, pollution, and human
activities. It is crucial to implement effective monitoring and conservation measures to ensure the
preservation of the health and diversity of coral reefs. The manually operated submarine with dpdt switches is capable of
navigating in the water, measuring and collecting data of TDS level of water, temperature of water and
pressure at the water various levels of water. For monitoring the collected data, we are using a Micro
SD card module to store the collected data so that we can observe the data after getting out the
submarine from water. Initially submarine is controlled using arduino uno and later on we replaced arduino uno with Raspberry pi 4.

Group Members:

* [Mahidhar kollipara](https://github.com/mahi361)
* [G.Anirudh](https://in.linkedin.com/in/anirudh-gattamaneni-893884218)


<h2>Submarine</h2>

<div align="center">
<img src = "Design_files/chasis_07.jpg" width="100%">
</div>


<h2>Components</h2>

<div align="center">
<table>
  <tr >
    <td width=25%> <img src = "Components/arduino_uno.jpeg" width="100%"><br>(a) </td>
    <td width=25%> <img src = "Components/rpi.png" width="100%"><br>(b) </td>
    <td width=25%> <img src = "Components/temp.png" width="100%"><br>(c) </td>
    <td width=25%> <img src = "Components/pressure.png" width="75%"><br>(d) </td>
  </tr>
  <tr>  
    <td width=25%> <img src = "Components/tds.png" width="1005"><br>(e) </td>
    <td width=25%> <img src = "Components/555 johnson gear motors.png" width="100%"><br>(f) </td>
    <td width=25%> <img src = "Components/li-ion batteris.png" width="100%"><br>(g) </td>
    <td width=25%> <img src = "Components/limit_switch.png" width="100%"><br>(h) </td>
  </tr>
    <tr>  
    <td width=25%> <img src = "Components/water_pump.png" width="100%"><br>(j) </td>
    <td width=25%> <img src = "Components/uno cable.jpeg" width="100%"><br>(j) </td>
    <td width=25%> <img src = "Components/syringes.jpeg" width="100%"><br>(k) </td>
    <td width=25%> <img src = "Components/dpdt.jpeg" width="100%"><br>(l) </td>
  </tr>
  <tr>  
    <td width=25%> <img src = "Components/acrylic.jpeg" width="1005"><br>(m) </td>
    <td width=25%> <img src = "Components/threaded rods.png" width="100%"><br>(n) </td>
    <td width=25%> <img src = "Components/li-ion batteris.png" width="100%"><br>(o) </td>
    <td width=25%> <img src = "Components/coupler.jpeg" width="100%"><br>(p) </td>
  </tr>
</table>
<p>(a) Ardunio Uno (1), (b) Raspberry pi-4 (1), (c) DS182B0 Temperature Sensor, (d) HX710B Pressure Sensor (1), (e)TDS Sensor, (f) Direct Current 555 gear Motor (2x), (g) Lithium Ion Cells (8x), (h) Limit Switch (2x), (i) Water Pump Motor(2x), (j) 0.5 m Power Sharing USB A to USB B Cable for Arduino UNO (1) (k) Syringes 50cc (12x),  Dpdt switches (2x) , (m) Acrylic sheets (2x), (n)  Threaded rods 3mm (3x), (o) coupler (2x) </p>
</div>

<h2>Overall Framework</h2>

<h3>1. Testing phase for sensors and implanting on ballast sysem</h3>
<br>
<div align="center">
<table>
  <tr>
    <td width="30%"> <img src = "testing_phase/2ND_Stage_testing_uno.jpg" width="100%"><br>(a) </td>
    <td width="30%"> <img src = "testing_phase/initial_01_testing.jpg" width="100%"><br>(b) </td>
    <td width="60%"> <img src = "testing_phase/sensors_arrangement.jpg" width="100%"><br>(c) </td>
  </tr>
</table>
<p>(a), (b), (c) initial testing , 2nd stage testing, sensor arrangement on ballast system.</p>
</div>
<br>




<h3>2. Circuit diagram for Raspberry pi-4</h3>

<br>

<div align="center">
<img src = "Circuit_diagram/rpi_circuit/circuit.png" width="70%">
<p>Circuit digram for raspberry pi-4 </p>
</div>



<h3>3.Circuit diagram for Arduino uno </h3>
<br>

<div align="center">
<table>
  <tr>
    <td width="50%"> <img src = "Circuit_diagram/arduino_circuit_diagram/motors_cicuit.png" width="100%"><br>(a) </td>
    <td width="50%"> <img src = "Circuit_diagram/arduino_circuit_diagram/sensor_ciruit.png"length= "120%", width="100%"><br>(b) </td>
  </tr>
</table>
<p>(a), (b) Circuit diagram for motors (left) Circuit diagram for sensors (right).</p>
</div>
<br>

<h3>2. Prototype Images</h3>

<br>

<div align="center">
<table>
  <tr>
    <td width="30%"> <img src = "Prototype_submarine_imgs/ballast_prototype.jpg" width="100%"><br>(a) </td>
    <td width="30%"> <img src = "Prototype_submarine_imgs/output_submarine_01.jpg" width="100%"><br>(b) </td>
     <td width="50%"> <img src = "Prototype_submarine_imgs/submarine_01_prop.png" width="100%"><br>(c) </td>
  </tr>
</table>
<p>(a), (b) , (c) Ballast System , subamarine output , Submarine output with propellor.</p>
</div>
<br>



## Results
Pushing and sucking

This video demonstrates the pushing and suction mechanism of water!!

![Demo](.github/assets/pushing_sucking_water.gif)



## Pushing the water
This video demonstrates the pushing mechanism of water!!

![Demo](.github/assets/Pushing_Water_video.gif)



## suction of water
This video demonstrates the sucking mechanism of water!!

 ![Demo](.github/assets/suction_of_water_video.gif)


## Raspberyy pi setup
This video demonstrates the setup of raspberry-pi4 without monitor

![Demo](.github/assets/rpi_setup_video.gif)





  

## Quick Links:
[![report](https://img.shields.io/badge/Final-Report-brightgreen)](https://github.com/mahi361/Design-and-fabrication-of-submarine-for-coral-reef-monitoriing/blob/main/Report/DP4_FINAL_REPORT_HINDUSTAN.pdf)
[![slides](https://img.shields.io/badge/Presentation-Slides-red)](https://github.com/mahi361/Design-and-fabrication-of-submarine-for-coral-reef-monitoriing/blob/main/.github/assets/ppt-final.pdf)
[![ICTAMDMES Confrence certficate](https://img.shields.io/badge/ICTAMDMES-Confrence-blue)](https://github.com/mahi361/Design-and-fabrication-of-submarine-for-coral-reef-monitoriing/blob/main/.github/assets/CamScan_22-08-2024_15-00-15.pdf)




## References Used:
-Obura, David O., et al. "Coral reef monitoring reef assessment technologies, and ecosystem-based management." Frontiers in Marine Science 6 (2019): 580.

-Hedley, John D., et al. "Remote sensing of coral reefs for monitoring and management: a review." Remote Sensing 8.2 (2016): 118.

-Risk, Michael J. "Paradise lost: how marine science failed the world's coral reefs." Marine and Freshwater Research 50, no. 8 (1999): 831-837.





# Pet Care robot
Pan_camera

This video will show the demonstrataion of pan_tilt_camera_in_mobile

![Example GIF](.github/assets/pan_videoo.gif)

## output video

This video will demonstarte how the robot moves and how the water and food will dispense in their respected boxes
![Examples GIF](.github/assets/output_video_01.gif)
