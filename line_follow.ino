// HRTE PROJECTS LINE FOLLOW ROBOT 
//CREATED BY - UCHITHA INDURANGA x)
#define M1 1
#define M2 2
#define M3 3
#define M4 4
#define sensor1 8
#define sensor2 9
int robolinefollow1;
int robolinefollow2;
void setup() {
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  pinMode(sensor1 , INPUT);
  pinMode(sensor2 ,INPUT);

}

void loop() {
   robolinefollow1 = digitalRead(sensor1); 
  if( robolinefollow1 == LOW)
{  digitalWrite (M1,LOW);
   digitalWrite (M2,HIGH);
}
 else{
 digitalWrite (M2,LOW);
 digitalWrite (M1,HIGH);
}
 robolinefollow2 = digitalRead(sensor2);
if( robolinefollow2 == LOW)
{
  digitalWrite (M3,HIGH);
  digitalWrite (M4,LOW);

  }
else{
  digitalWrite (M4,HIGH);
  digitalWrite (M3,LOW);

}
}
