/*****************************	Instructions 	*****************************
* 1. Upload the code to your arduino board;
* 2. Open a Serial Monitor window in the Arduino IDE;
* 3. Cover the Photo-Resistor sensor (LDR) and watch the value of the analog input change;  
*****************************	Instructions 	*****************************
*
*	Arduino ->	Pinout Arduino Learning Shield
*		D2 -> Nokia LCD RST Pin
*		D3 -> Nokia LCD CE Pin	
*		D4 -> Nokia LCD DC Pin
*		D5 -> RGB (Green)
*		D6 -> RGB (Red)
*		D7 -> LED 4
*		D8 -> LED 3
*		D9 -> RGB (Blue)
*		D10 -> Buzzer
*		D11 -> Nokia LCD DIN Pin
*		D12 -> DHT Data Sensor Pin
*		D13 -> Nokia LCD CLK
*		A0 -> Photo-Resistor (LDR)
*		A1 -> Potentiometer 
*		A2 -> LED 2
*		A3 -> Button S2
*		A4 -> Button S3
*		A5 -> Button S4
*/

int ldr_sensor = A0;	//Declare the ldr sensor pin

void setup() {
  
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  
  // read the input on analog pin 0:
  int sensorValue = analogRead(ldr_sensor);
  
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
}
