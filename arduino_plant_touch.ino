#include <CapacitiveSensor.h>

CapacitiveSensor Sensor1 = CapacitiveSensor(4, 6);
CapacitiveSensor Sensor2 = CapacitiveSensor(8, 10);

long val1;
long val2;
int pos;
#define led 13

void setup()
{
Serial.begin(9600);
pinMode(led, OUTPUT);
}

void loop()
{
val1 = Sensor1.capacitiveSensor(30);
val2 = Sensor2.capacitiveSensor(30);
Serial.print(val1);
Serial.print(" ");
Serial.print("\t");
Serial.print(val2);
Serial.print(" ");
Serial.print("\t");

Serial.println();
delay(2);

if (val1 >= 100 && pos == 0)
{
digitalWrite(led, HIGH);
pos = 1;
delay(500);
}

else if (val1 >= 100 && pos == 1)
{
digitalWrite(led, LOW);
pos = 0;
delay(500);
}

if (val2 >= 100 && pos == 0)
{
digitalWrite(led, HIGH);
pos = 1;
delay(500);
}

else if (val2 >= 100 && pos == 1)
{
digitalWrite(led, LOW);
pos = 0;
delay(500);
}
delay(10);
}
