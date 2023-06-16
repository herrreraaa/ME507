# TERMPROJECT
This is the code for my ME507 term project 

The main peices of interest are located in /Drivers.
There are 5 drivers that I wrote, which are the following:

    /Drivers/Encoder    (Tracks the rotation of a motor shaft)
    
    /Drivers/FollowLine (Contains a line following process using line sensors)
    
    /Drivers/LineSensor (Returns the state of a line sesnor)
    
    /Drivers/Ultrasonic (Measures pulse width from an ultrsonic sensor and returns distance away based on that pulse width)
    
    /Drivers/motor      (Interfaces with motors)

This repository contains all the files used to run the code on the STM32F411 MCU for sake of maintaining everything together.
The directory:

    /docs/html

Contains doxygen documentation for the functions written in the custon drivers discussed above.
