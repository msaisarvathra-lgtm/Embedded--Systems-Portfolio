#include <IRremote.hpp>

const int rcvPin = 3;
const int outputPin = 5;

void setup()
{
  Serial.begin(9600);

  // Start IR receiver
  IrReceiver.begin(rcvPin, ENABLE_LED_FEEDBACK);

  pinMode(outputPin, OUTPUT);
}

void loop()
{
  if (IrReceiver.decode())
  {
    unsigned long value = IrReceiver.decodedIRData.decodedRawData;

    Serial.print("Received code: ");
    Serial.println(value);

    switch (value)
    {
      case 4010852096:
        // Remote button 1
        Serial.println("Button 1");
        digitalWrite(outputPin, HIGH);
        break;

      case 3994140416:
        // Remote button 2
        Serial.println("Button 2");
        digitalWrite(outputPin, LOW);
        break;

      default:
        Serial.println("Unknown button");
        break;
    }

    // Prepare to receive the next signal
    IrReceiver.resume();
  }
}
