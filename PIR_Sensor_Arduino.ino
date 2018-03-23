int led = 13;
int pin = 2;

int value = 0;
int pirState = LOW;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop() {

  value = digitalRead(pin);

  if (value == HIGH) {
    digitalWrite(led, HIGH);

    if (pirState == LOW) {
      Serial.println("Motion Detected!");
      pirState = HIGH;
    }
  }else{
    digitalWrite(led, LOW);

    if(pirState == HIGH){
      Serial.println("Motion Ended!");
      pirState = LOW;
      }
    }
}

