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

int ledBlue = 5;    //Declare the Blue Led in the RGB
int ledGreen = 9;   //Declare the Green Led in the RGB
int ledRed = 6;     //Declare the Red Led in the RGB

int blue_pwm = 0;    //Variable to store the PWM value of the blue led
int red_pwm = 0;     //Variable to store the PWM value of the red led
int green_pwm = 0;   //Variable to store the PWM value of the green led


void setup() {

  pinMode(ledBlue, OUTPUT);     //Define ledBlue pin as OUTPUT
  pinMode(ledGreen, OUTPUT);    //Define ledGreen pin as OUTPUT
  pinMode(ledRed, OUTPUT);      //Define ledRed pin as OUTPUT

}


void loop() {

  //Low 
  red_pwm = red_pwm + 1;
  green_pwm = green_pwm + 5;
  blue_pwm = blue_pwm + 3;

  if (red_pwm > 255) red_pwm = 0;
  if (green_pwm > 255) green_pwm = 0;
  if (blue_pwm > 255) blue_pwm = 0;

  analogWrite(ledRed, red_pwm);     // send the value to the LED
  analogWrite(ledGreen, green_pwm); // send the value to the LED
  analogWrite(ledBlue, blue_pwm);   // send the value to the LED

  delay(100);

}
