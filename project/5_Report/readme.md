
#  Automation System For Smart Home


##  Table of Contents






## Introduction


- The main purpose of this  project is to develop a system for controlling common home electrical devices based on the conditions noticed.

- Taking our first module into consideration our first requirement was to establish a control which can be both automatic and manual. The automatic control relies on contolling of relay using RF signal.

- In addition motor shall be ON  when the temperatere is increased than the rated value and fan shall be turned OFF when the temperature is under the rated value which requires a relay.

- Led is blinked when Motion sensor detects any  moving object inside/entrance of the home to alert the owner in case of intrusion. 





## Objective

- Our Agenda is to obtain Lighting control of the house, curtain control, Fan control, gate contol and security control of outer portion of house.




# SWOT  Analysis


## Stength

- Maximum home security.
- Increased energy efficiency.
- Home management insights.
- Modernisation of home appliances usage...

## Weakness

- Complex technology.
- Technical security threats..

## Oppurtunities

- Advancement in the technology.
- Security.
- SMS message configuration to the user...

## threats

- Failure of power supply leads to shut down of the complete system..


# 4W's and 1H

## Who:
The system is used by domestic users in the home/house or in the offices ,appartments etc..

## What:
This system is used to monitor and control various appliances present in the house.

## When:
Home Automation system is used when the user enters the home needs to operate the appliances.

## where:
This system is used in the home,apartments,offices etc..

## How:
The Home Automation system is used by installing the setup in the home. 





# Requirements


## High Level Requirements



| RID | Description |
| :---: | :------: |
| HLR1 | Home shall be Automated |
| HLR2 | System shall sense the motion |
| HLR3 | System shall sense the light intensity |
| HLR4 | System shall sense the temperature |




## Low Level Requirements


| RID | Description |
| :---: | :------: |
| LLR1 | Led shall be turned ON and shall be displayed if Motion sensor detects |
| LLR2 | Fan shall be turned ON if the temperature is increased then the rated value |
| LLR3 | Fan shall be turned OFF if the temperature is less than the rated speed |
| HLR4 | Microcontroller shall be used for the automated operation |






## Block Diagram:



![block diagram](https://user-images.githubusercontent.com/98834933/157230423-e075a471-d957-4df3-9982-ff9143c061ed.JPG)




## Components Used

- Arduino uno
- LCD Display
- LEDs
- Sensors
- Relay
- Motor(actuator)



## Software Used

- Simulation( simulIDE )
- Code( ArduinoIDE )




## Explanation of Components Used




1. Arduino


![arduino](https://user-images.githubusercontent.com/98834933/157231813-f356075a-4e9d-4ad4-ab59-154140476523.png)


-Arduino UNO has the micro-controller ATmega328 embedded in it.
-It has 14 digital I/O pins out of which 6 provide PWR output.
-It is an open-source and provides prototype platform.
-It also has a 16MHX crystal oscillator attach to it.
-In addition to above features, it also has an USB connection, a power jack, an ICSP, header and reset button.
-It can simply be connect to a computer using an USB cable or power it with an AC or a DC adapter or a bettery.




2. LCD Display


![lcd](https://user-images.githubusercontent.com/98834933/157232192-c4ed79bc-0f48-4685-8598-6d67274010a3.jpg)



- LCD csreen is a flat-panel display, electronic visual display that uses the light-modulating properties of liquid crystal and LCD's are available to display arbitrary images, Preset words, digits and 7-segment dispalys.





3. LEDs


![led](https://user-images.githubusercontent.com/98834933/157236849-df0c0768-aa07-468d-a288-6dafb18ac0d0.jpg)




- LED is a light-emitting diode.
- It is a semi-conductor diode that emits light when conducting current.




4. Sensors

- Temperature sensor is used in the project for turning ON/OFF of the Motor. 
- Motion sensor is used for the detection of the objects.
- LDR sensor is used fo the turning ON/OFF lights depending upon the light intensity.




5. Relay


![relay](https://user-images.githubusercontent.com/98834933/157232679-3c7ae747-1896-4241-a54e-3989f4d50eda.png)



-They are very useful in switching from one circuit to another when they are completely seperated.
-The relays comprise of an input and an output section.
-The input section has a coil which produces magnetic field when a small voltage from an electrical circuit is     applied.
-This applied voltage is known as the operating voltage.




6. Motor


![motor](https://user-images.githubusercontent.com/98834933/157234539-0112b75d-78ba-47e9-b228-e0fba6e6f8ff.png)



- A DC motor is a class of electrical motors that converts direct current electrical energy into mechanical energy.
- DC motors use magnetic fields that occur from the electrical currents generated, which powers the movement of a   rotar fixed within the output shaft.
- The output torque and speed depends upon both the electrical input and the design of the motor.





## Flow chart


![flow chart](https://user-images.githubusercontent.com/98834933/157175746-adecad15-256c-4366-801f-5ab14eb7985d.jpg)





## Structural Diagram

![structural drawio](https://user-images.githubusercontent.com/98834933/157175769-1ed62857-ecb9-49d2-a6da-e85d398a015f.png)





## Uml Diagram


![uml diagram](https://user-images.githubusercontent.com/98834933/157175757-f765be0f-0b35-477e-9e82-55d14e782a17.png)








# Test Plan



## High Level Test:

| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| HLT1 | Motion Sensor |  Motion shall be sensed | Sensed | Sensed | Pass |
| HLT2 | LDR Sensor |  Light shall be sensed | Sensed | Sensed | Pass |
| HLT3 | Temperature Sensor | Temperature shall be sensed | Sensed | Sensed | Pass | 





## Low Level Test


## Low Level Test for Motion Sensor(Using LED)


| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 1.1 | Test for Motion Sensor |  In the simulation, motion sensor is replaced by Switch( when switch is high) | Led ON | Led ON | Pass |
| LLT 1.2 | Test for Motion Sensor | When the switch is low  | Led OFF | Led OFF | Pass |





## Low Level Test for Motion Sensor(Using Display)



| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 1.3 | Test for Motion Sensor |  When Switch is High | Motion Detected | Motion Detected | Pass |
| LLT 1.4 | Test for Motion Sensor |  When switch is Low | Motion Not Detected | Motion Not Detected | Pass |







## Low Level Test for LDR Sensor(Using LED)



| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 2.1 | Test for LDR Sensor |  In the simulation, LDR sensor is replaced by Switch( when switch is high) | Led OFF | Led OFF | Pass |
| LLT 2.2 |  Test for LDR Sensor | When the switch is low | Led ON | Led ON | Pass |






## Low Level Test for LDR Sensor(Using Display)



| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 2.3 | Test for LDR Sensor |  When Switch is High | Lights OFF | Motion OFF | Pass |
| LLT 2.4 | Test for LDR Sensor |  When switch is Low | Lights ON | Lights ON | Pass |







## Low Level Test for Temperature Sensor(Using Motor)



| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 3.1 | Test for Temperature Sensor |  For the simulation of Temperature sensor it is replaced by Potentiometer(High) | Motor ON | Motion ON | Pass |
| LLT 3.2 | Test for Temperature Sensor |  When Potentiometer is Low | motor OFF | Motor OFF | Pass |




## Low Level Test for Temperature Sensor(Using Display)


| Test id | Description | Expected i/p | Expected o/p | Actual o/p | Pass/Fail |
| :-----: | :---------: | :----------: | :--------:   | :--------: | :--------:|
| LLT 3.3 | Test for Temperature Sensor |  For the simulation of Temperature sensor it is replaced by Potentiometer(Initial stage) | TEMPERATURE=0 *c | TEMPERATURE=0 *C| Pass |
| LLT 3.4 | Test for Temperature Sensor |  When Potentiometer is slightly increased | TEMPERATURE= 45 *C | TEMPERATURE= 45 *C | Pass |







# Output 




# LED 2 gets Turned On when LDR(switch) is OFF

![light on](https://user-images.githubusercontent.com/98834933/157223917-df32ce6c-7c3c-4794-ab12-7d76168c4358.JPG)



# LED 2 gets Turned OFF when LDR(switch) is ON

![light off](https://user-images.githubusercontent.com/98834933/157223935-1d97e29c-ec54-4db5-bc73-6fb6f08136c0.JPG)



# Fan is turned OFF when Temperature is <30 *c(normal conditon)

![fan off normal](https://user-images.githubusercontent.com/98834933/157223959-55c21091-9f36-4aa1-a4dc-5f6ddbebef37.JPG)



# Fan is turned ON when Temperature is >30 *c(abnormal conditon)

![fan On abnormal](https://user-images.githubusercontent.com/98834933/157223986-0809e8cf-aa3e-4754-be61-44f56e3c22e1.JPG)



# LED 1 is turned OFF when Motion sensor(switch) is OFF

![motion not detect](https://user-images.githubusercontent.com/98834933/157224012-7d6726f1-0abf-468c-bc22-55f656f4193c.JPG)



# LED 1 is turned ON when Motion sensor(switch) is ON

![motion detected](https://user-images.githubusercontent.com/98834933/157224035-68c76459-6bd0-45dd-983e-0a7ddaa64cfc.JPG)





## Simulation Video




https://user-images.githubusercontent.com/98834933/157240719-1250ab44-0e12-4b05-a31e-3e8874e3ec0d.mp4








# Advantages


- Easier to ON and OFF the lights and fan etc.

- Save energy with smart energy consumption.

- Know about the service and maintainence.

- Customize as per your convience.

- Ease of using smart home technology.





# Disadvantages


-Installiation is costly

-Works only when the object or user is in the range of sensor

-Continuous Power supply is required





# Application


-Industries, Residential , Commercial Purpose

-Smart Home Appliances.

-safety and security, etc.
