int LED_BUILTIN = 32;

void setup() {
pinMode (LED_BUILTIN, OUTPUT);
Serial.begin(9600);
}

void loop() {
Serial.println("High");
digitalWrite(LED_BUILTIN, HIGH);
delay(1000);

Serial.println("Low");
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
}

