int relay1 = 5;
int relay2 = 6;
int relay3 = 7;
int relay4 = 12;
int reg = A0;
int speed;
int sec = 0;

void setup() {
  Serial.begin(9600);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
}

void loop() {
  speed = analogRead(reg);
  digitalWrite(relay4, HIGH);
  digitalWrite(relay1, LOW);
  speed = analogRead(reg);
  delay(speed);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, LOW);
  speed = analogRead(reg);
  delay(speed);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, LOW);
  delay(speed);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, LOW);
  speed = analogRead(reg);
  delay(speed);
}
