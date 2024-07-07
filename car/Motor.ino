void move_F()
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ENA, Right_motor_speed);
  analogWrite(ENB, Left_motor_speed);
}
void move_B()
{

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ENA, Right_motor_speed);
  analogWrite(ENB, Left_motor_speed);
  delay(20);
}
void move_R()
{

  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  analogWrite(ENA, Right_motor_speed);
  analogWrite(ENB, Left_motor_speed);
}
void move_L()
{

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  analogWrite(ENA, Right_motor_speed);
  analogWrite(ENB, Left_motor_speed);
}
void STOP()
{
  digitalWrite(in1, LOW); //stop
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  digitalWrite(ENA, LOW);
  digitalWrite(ENB, LOW);
}

void rotate_degree(float degree, char rotation_direction) {
  // This function is named rotate_degree and takes two parameters: 'degree' (a floating-point value) and 'rotation_direction' (a character).
 
  // Calculate the time delays required for right and left rotation based on the provided degree and angular velocities.
  int right_time_delay = int(degree / right_angular_velocity);
  int left_time_delay = int(degree / left_angular_velocity);
 
  
  STOP();
  delay(200);
  if (rotation_direction == 'R' || rotation_direction == 'r') // Check if the rotation direction is 'R' or 'r' (right).
  {
    move_R();
    delay(right_time_delay);
    // Delay for the calculated 'right_time_delay'. This is to allow the car to rotate to the right for a specific duration.
  }

  if (rotation_direction == 'L' || rotation_direction == 'l') {
    move_L();
    delay(left_time_delay);
    // Delay for the calculated 'left_time_delay'. This is to allow the car to rotate to the left for a specific duration.
  }

  STOP();
  delay(200);
}
