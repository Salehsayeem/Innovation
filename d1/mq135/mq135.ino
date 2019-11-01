#include <MQ135.h>
//#include <Wire.h>
int pin = A0;
int sensorValue;
MQ135 gasSensor = MQ135(pin);

float rzero = gasSensor.getRZero();

int ppm = gasSensor.getPPM();
void setup()
{
  Serial.begin(9600); // sets the serial port to 9600 
}
void loop()
{
  sensorValue = analogRead(pin);

 Serial.println("A0=" + (String)sensorValue + " Resis=" + (String)gasSensor.getResistance() + " ");
   float rzero = gasSensor.getRZero();
  Serial.println("rzero=" + (String)rzero + "    ");
  float co2_ppm = gasSensor.getPPM();
  int ppm = co2_ppm / 4;
  Serial.println("co2ppm=" + (String)co2_ppm + "    ");
  delay(1000);

}
