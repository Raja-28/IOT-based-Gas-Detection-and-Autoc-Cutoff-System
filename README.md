
 IoT-Based Gas Detection and Auto Cutoff System

 Overview

This project demonstrates an IoT-based system designed to detect hazardous gas levels (e.g., LPG) and automatically shut off the gas supply to prevent potential accidents. The system uses an Arduino Uno microcontroller, an LPG gas sensor (e.g., MQ-2), a servo motor, a MOSFET, a cooling fan, and other components to ensure safety by monitoring gas levels in real-time and triggering protective measures if a gas leak is detected.

 Features

- Real-time Gas Monitoring: Continuously monitors the environment for dangerous gas levels.
- Automatic Gas Shutoff: Activates a servo motor to close the gas valve if a gas leak is detected.
- Cooling System Activation: Turns on a cooling fan to prevent overheating or further hazards.
- User-Friendly Design: Easy to assemble with commonly available components.
- Arduino-Based: Utilizes the Arduino platform for easy coding and hardware integration.

 Components

- Arduino Uno
- LPG Gas Sensor (MQ-2)
- Servo Motor
- MOSFET
- Cooling Fan
- Resistor (10kΩ)
- Breadboard
- Connecting Wires


 How It Works

1. Gas Detection:
   - The MQ-2 gas sensor measures the concentration of LPG in the surrounding air.
   - The analog signal from the sensor is fed to the Arduino, where it is processed to determine if the gas level exceeds a predefined threshold.

2. Automatic Gas Shutoff:
   - If the gas concentration exceeds the threshold, the Arduino triggers the servo motor to rotate, closing the gas valve.

3. Cooling System:
   - Simultaneously, the cooling fan is activated via the MOSFET to help dissipate heat and reduce the risk of explosion.

4. Normal Operation:
   - If the gas level is below the threshold, the valve remains open, and the cooling fan stays off.

 Arduino Code

You can find the Arduino code here(link_to_code_file).

 Setup Instructions

1. Assemble the Circuit:
   - Connect the LPG gas sensor, servo motor, MOSFET, cooling fan, and other components to the Arduino Uno as described in the circuit diagram.

2. Upload the Code:
   - Open the Arduino IDE.
   - Copy and paste the provided Arduino code into the IDE.
   - Connect your Arduino Uno to your computer using a USB cable.
   - Upload the code to the Arduino.

3. Test the System:
   - Power the system and test it by introducing a small amount of LPG gas near the sensor.
   - Observe the servo motor closing the valve and the cooling fan turning on when the gas is detected.

 Calibration

- Adjust the `gasThreshold` value in the code to match the sensitivity of your gas sensor and the desired detection level.
- Ensure that the sensor is placed in an area where it can effectively monitor gas levels without obstruction.

 Future Enhancements

- IoT Integration: Implement wireless communication (e.g., Wi-Fi or GSM) to send real-time alerts to a mobile device or cloud platform.
- Battery Backup: Add a battery backup to ensure the system operates during power outages.
- Multi-Gas Detection: Expand the system to detect multiple types of gases using additional sensors.

 Contributing

Contributions are welcome! Feel free to submit a pull request or open an issue for any suggestions or improvements.

 Contact

For any inquiries, please reach out to Your Raja(mailto: rajaccet28@gmail.com ).
