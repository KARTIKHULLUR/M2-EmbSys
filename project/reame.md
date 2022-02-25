#  Home Automation System



##  Table Of Contents



## Indroduction


- The main purpose of this  project is to develop a system for controlling common home electrical devices using wireless to enable direct control.

- Taking our first module into consideration our first requirement was to establish a control which can be both automatic and manual. The automatic control relies on contolling of relay using RF signal.

- Second is curtain control which is also working in two modes namely automatic and manual .In automatic mode curtains gets lifted up as soon as sun rises with the help of a LDR. In manual mode a complete control is given to user for lifting curtain up and down.

- Fan controlling is  provided as our third module  which requires a relay.

- Security of outer portion is also provided by a motion detecting sensor to alert the owner in case of intrusion.



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





## Low Level Requirements




## Block Diagram:





## Block Diagram Description:


Microcontroller:

- A microcontroller (MCU for microcontroller unit) is a small computer on a single metal-oxide-semiconductor (MOS) integrated circuit (IC) chip.

- A microcontroller contains one or more CPUs (processor cores) along with memory and programmable input/output peripherals.

- ATmega16 is 8-bit AVR microcontroller with 32 I/O pins. It is interfaced with sensors and character LCD to design the circuit of this project.


LCD Display:

- LCD stands for Liquid crystal display. 16×2 LCD is named so because it has 16 Columns and 2 Rows.

- A character LCD is interfaced to the controller to display the  temperature and Led light status etc  of the appliances in the home.


Temperature Sensor:

- A temperature sensor is a device, usually an RTD (resistance temperature detector) or a thermocouple, that collects the data about temperature from a particular source and converts the data into understandable form for a device or an observer.

- LM35 is a popular temperature sensor. The sensor has three terminals.


LDR Sensor:

- The LDR sensor is used to detect day or night in this circuit. The LDR sensor is two-terminal light sensitive resistor.

- It is connected as a voltage divider network at bit 0 of Port A of the ATmega32.


IR Sensors:

- There are two IR sensor modules used in the project. The two modules are used to detect entrance and exit of a visitor.

- Each sensor module is built from a pair of IR Transmitter and IR Receiver.

- The emitter is simply an IR LED and the detector is simply an IR photodiode which is sensitive to IR light of the same wavelength as emitted by the IR LED.


Stepper Motor:

- Complete curtain control via two mode switch and  a Stepper motor.


PIR Sensor:

-This Passive Infrared Sensor (PIR) module is used for motion detection. It can be uses as motion detector on your robot. It can work from 5V to 9V DC and gives digital output. It requires 10-60 seconds of settling time before starting its operation.


Voltage Regulator:

- A voltage regulator is a circuit that creates and maintains a fixed output voltage, irrespective of changes to the input voltage or load conditions.


Power Supply:

- The circuit can be powered by a battery and 5V regulator IC like 7805.

- It can also be powered through AC mains by using a step down transformer and rectifier circuit with 7805 voltage regulator.



## Advantages

- Easier to ON and OFF the lights and fan etc.

- Save energy with smart energy consumption.

- Know about the service and maintainence.

- Customize as per your convience.

- Ease of using smart home technology.



## Disvantages

- more cost

- System shutdowns when there is a powercut.

- Less Technical security.