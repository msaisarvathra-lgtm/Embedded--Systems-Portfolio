const int PIR_PIN=2;
const int LED_PIN=4;
const int BUZZER_PIN=6;
int motionstate=HIGH;
void setup()
{
  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
  noTone(BUZZER_PIN);
  Serial.begin(9600);
  Serial.println("PIR Motion Detector");
  Serial.println("Waiting for PIR sensor");
  
}

void loop()
{
  int pir_value=digitalRead(PIR_PIN);
  if (pir_value==HIGH)
  {
    tone(BUZZER_PIN,1000);
    digitalWrite(LED_PIN, HIGH);
    if (motionstate==HIGH)
    {
      Serial.println("Motion detected");
      motionstate=LOW;
    
    }
}
else
{
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);
    if (motionstate==LOW)
    {
      Serial.println("Motin stopped");
      motionstate=HIGH;
    }
    delay(1000);
  }
}
