void setup()
{
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  pinMode(4,INPUT);
  pinMode(5,INPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}
void loop() {
  if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH&&digitalRead(4)==HIGH&&digitalRead(5)==HIGH)
{
  digitalWrite(6,LOW);
  
  digitalWrite(7,LOW);
  
  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  
}
else if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH&&digitalRead(4)==HIGH)
{digitalWrite(6,LOW);

digitalWrite(7,LOW);

digitalWrite(8,LOW);

digitalWrite(9,HIGH);

}
else if(digitalRead(3)==HIGH&&digitalRead(4)==HIGH&&digitalRead(5)==HIGH)
{
  digitalWrite(6,HIGH);
  
  digitalWrite(7,LOW);
  

  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  

}
else if(digitalRead(2)==HIGH&&digitalRead(3)==HIGH&&digitalRead(5)==HIGH)
{
   digitalWrite(6,HIGH);
   
  digitalWrite(7,LOW);
  
  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  

}
else if(digitalRead(2)==HIGH&&digitalRead(4)==HIGH&&digitalRead(5)==HIGH)
{  digitalWrite(6,LOW);

  digitalWrite(7,HIGH);
  
  digitalWrite(8,LOW);
  
  digitalWrite(9,LOW);
  
}
else if(digitalRead(2)==HIGH)
{
  digitalWrite(6,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  delay(500);
digitalWrite(8,HIGH);
delay(500);
digitalWrite(9,HIGH);
delay(500);
}
else if(digitalRead(3)==HIGH)
{digitalWrite(6,HIGH);
delay(500);
digitalWrite(7,LOW);
delay(500);
digitalWrite(8,HIGH);
delay(500);
digitalWrite(9,HIGH);
delay(500);
}
else if(digitalRead(4)==HIGH)
{
  digitalWrite(6,HIGH);delay(500);
  digitalWrite(7,HIGH);delay(500);
  digitalWrite(8,LOW);delay(500);
  digitalWrite(9,HIGH);delay(500);

}
else if(digitalRead(5)==HIGH)
{
 digitalWrite(6,HIGH);delay(500);
  digitalWrite(7,HIGH);delay(500);
  digitalWrite(8,LOW);delay(500);
  digitalWrite(9,HIGH);delay(500);
}
else 
{digitalWrite(6,HIGH);delay(500);
  digitalWrite(7,HIGH);delay(500);
  digitalWrite(8,HIGH);delay(500);
  digitalWrite(9,HIGH);delay(500);}
}