

<h1 align="center"> Iot based pet care robot </h1>
<p align="center">
<img src=".github/assets/hits_logo.png" width="700" height="">
</p>





> *Abstract:*The IoT-based pet care robot that is designed to provide convenient and intelligent care for pets. The robot is equipped with a pan-tilt camera, which can be remotely controlled to monitor pets' movements and activities in real-time. 
The robot also includes a food and water dispenser that can be triggered manually. Additionally, the robot has the ability to move and navigate around the home to follow pets as they move about and a webpage and app are  designed for the pet owners to control the camera, movement, food and water dispenser of the robot

Group Members:

* [Mahidhar kollipara](https://github.com/mahi361)
* [G.Anirudh](https://github.com/ANNIGAT/IoT_based_pet_Care_Robot)
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
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/esp32-cam.jpeg" width="100%"><br>(a) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/esp32.jpeg" width="100%"><br>(b) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/servo_motor.jpeg" width="100%"><br>(c) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/200%20rpm.jpeg" width="75%"><br>(d) </td>
  </tr>
  <tr>  
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/li-ion.jpeg" width="1005"><br>(e) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/l298n.jpeg" width="100%"><br>(f) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/Screenshot%202025-05-25%20170041.png" width="100%"><br>(g) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/buck.jpeg" width="100%"><br>(h) </td>
  </tr>
    <tr>  
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/pump%20motor.jpeg" width="100%"><br>(j) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/wheels.jpeg" width="100%"><br>(j) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/acrylic.jpeg" width="100%"><br>(k) </td>
    <td width=25%> <img src = "https://github.com/mahi361/petcare_robot/blob/main/components/pvc.jpeg" width="100%"><br>(l) </td>
  </tr>  
  
  </tr>
</table>
<p>(a)	ESP32 cam module (1), (b) 	ESP32 (1), (c) SG90 servo motor, (d) 200 RPM DC motor (1), (e) Lithium ion cells (8x), (f) L298N Motor Driver (1), (g) channel relay system (2x), (h) DC to DC Buck Convertor, (i) Water Pump Motor(1), (j) Wheels (4x) , (k)  Acrylic sheets , (l) Pvc pipes (2x) </p>
</div>

<h2>Overall Framework</h2>

<h3>1. Web page to control the robot</h3>
<br>
<div align="center">
<table>
  <tr>
    <td width="100%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Web_page_interface/web_page.png" width="100%"> </td>
   
  </tr>
</table>
<p>Web page with live video.</p>
</div>
<br>


<h3>2. Sinric app to control dispensing system</h3>

<br>

<div align="center">
<table>
  <tr>
    <td width="50%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Sinric_app/app.png" width="100%"><br>(a) </td>
    <td width="50%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Sinric_app/notifications_from_app.png" width="100%"><br>(b) </td>
    
  </tr>
</table>
<p>(a), (b) ,  Sinric app  , notifications from sinric app.</p>
</div>
<br>








<h3>3. Circuit diagram </h3>

<br>

<div align="center">
<img src = "https://github.com/mahi361/petcare_robot/blob/main/Circuit_Diagram/circuit_dia.jpg" width="70%">
<p>Main Circuit Diagram </p>
</div>



<h3>4.Circuit diagram -2 </h3>
<br>

<div align="center">
<table>
  <tr>
    <td width="50%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Circuit_Diagram/2nd_circuit_dia.png" width="100%"> </td>
  </tr>
</table>
<p> Circuit diagram for dispensing system.</p>
</div>
<br>

<h3>5. Prototype Images</h3>

<br>

<div align="center">
<table>
  <tr>
    <td width="30%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Prototype_imgs/1.png" width="100%"><br>(a) </td>
    <td width="30%"> <img src = "https://github.com/mahi361/petcare_robot/blob/main/Prototype_imgs/2.png" width="100%"><br>(b) </td>
   
  </tr>
</table>

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






