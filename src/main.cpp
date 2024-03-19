#include <Arduino.h>
#include <GFXMatrix.h>

GFXMatrix matrix(64, 64);

void setup()
{
    pinMode(LED_BUILTIN, OUTPUT);
    matrix.begin();
}

int i = 0;

void loop()
{
    digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN));

    matrix.clear();
    matrix.setCursor(0,32);
    matrix.setTextSize(1);
    matrix.println("Hi World");
    matrix.println(i++);
    matrix.display();
    delay(1000);
}
