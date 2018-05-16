/*****************************	Instructions 	*****************************
  1. Upload the code to your Arduino board;
  2. All 3 Green Led's should blink with one second interval
*****************************	Instructions 	*****************************

	Arduino ->	Pinout Arduino Learning Shield
		D2 -> Nokia LCD RST Pin
		D3 -> Nokia LCD CE Pin
		D4 -> Nokia LCD DC Pin
		D5 -> RGB (Green)
		D6 -> RGB (Red)
		D7 -> LED 4
		D8 -> LED 3
		D9 -> RGB (Blue)
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

int ledPin_2 = A2;		//Declare the Led 2 pin
int ledPin_3 = 8;		//Declare the Led 3 pin
int ledPin_4 = 7;		//Declare the Led 4 pin


void setup() {
  // put your setup code here, to run once:

  //Initialize Pins as output's
  pinMode(ledPin_4, OUTPUT);
  pinMode(ledPin_2, OUTPUT);
  pinMode(ledPin_3, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //Turn ON all LED's
  digitalWrite(ledPin_4, HIGH);
  digitalWrite(ledPin_2, HIGH);
  digitalWrite(ledPin_3, HIGH);

  delay(1000);	//Wait 1s

  //Turn OFF all LED's
  digitalWrite(ledPin_4, LOW);
  digitalWrite(ledPin_2, LOW);
  digitalWrite(ledPin_3, LOW);

  delay(1000);	//Wait 1s

}
