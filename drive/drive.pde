#include <Servo.h> 
#include "DrivingController.h"
#include "Sensor.h"
#include "PinMapper.h"

DrivingController controller = DrivingController();
Sensor distanceSensor = Sensor(DISTANCE_SENSOR);

int phase = 0;
long previousMillis = 0;

void setup() {
    Serial.begin(9600);
    Serial.println("setup done");
}

void loop() {
    if (distanceSensor.read() > 400) {
        controller.goLeft();
    } else {
        controller.goForward();
    }
}





