const int sensorPin = A0;
const int ledPin = 2;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(sensorPin, INPUT);
    Serial.begin(9600);
}

void loop()
{
    // read analog input through analog-digital converter
    int adcValue = analogRead(sensorPin);
    // divide by adc range and multiply max voltage range
    float voltage = adcValue * (5.0 / 1023.0);
    // remove the base/offset voltage, multiply 100 to celcius range
    float tempC = (voltage - 0.5) * 100.0;

    // if temp gt ambient temperature
    if (tempC > 28.0) {
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }

    Serial.println(tempC);
    delay(500);
}