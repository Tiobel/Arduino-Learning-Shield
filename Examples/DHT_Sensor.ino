/*****************************  Instructions  *****************************
  1. Upload the code to your arduino board;
  2. Open a Serial Monitor window in the Arduino IDE;
  3. See the Temperature and Humidity in the serial monitor
***************************** Instructions  *****************************

  Arduino ->  Pinout Arduino Learning Shield
    D2 -> Nokia LCD RST Pin
    D3 -> Nokia LCD CE Pin
    D4 -> Nokia LCD DC Pin
    D5 -> RGB (Blue)
    D6 -> RGB (Red)
    D7 -> LED 4
    D8 -> LED 3
    D9 -> RGB (Green)
    D10 -> Buzzer
    D11 -> Nokia LCD DIN Pin
    D12 -> DHT Data Sensor Pin
    D13 -> Nokia LCD CLK
    A0 -> Photo-Resistor (LDR)
    A1 -> Potentiometer
    A2 -> LED 2
    A3 -> Button S2
    A4 -> Button S3
    A5 -> Button S4
*/

//Donload and intall dht.h library from
// http://playground.arduino.cc/Main/DHTLib
#include <dht.h>

#define dht_pin 12 //DATA Pin from DHT11 Sensor connected to Digital Pin 12

dht DHT;

void setup()
{
  Serial.begin(9600); //Start Serial COM

  delay(1000);  //Wait 1s
}

void loop()
{
  DHT.read11(dht_pin); //Read the sensor data

  //Print the Data in Serial monitor
  Serial.print("Temperature = ");
  Serial.print(DHT.temperature);
  Serial.print("C");

  Serial.print(" / ");

  Serial.print("Humidity = ");
  Serial.print(DHT.humidity);
  Serial.println("%");

  //Wait 2s for a new reading
  delay(2000);
}
