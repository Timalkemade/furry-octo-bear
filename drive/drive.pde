#include <Servo.h> 
//#include "DrivingController.h"
//#include "Sensor.h"
#include "Pin.h"
#include "WrappingArray.hpp"
#include "DirectionSensor.h"

//DrivingController controller = DrivingController();
//Sensor distanceSensor = Sensor(DISTANCE_SENSOR);

int left = 0;
int delta = 8;

DirectionSensor direction(LEFT_SOUND_SENSOR, RIGHT_SOUND_SENSOR, 3, 10);

void setup() {
    Serial.begin(9600);
    Serial.println("setup done");

    fill(direction);
}

void loop() {
    Serial.println();
    double angle = direction.read();
    Serial.print("angle: ");
    Serial.println(angle);

    direction.update(left++, 1025);

    if (left > 28) {
        Serial.println("reset");
        left = 0;
        fill(direction);
    }

    delay(2000);
}

void fill(DirectionSensor& sensor) {
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
    sensor.update(left++, left + delta);
}

int minElement(int elements[], int size) {
    int minValue = 10000;
    int minIndex = 0;
    for (int i = 0; i < size; i++) {
        if (elements[i] < minValue) {
            minValue = elements[i];
            minIndex = i;
        }
    }
    return minIndex;
}

