
boolean fire = false;
int tym = 0;
double thrust = 0;
void fireFue()
{
  
  tym = calculateTym(0);
  thrust = getWeight();
  Serial.print("TYM : ");
  Serial.print(tym);
  Serial.print(" , Thrust : ");
  Serial.println(thrust);
}
