INTRODUCTION

This project uses an ultrasonic sensor to indicate the distance of any object from it. Here we have made a setup based on a microcontroller in which real time distance
is sensed by an ultrasonic sensor and displays measured distance on an LCD display.


RESEARCH

The source code is to be compiled in VS CODE with AVR compiler. This DISTANCE MEASURING DEVICE in EMBEDDED C is not designed to run on the Turbo C versions. 


ABOUT 

ATMega328P  microcontroller needs to transmit at least 10 trigger pulse to HC-SR04 trig pin. After getting a trigger pulse ,HC-SR04 automatically sends eight 40Khz
sound waves and micrcontroller waits for raising the end output at the echo pin. When the raising edge capture occurs at the echo pin which is connected to an input 
of microcontroller , Timer starts and  again waits for the falling edge on the echo pin. as soon as the falling edge is caotured at the echo pin , the microcontroller 
reads the count of the timer. The time count is used to calculate the distance to an object.


4'W And 1'H

WHAT

Distance Measurement


WHERE

 For determining the distance between the objects or an obstacle without any manual measurment.


WHEN

Measure the distance to a wide range objects.


WHY

 As manual distance measuring is always done at the expense of human error.


HOW
Transmit sound waves towards a target and  determine its distance by measuring the time taken for the echo reach the source.


APPLICATION
* distance calculation in construction field
* Automatic Cars 
* Robotics


HIGH LEVEL REQUIREMENTS


| ID | Description | Category |
| --- | --- | --- | 
| HLR01 | User need to HC-SR04 | Technical |
| HLR02 | User need to ATMega328P for execution | Technical |
| HLR03 | AVR-ISP PROGRAMMER |Technical|
| HLR04 | ATMEGA328 MICROCONTROLLER |Hardware|

