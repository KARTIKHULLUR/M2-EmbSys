#   Thermal Printer

Thermal printer is often referred as receipt printer. It is widely used in restaurants, ATM, shops and many other places where receipts or bill is required. It is a cost-effective solution and very handy to use from the user’s side as well as from the developer’s side. A thermal printer uses a special printing process which uses thermochromic paper or thermal paper for printing. The printer head is heated at a certain temperature that when the thermal paper passes from the print head, the paper coating turns black in the areas where the printer head is heated.


## Block Diagram




![new printer](https://user-images.githubusercontent.com/98834933/154832796-e8d2e5e5-ede7-4c0b-85c0-b964343c799d.png)





##  Components of Basic Thermal Printer-

-  Power Supply
-  Microcontroller
-  Printing Head
-  paper Sensor Circuit
-  Motor Driver
-  Stepper Motor
-  Temperature Sensor Circuit
-  User Interface



1) Power Supply: A power supply is an electrical device that supplies electric power to an electrical load. The main purpose of a power supply is to convert electric current from a source to the correct voltage, current, and frequency to power the load. As a result, power supplies are sometimes referred to as electric power converters.

2) Microcontroller: Microcontrollers are used in automatically controlling of printing head , paper sensor circuit ,motor driver , temperature sensor circuit along with the power supply module.It is the master head if the printer which have the control over all the sensors,commands etc.

3) Printing Head: The printhead is a component in a printer that performs the operation of burning of a dye, eventually which prints the impression on the paper. It's typically located under the cover of your printer, and it can become clogged with ink over time. 

4) Paper Sensor Circuit: It is the sensor which sense the paper availability in the printer for the printing operation.

5) Motor Driver: It is the driver which controls the speed of the stepper motor which is neccessary for the printing operation.

6) Stepper Motor: It is the main motor which performs  the process of the priting.

7) Temperatue Sensor Circuit: It sense the temperature while burning of the dye and sends the signal to the microcontroller.

8) User Interface: It is the communication between the user and the device, where user gives the command instruction  to the device that printing of a document done.


## pros


1. No involvement of cartridges or ribbons and thus organizations can save investment by using thermal printers.

2. Easier to use as there are less buttons and use of software involved.

3. Popular in noise-free environments and are great for offices.

4. Largely inexpensive and come in various models and sizes.

5. More efficient and faster in printing monochromic ones compared to other forms of printing.

6. More durable compared to other printers.


## cons

1. Unlike standard printers, thermal printers usually do not print out colors well.

2. If they become too heated to operate, the ink consumed would be more and the printing may not be precise.

3. Printhead could be harmed by the high heat used while printing, often resulting on cost to repair when it break down.



## High Level Requirements


*  Communication between the user and device.

*  Printing of a receipt for comfirmation of transaction.


## Low Level Requirements


* For communicating with the user ,initially device should configure to the computer to get command from the user by connecting through blueetooth/wifi/usb cable.

* To proceed with the printing User must check the availability of paper and the dye required for the process .

* To get print out of the receipt the user should select or generate the receipt of the transaction and click on the print option in the print window.


