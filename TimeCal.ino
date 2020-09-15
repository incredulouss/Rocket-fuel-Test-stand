
long calculateTym(unsigned long now)
{
  long prev = 0;
  while(now == prev)
  now = millis();
  prev = now;
  float times = (now)/1000;
  return times;
}

//unsigned long now = startTimer(0);
//delay(1000);
//Serial.println(now);
