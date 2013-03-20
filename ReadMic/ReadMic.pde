const int micPin = A1;

const int red = 2;
const int yellow = 3;
const int pink = 4;
const int blue = 5;

int maxValue = 0;
int minValue = 1000;

long nextTime = 0;

boolean isNextTime(int interval) {
    long currentTime = millis();
    if(nextTime < currentTime) {
        nextTime = currentTime + interval;
        return true;
    }
    return false;    
}

boolean isNextLedTime() {
    
}
boolean isNextTime(long interval) {
    return millis() % interval == 0;
}

void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
    pinMode(red, OUTPUT);
    pinMode(yellow, OUTPUT);
    pinMode(pink, OUTPUT);
    pinMode(blue, OUTPUT);
}

void writeAtThreshold(int pin, int value, int thresholdValue) {
    if(value > thresholdValue) {
        digitalWrite(pin, HIGH);
    } else {
        digitalWrite(pin, LOW);
    }
}

int getAmplitude() {
    return maxValue - minValue;
}

void updateValues() {
    int sensorValue = analogRead(micPin);
    
    if(sensorValue < minValue) {
        minValue = sensorValue;
    }
    if(sensorValue > maxValue) {
        maxValue = sensorValue;
    }
}


void loop() {

    updateValues(); 

    if(isNextTime(50)) {
      
//        Serial.println(minValue);
//        Serial.println(maxValue);
//        Serial.println(getAmplitude());
//        Serial.println();
        
        writeAtThreshold(blue,   getAmplitude(), 200);
        writeAtThreshold(pink,   getAmplitude(), 400);
        writeAtThreshold(yellow, getAmplitude(), 600);
        writeAtThreshold(red,    getAmplitude(), 800);

        maxValue = 0;
        minValue = 1000;
    }
}
