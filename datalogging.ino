int analogPin = A4  ; // potentiometer wiper (middle terminal) connected to analog pin 3
                    // outside leads to ground and +5V
int val = 0;  // variable to store the value read
float temp;


void setup() {
  Serial.begin(9600);           //  setup serial
}

void loop() {
  val = analogRead(analogPin);  // read the input pin

  temp = map(val, 205, 1023, -20.0, 80.0);
  
  Serial.print("Temperature = ");
  Serial.println(temp);
    
  delay(100);
}
