double referenceVal = 0;
double cablibratedTerm = 10720;

void weightInit()
{
  scale.begin(dataPin, clockPin);

  Serial.print("UNITS: ");
  Serial.println(scale.get_units(10));
  
  Serial.println("\nEmpty the scale, press a key to continue");
  while(!Serial.available());
  while(Serial.available()) Serial.read();
  
  scale.tare();
  Serial.print("UNITS: ");
  Serial.println(scale.get_units(10));


   Serial.println("\nPut a 1 kg in the scale, press a key to continue");
   while(!Serial.available());
   while(Serial.available()) 
   Serial.read();
//
   scale.callibrate_scale(1000, 5);
//  Serial.print("UNITS: ");
//  Serial.println(scale.get_units(10));
   for(int i =0; i<10 ;i++)
  {
    referenceVal = scale.read();
    Serial.println(referenceVal);
    delay(10);
  }
  
  Serial.println("\nPut a 1 kg in the scale, press a key to continue");
  while(!Serial.available());
  while(Serial.available()) Serial.read();
}

double getWeight()
{
  double val = (scale.read() - referenceVal);
  if(val<10)
  val =0;
  
  double calculated = (val / cablibratedTerm)*100 ;
  return calculated;
}
