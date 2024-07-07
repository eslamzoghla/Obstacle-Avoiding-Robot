# Obstacle-Avoiding-Robot with Arduino
An obstacle-avoiding robot project involves designing and constructing a robotic car capable of automatically navigating through an environment while avoiding obstacles in its path. Typically, such a robot is equipped with sensors, such as ultrasonic sensors, to detect obstacles and determine their proximity.

![image](https://github.com/eslamzoghla/Obstacle-Avoiding-Robot/assets/95759229/bc40e818-7e59-4426-8e68-252857017acb)


## Abstract
The obstacle-avoiding robot project focuses on the development of an autonomous robotic car capable of intelligently navigating its surroundings while evading obstacles. Essential to this project is the integration of sensors, particularly ultrasonic sensors, which enable the robot to detect obstacles and dynamically adjust its path to avoid collisions.

## Hardware Components
- **Ultrasonic Sensors:**
  - Left Sensor: Echo1 (Pin 2), Trig1 (Pin 4)
  - Central Sensor: Echo2 (Pin 9), Trig2 (Pin 11)
  - Right Sensor: Echo3 (Pin 3), Trig3 (Pin 5)

- **Motor Control:**
  - Motor Pins: in1 (Pin 13), in2 (Pin 12), in3 (Pin 10), in4 (Pin 8)
  - Motor Speed Control: ENA (Pin 7), ENB (Pin 6)

- **Motor Speeds:**
  - Left Motor Speed: 135
  - Right Motor Speed: 215

- **Angular Velocities:**
  - Velocity: 0.04 cm/sec
  - Right Angular Velocity: 0.05 degree/sec
  - Left Angular Velocity: 0.05 degree/sec

- **Distances and Thresholds:**
  - Minimum Distance: 18 cm
  - Rotation Degree: 30 degrees

## Setup
1. Connect the ultrasonic sensors and motor control pins to the specified Arduino pins.
2. Adjust motor speeds and angular velocities as needed.

https://github.com/eslamzoghla/Obstacle-Avoiding-Robot/assets/95759229/cdfe1bd9-ee08-48bb-868b-b9fbef9b9faa

## Functions
- `move_F()`: Move the car forward.
- `move_B()`: Move the car backward.
- `move_R()`: Rotate the car to the right.
- `move_L()`: Rotate the car to the left.
- `STOP()`: Stop the car.
- `rotate_degree(float degree, char rotation_direction)`: Rotate the car by a specified degree and direction.
- `left_distance_read()`, `forward_distance_read()`, `right_distance_read()`: Read distances from the corresponding sensors.
- `sensor_testing()`: Continuous testing of sensor readings.

## Usage
1. Upload the code to your Arduino board.
2. Connect the robot to a power source.
3. Observe the robot's behavior in response to obstacles.

Feel free to modify the code according to your specific requirements and experiment with different parameters for optimal performance. If you encounter any issues or have suggestions for improvement, please feel free to open an issue or contribute to the project. Happy coding!
