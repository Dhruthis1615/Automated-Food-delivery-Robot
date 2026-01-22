# Automated Food Delivery Robot 🤖🍽️

## Overview
The **Automated Food Delivery Robot** is an embedded systems–based autonomous robot designed primarily for **college canteens and small hotels**. The robot automates short-distance food delivery by navigating to a selected table number, reducing manual effort and improving service efficiency.

The current version of the robot supports delivery to **four predefined tables**, selected using a keypad interface. The selected table number is displayed on an OLED screen for clear visual confirmation.

---

## Objectives
- To automate food delivery in indoor environments
- To reduce human effort in canteens and small hotels
- To implement table-based navigation using user input
- To design a simple, scalable embedded system solution

---

## Features
- Keypad-based table selection
- OLED display for table number indication
- Autonomous movement to selected table
- Motor control using L298N motor driver
- Battery-powered portable system
- Modular design for future expansion

---

## System Components

### Hardware Used
- **L298N Motor Driver**
- **DC Motors (2)**
- **Wheels (2)**
- **Power Distribution Board**
- **Li-ion Batteries**
- **Keypad**
- **OLED Display**

> *Note:* An ultrasonic sensor for obstacle detection was initially implemented but later removed in the final working version.

---

## Working Principle
The user selects a table number using the keypad. The selected table number is immediately displayed on the OLED screen for confirmation. Based on the input, the microcontroller drives the DC motors through the L298N motor driver, allowing the robot to move towards the corresponding table location.

The current implementation supports navigation to **four predefined tables**, each mapped to a specific movement sequence.

---

## Project Limitations
- Supports delivery to only four tables
- Fixed movement paths (no dynamic navigation)
- Obstacle detection is not included in the final version

---

## Applications
- College canteens
- Small hotels and cafés
- Indoor food delivery systems
- Educational robotics projects

---

## Future Improvements
- Increase the number of supported tables
- Re-integrate obstacle detection using ultrasonic sensors
- Implement wireless control or app-based ordering
- Add line-following or smart navigation
- Improve battery management and efficiency

---

## Author
**Dhruthi Sridhar**  
**Mehnaaz Jaffar**
**Keerthi R**
**Monisha D**
---

## License
This project is developed for academic and educational purposes.
