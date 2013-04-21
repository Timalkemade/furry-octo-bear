#include <Servo.h> 
//#include "DrivingController.h"
//#include "Sensor.h"
#include "Pin.h"
#include "WrappingArray.h"
#include "DirectionSensor.h"
#include "Sensor.h"
#include "Timer.h"

//DrivingController controller = DrivingController();
//Sensor distanceSensor = Sensor(DISTANCE_SENSOR);

int left = 0;
int delta = 8;
Timer timer(1000);
Timer milli(1);

int updates = 0;

DirectionSensor direction(LEFT_SOUND_SENSOR, RIGHT_SOUND_SENSOR, 5, 37);

void setup() {
    Serial.begin(9600);
    Serial.println("setup done");
    timer.reset();
}

void loop() {
    direction.update();
    updates++;
    if (timer.hasEnded()) {
        Serial.print("reset updates:");
        Serial.println(updates);
        Serial.println(direction.read());
        timer.reset();
        updates = 0;
    }
}

