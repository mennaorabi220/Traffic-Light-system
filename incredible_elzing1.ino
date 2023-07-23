// C++ code
//
void setup()
{
 pinMode(9,OUTPUT);
pinMode(4,OUTPUT);
pinMode(2,OUTPUT);

}

void loop()
{
   digitalWrite(9,1);
  delay(1000);
  digitalWrite(4,1);
  delay(1000);
  digitalWrite(4,0);
  delay(1000);
  digitalWrite(4,1);
  delay(1000);
  digitalWrite(4,0);
  delay(1000);
  digitalWrite(4,1);
  delay(1000);
  digitalWrite(4,0);
  digitalWrite(9,0);
  digitalWrite(2,1);
  delay(1000);
  digitalWrite(2,0);
  delay(1000);
}