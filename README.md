

<h1 align="center"> Iot based pet care robot </h1>
<p align="center">
<img src=".github/assets/hits_logo.png" width="700" height="">
</p>





> *Abstract:*The IoT-based pet care robot that is designed to provide convenient and intelligent care for pets. The robot is equipped with a pan-tilt camera, which can be remotely controlled to monitor pets' movements and activities in real-time. 
The robot also includes a food and water dispenser that can be triggered manually. Additionally, the robot has the ability to move and navigate around the home to follow pets as they move about and a webpage and app are  designed for the pet owners to control the camera, movement, food and water dispenser of the robot

Group Members:

* [Mahidhar kollipara](https://github.com/mahi361)
* [G.Anirudh](https://in.linkedin.com/in/anirudh-gattamaneni-893884218)
* v.kushin
* v.sri naveen


<h2>pet care robot</h2>

<div align="center">
<img src = "https://github.com/mahi361/petcare_robot/blob/main/Design_files/design_01.png" width="100%">
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
# Pet Care robot
Pan_camera

This video will show the demonstrataion of pan_tilt_camera_in_mobile

![Example GIF](.github/assets/pan_videoo.gif)

## output video

This video will demonstarte how the robot moves and how the water and food will dispense in their respected boxes
![Examples GIF](.github/assets/output_video_01.gif)





  

## Quick Links:
[![report](https://img.shields.io/badge/Final-Report-brightgreen)](https://github.com/mahi361/petcare_robot/blob/main/.github/assets/DP2_PET%20CARE.pdf)
[![slides](https://img.shields.io/badge/Presentation-Slides-red)](https://github.com/mahi361/petcare_robot/blob/main/.github/assets/final_ppt_pet.pdf)
[![SCRS publication ](https://img.shields.io/badge/SCRS-Publication-blue)](https://www.publications.scrs.in/chapter/978-81-975670-3-2/3)




## References Used:
https://ijireeice.com/wp-content/uploads/2022/12/IJIREEICE.2022.101204.pdf
https://www.semanticscholar.org/paper/The-Study-and-Application-of-the-IoT-in-Pet-Systems-Own-Shin/7422df6cca241a3d34cbf48bd3660ef07b2089f0
https://ijaem.net/issue_dcp/Pet%20Monitoring%20Robot%20Using%20Iot.pdf
http://www.ijmerr.com/uploadfile/2021/0727/20210727112956864.pdf
https://www.jetir.org/papers/JETIR1904I61.pdf
https://www.sphinxsai.com/2017/ch_vol10_no14/2/(253-258)V1)






