const int sensorPin = D0;
const int relayPin = D5;
const int ledPin = D8;

void setup() {
  
  Serial.begin(115200);

  pinMode(relayPin, OUTPUT);
  pinMode(sensorPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
 
  int sensorValue = digitalRead(sensorPin);
Serial.println(sensorValue);

  if (sensorValue == HIGH) {
    digitalWrite(ledPin, LOW); 
    digitalWrite(relayPin, HIGH); 
  } else {
    digitalWrite(ledPin, HIGH); 
    digitalWrite(relayPin, LOW);
  }

  delay(200); 
}
