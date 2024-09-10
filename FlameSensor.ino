// Define the pins

int flameSensorAnalogPin = A0; // Analog output connected to A0
int flameSensorDigitalPin = 2; // Digital output connected to pin 2

void setup() {
  Serial.begin(9600);        
  pinMode(flameSensorAnalogPin, INPUT);
  pinMode(flameSensorDigitalPin, INPUT);
}

void loop() {
  int analogValue = analogRead(flameSensorAnalogPin); 
  int digitalValue = digitalRead(flameSensorDigitalPin);

  Serial.print("Analog Value: ");
  Serial.print(analogValue); 
  Serial.print(" | Digital Value: ");
  Serial.println(digitalValue); 

  delay(1000); // Delay for a second before next read
}
