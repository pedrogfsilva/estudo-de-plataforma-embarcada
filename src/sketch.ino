int ledPin = 5;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial1.begin(115200);
  Serial1.println("LED control: Type '1' to turn on, '0' to turn off");
}

void loop() {
  if (Serial1.available() > 0) {
    char command = Serial1.read();
    if (command == '1') {
      digitalWrite(ledPin, HIGH);
      Serial1.println("LED ligado");
    } else if (command == '0') {
      digitalWrite(ledPin, LOW);
      Serial1.println("LED desligado");
    }
  }
}
