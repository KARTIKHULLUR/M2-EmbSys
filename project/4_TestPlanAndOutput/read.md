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




# LED gets Turned On when LDR(switch) is OFF

![light on](https://user-images.githubusercontent.com/98834933/157223917-df32ce6c-7c3c-4794-ab12-7d76168c4358.JPG)



# LED gets Turned OFF when LDR(switch) is ON

![light off](https://user-images.githubusercontent.com/98834933/157223935-1d97e29c-ec54-4db5-bc73-6fb6f08136c0.JPG)



# Fan is turned OFF when Temperature is <30 *c(normal conditon)

![fan off normal](https://user-images.githubusercontent.com/98834933/157223959-55c21091-9f36-4aa1-a4dc-5f6ddbebef37.JPG)



# Fan is turned ON when Temperature is >30 *c(abnormal conditon)

![fan On abnormal](https://user-images.githubusercontent.com/98834933/157223986-0809e8cf-aa3e-4754-be61-44f56e3c22e1.JPG)



# LED is turned OFF when Motion sensor(switch) is OFF

![motion not detect](https://user-images.githubusercontent.com/98834933/157224012-7d6726f1-0abf-468c-bc22-55f656f4193c.JPG)



# LED is turned ON when Motion sensor(switch) is ON

![motion detected](https://user-images.githubusercontent.com/98834933/157224035-68c76459-6bd0-45dd-983e-0a7ddaa64cfc.JPG)
