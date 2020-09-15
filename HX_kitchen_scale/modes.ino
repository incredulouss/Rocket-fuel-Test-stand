
void launchMode()
{
  finalAutoSequence();
  digitalWrite(red ,1);
  for(int i =0;i<100; i++)
  {
  long aa = calculateTym(0);
  Serial.println(aa);
  }

}
void finalAutoSequence()
  {
   int fre = 1100;
  int howLong = 900;
  for(int i =0;i<10;i++)
  {
  digitalWrite(red ,0);
  tone(buzz, fre);
  delay(howLong);    
  noTone(buzz);    
  digitalWrite(red ,1); 
  delay(100); 
  } 

  }
