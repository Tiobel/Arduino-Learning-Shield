/*****************************  Instructions  *****************************
  1. Upload the code to your Arduino board;
  2. Press one button to increase one of the colors of the RGB LED
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

int button_1 = A3;    //Declare the button 1 pin
int button_2 = A4;    //Declare the button 2 pin
int button_3 = A5;    //Declare the button 3 pin

int blue_pwm = 0;    //Variable to store the PWM value of the blue led
int red_pwm = 0;     //Variable to store the PWM value of the red led
int green_pwm = 0;   //Variable to store the PWM value of the green led



void setup() {
  // put your setup code here, to run once:

  pinMode(ledBlue, OUTPUT);     //Define ledBlue pin as OUTPUT
  pinMode(ledGreen, OUTPUT);    //Define ledGreen pin as OUTPUT
  pinMode(ledRed, OUTPUT);      //Define ledRed pin as OUTPUT

  pinMode(button_1, INPUT);     //Define button_1 pin as INPUT
  pinMode(button_2, INPUT);     //Define button_2 pin as INPUT
  pinMode(button_3, INPUT);     //Define button_3 pin as INPUT

}

void loop() {
  // put your main code here, to run repeatedly:

  //If button 1 is pressed increase the PWM value of blue led by 10
  if (digitalRead(button_1) == LOW) {
    
    blue_pwm = blue_pwm + 1;

    delay(10);

    if (blue_pwm > 254)blue_pwm = 0; //If blue_pwm variable is greater than 254, go back to 0

    //Update values in the RGB LED
    analogWrite(ledBlue, blue_pwm);

  }

  //If button 2 is pressed increase the PWM value of red led by 10
  if (digitalRead(button_2) == LOW) {
    
    red_pwm = red_pwm + 1;

    delay(10);

    if (red_pwm > 254)red_pwm = 0; //If red_pwm variable is greater than 254, go back to 0

    //Update values in the RGB LED
    analogWrite(ledRed, red_pwm);

  }

  //If button 3 is pressed increase the PWM value of green led by 10
  if (digitalRead(button_3) == LOW) {
    
    green_pwm = green_pwm + 1;

    delay(10);

    if (ledGreen > 254)ledGreen = 0; //If ledGreen variable is greater than 254, go back to 0

    //Update values in the RGB LED
    analogWrite(ledGreen, green_pwm);

  }


}
