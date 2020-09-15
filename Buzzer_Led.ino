//BUZZER FUNCTIONS //////
void buzzLedInIt()
{
  pinMode(red , OUTPUT);
  pinMode(blue , OUTPUT);
  pinMode(green , OUTPUT);
  pinMode(buzz , OUTPUT);
  allLedHigh();
}

void buzzStart(int freqHz)
{
  tone(buzz, freqHz); 
}
void buzzStop()
{
  noTone(buzz);
}
void allLed()
{
    buzzLed(red , 3000 ,10 , 1);
 //  buzzLed(green , 3000 , 10 , 1);//
  //  buzzLed(blue , 3000 , 500 , 1);
}
void buzzer(int freqHZ , int howLong , int buzzFreq)
{
  for(int i =0 ; i<buzzFreq ; i++)
  {
  tone(buzz, freqHZ); 
  delay(howLong);        
  noTone(buzz);     
  delay(howLong);
  }
}
// COMBINED LED AND BUZZER FUNCTIONS //////
void buzzLed(int led , int freqHZ , int howLong , int buzzFreq)
{
   for(int i =0 ; i<buzzFreq ; i++)
  {
  digitalWrite(led ,0);
  tone(buzz, freqHZ); 
  delay(howLong);        
  noTone(buzz);  
  digitalWrite(led , 1);   
  delay(howLong);  
  } 
}
// LED FUNCTIONS ///////
void allLedHigh()
{
    digitalWrite(red,1);
    digitalWrite(green,1);
    digitalWrite(blue,1);
}
void Flight_Led(char colour , int howLong , int Freq)
{
  switch(colour)
 {
  case 'B' : for(int i = 0 ; i <= Freq ; i++)
          {  
             allLedHigh();
             tone(buzz, 1000);
             digitalWrite(blue , HIGH);
             delay(howLong);
             digitalWrite(blue , LOW);
             noTone(buzz);
             delay(howLong);
          }
          break;       
   case 'R' : for(int i = 0 ; i < Freq ; i++)
          {
             allLedHigh();
             digitalWrite(red , HIGH);
             tone(buzz, 1000);
             delay(howLong);
             digitalWrite(red , LOW);
             noTone(buzz);
             delay(howLong);
          }
          break;
   case 'G': for(int i = 0 ; i < Freq ; i++)
          {
             allLedHigh();
             digitalWrite(green , HIGH);
             tone(buzz, 1000);
             delay(howLong);
             digitalWrite(green , LOW);
             noTone(buzz);
             delay(howLong);
          }
          break;
}}
