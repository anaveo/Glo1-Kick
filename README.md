# Glo1-Kick

For more information regarding this project's Kickstarter page, please click [here](https://www.kickstarter.com/projects/omnitech/glo-a-hackable-arduino-based-rgb-led-strip-controller?ref=user_menu).

Click [here](https://omanavekar.wixsite.com/ommakes/glo-rev-1) to access the project's main page on [omlabs.me](https://omanavekar.wixsite.com/ommakes)

Glo can be reprogrammed with customizable unique patterns via the Arduino interface. Switching between modes can be done by pressing two buttons on the right side of the board. Since Glo has usable GPIO ports available, LEDs can be controlled by adding external sensors, modules, or communication devices. Glo is also equipped with a hall effect sensor. This device can detect magnetic fields and can be used to change the LED pattern based on magnetic interaction. This can be used for several applications such as sensing if doors or drawers are open or detecting the speed of a bicycle wheel.

## Features
* 4 addressable RGB LED channels
* 1x Digital pin (D2), 8x Analog Pins (A0-A7), and Serial Transmission Pins (TX & RX). However, analog pins may be used as digital pins if necessary. These can be used to wire up other sensors and modules.
* 3x GND pins, 2x 5V pins, 2x 3.3V pins, 1x VIN (voltage supplied by power supply) pin, and 1x RESET pin.
* Open source Arduino-compatible microcontroller (Atmega 328p)
* FT232 USB to Serial converter chip. This chip is used on official Arduino boards and does not contain driver issues commonly found in clones (devices using the CH340G chip).
* Advanced Monolithic Systems AMS1117 Voltage Regulator for microcontroller
* Hall effect sensor. This sensor detects the presence of nearby magnets. For example, this allows for rotation based patterns if Glo is mounted on a bicycle tire.
* Mini USB serial programming port
* Power and status LEDs
* Mini USB 5V power port and terminal block 5-12V power port. Useful for 12V 3pin addressable LEDs
* A 1 amp thermal fuse has been added to the USB Power Port. This is a safety feature meant to prevent damage to your USB power supply as most USB devices have a maximum current   tolerance of 1 amp. In the case that more than 1 amp is drawn from your USB port, the fuse will open the circuit and will reset itself when less than an amp is drawn. If you     would like to bypass the fuse, you can remove it by desoldering the component (marked F1) or soldering a jumper connecting the component's two leads together.

## Compatible LED Types & Maximum LED Control
Glo is designed to work with addressable LEDs/LED strips such as Adafruit Neopixels (SK6812) and WS2812B LEDs (commonly found on addressable LED strips, matrices, etc).

Glo is designed to be powered either via 5V from its USB power port, or 5V from its screw terminal power port. However, the screw terminal power port can accept voltages between 5-12V, meaning addressable LEDs with higher voltages can be controlled using Glo. Glo does not support 4-pin 12V led strips. These strips are not individually addressable and contain an entirely different pinout.

Glo can safely control up to 240 individual LEDs, or 60 LEDs per channel. This allows for control of:

26 feet/8 meters of low-density strips (30 LEDs per meter)
13 feet/4 meters of medium-density strips (60 LEDs per meter)
5.5 feet/1.6 meters of high-density strips (144 LEDs per meter)

## Maximum Current Capability
While control is one thing, power distribution is another issue. Since standard Neopixel/WS2812B LEDs pull ~60mA of current each at maximum brightness (All Red, Green, and Blue sectors on full), 240 LEDs will require 14.4 amps at maximum. While Glo can handle this amount of current, it is not advised to run all 240 LEDs at maximum brightness continuously, as this can overheat both the LEDs and the controller.

It is recommended to keep current usage at 10 amps or below, to protect the electronics involved from overheating. Since most addressable LED projects utilize changing colors and animations, it is likely that this amount of current will never be sourced.

This means that the amount of LEDs that can be powered is dependant on the power supply you plan to use. Make sure that your power supply is capable of supplying the required current for your project before you turn the lights on!

## Important Connection Information
* **DO NOT** connect Glo's USB power port and its Power Terminal to a voltage source at the same time. This may damage the controller as well as both power supplies. 

* Glo has a feature in which it can be programmed while power is supplied through its USB power port or Power Terminal. This allows you to test LED patterns without having to unplug your power source.

* If you are powering Glo via the Power Terminal (2 pin green connector) when programming the device, connect your computer's USB cable to the **PROGRAM PORT ONLY**

    * Connecting your computer's USB to the power port will result in a dual voltage source and could damage your computer's USB port, as well as the controller.
    * All ports and their pinouts have been marked on the underside of the PCB.

* Please connect your LED strips and power supplies based on the pinouts given on the underside of the board. Incorrect wiring may lead to LED damage or failure.

