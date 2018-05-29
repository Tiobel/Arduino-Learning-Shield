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

// Download and Install the PCD8544 Library from
// https://github.com/Tiobel/Arduino-Learning-Shield/tree/master/Library/PCD8544
#include <PCD8544.h>

static PCD8544 lcd;


// Download and install dht.h library from
// http://playground.arduino.cc/Main/DHTLib
#include <dht.h>

#define dht_pin 12 //DATA Pin from DHT11 Sensor connected to Digital Pin 12
dht DHT;


void setup() {
  
  // Start Nokia LCD and define the screen resolution
  lcd.begin(84, 48);

}


void loop() {

  DHT.read11(dht_pin); //Read the sensor data

  //Start printing in the Nokia LCD
  lcd.setCursor(0, 0);        //Place the cursor in the first position, first line
  lcd.print("Temperature:");  //Write in the LCD
  lcd.setCursor(0, 1);        //Place the cursor in the first position, second line
  lcd.print(DHT.temperature); //Write in the LCD

  lcd.setCursor(0, 3);        //Place the cursor in the first position, third line
  lcd.print("Humidity:");     //Write in the LCD
  lcd.setCursor(0, 4);        //Place the cursor in the first position, fourth line
  lcd.print(DHT.humidity);    //Write in the LCD


  //Wait 2s for a new reading
  delay(2000);

}
