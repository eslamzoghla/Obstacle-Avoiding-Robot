int left_distance_read()
{
  digitalWrite(Trig1, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig1, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig1, LOW);
  float Fdistance = pulseIn(Echo1, HIGH);
  //  delay(10);
  Fdistance = (Fdistance * 0.034) / 2;
  return (int)Fdistance;
}

int forward_distance_read()
{
  digitalWrite(Trig2, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig2, HIGH);
  delayMicroseconds(10); //20
  digitalWrite(Trig2, LOW);
  float Fdistance = pulseIn(Echo2, HIGH);
  //  delay(10);
  Fdistance = (Fdistance * 0.034) / 2;
  return (int)Fdistance;
}
int right_distance_read()
{
  digitalWrite(Trig3, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig3, HIGH);
  delayMicroseconds(10); //20
  digitalWrite(Trig3, LOW);
  float Fdistance = pulseIn(Echo3, HIGH);
  //  delay(10);
  Fdistance = (Fdistance * 0.034) / 2;
  return (int)Fdistance;
}

void sensor_testing() {
  while (1) {
    right_distance_read();
    left_distance_read();
    forward_distance_read();
    Serial.print(left_distance);
    Serial.print(" , ");
    Serial.print(forward_distance);
    Serial.print(" , ");
    Serial.println(right_distance);
  }
}
