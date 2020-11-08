String motion;

void setup() {
Serial.begin(9600);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
  Serial.println("Silakan ketik '1' untuk menyalakan lampu,'0' untuk mematikan lampu ");
  while (Serial.available()==0) { }
  motion =Serial.readString();
  if (motion=="1") {
    digitalWrite(3, HIGH);
    digitalWrite(2, HIGH);
    digitalWrite(4, HIGH);
  }
  if(motion=="0") {
    digitalWrite(3, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
  }
}
  
