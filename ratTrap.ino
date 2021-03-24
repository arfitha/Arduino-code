int ldr=A0;
int buzzer=3;
void setup() 
{
  pinMode (ldr,INPUT);
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() 
{
  int ldr_reading =analogRead(ldr);
  Serial.print("Ldr value:");
  Serial.println(ldr_reading);
  if (ldr_reading > 1000)
  {
    Serial.print("Rat detected");
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
}
