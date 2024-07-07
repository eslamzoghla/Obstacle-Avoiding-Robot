int Echo1 = 2; //left_sensor echo
int Trig1 = 4; //left_sensor trig
int Echo2 = 9; //central_sensor echo
int Trig2 = 11; //central_sensor trig
int Echo3 = 3; //right_sensor echo
int Trig3 = 5; //right_sensor trig

int in1 = 13; //pin 13 arduino
int in2 = 12; //pin 12 arduino
int in3 = 10; //pin 10 arduino
int in4 = 8;  //pin 8 arduino
int ENA = 7;  //pin 7 arduino
int ENB = 6;  //pin 6 arduino

int Left_motor_speed = 215; // From 10 TO 255
int Right_motor_speed = 135;

float velocity = 0.04; //cm/sec
float right_angular_velocity = 0.05; //degree/sec
float left_angular_velocity = 0.05; //degree/sec

int left_distance = 0, right_distance = 0, forward_distance = 0 ;

int Min_Distance = 18;
int Degree = 30;

void setup()
{
  Serial.begin(9600);
  pinMode(Echo1, INPUT);
  pinMode(Trig1, OUTPUT);
  pinMode(Echo2, INPUT);
  pinMode(Trig2, OUTPUT);
  pinMode(Echo3, INPUT);
  pinMode(Trig3, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  STOP();
}
void loop()
{
  forward_distance = forward_distance_read();
  delay(5);
  right_distance = right_distance_read();
  delay(5);
  left_distance = left_distance_read();
  delay(5);

  if (forward_distance <= Min_Distance) // Check if there is an object in forward
  {
    if (forward_distance <= 5) // If object so close of front of car => go Back
    {
      move_B();
//      delay(20);
    }
    else if (right_distance > Min_Distance && left_distance > Min_Distance ) // If the is no object in left and right diraction
    {
      if (right_distance > left_distance) // If Right > Left Then go right
      {
        rotate_degree(Degree, 'R');
        STOP();
      }
      else // otherwise go left
      {
        rotate_degree(Degree, 'L');
        STOP();
      }
    }
    else if (right_distance <= Min_Distance + 20) // If there is object on right and no in left then go Left
    {
      rotate_degree(Degree, 'L');
      STOP();
    }
    else if (left_distance <= Min_Distance) // If there is object on left and no in right, then go Right
    {
      rotate_degree(Degree, 'R');
      STOP();
    }
    else // Otherwise rotate with ratio degree
    {
      rotate_degree(Degree * 1.5, 'L');
      STOP();
    }
  }
  else {
    move_F();
  }
//  delay(100);
}
