#include <Servo.h> 

Servo myservo;  // create servo object to control a servo 

int target = 0;
long previousMillis = 0;
int currentDirection = 0;

boolean isNextTime(long interval) {
    unsigned long currentMillis = millis();
    boolean isTime = false;
    if(currentMillis - previousMillis > interval) {
      previousMillis = currentMillis;
      isTime = true;
    }
    return isTime;
}

void setup() {
    Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps
    myservo.attach(9);  // attaches the servo on pin 9 to the servo object 
    delay(5000);
}

void loop() {
    if(currentDirection < 180) {
        if(isNextTime(1000)) {
            currentDirection++;
            Serial.println(currentDirection);
            myservo.write(currentDirection);
        }
    }
}
