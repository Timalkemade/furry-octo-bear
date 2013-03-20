#include <Servo.h> 
//#include "DrivingController.h"
//#include "Sensor.h"
#include "Pin.h"
#include "WrappingArray.hpp"
#include "DirectionSensor.h"

//DrivingController controller = DrivingController();
//Sensor distanceSensor = Sensor(DISTANCE_SENSOR);


int phase = 0;
long previousMillis = 0;
CrossCorrelation cross;
DirectionSensor direction = DirectionSensor(LEFT_SOUND_SENSOR, RIGHT_SOUND_SENSOR, 3);

int offset = 0;
int left = 9;
WrappingArray leftSignal = WrappingArray();
WrappingArray rightSignal = WrappingArray();

void setup() {
    Serial.begin(9600);
    Serial.println("setup done");
    
    fill(leftSignal, rightSignal);
}

void loop() {


    int dt = direction.minimizeCrossComparison(leftSignal, rightSignal);
    Serial.print("dt");
    Serial.println(dt);

    leftSignal.writeNext(left++);

    if (left > 26) {
        Serial.println("reset");
        fill(leftSignal, rightSignal);
        left = 9;
    }

    delay(2000);
}

void fill(WrappingArray& leftSignal, WrappingArray& rightSignal) {
    leftSignal.writeNext(0);
    leftSignal.writeNext(1);
    leftSignal.writeNext(2);
    leftSignal.writeNext(3);
    leftSignal.writeNext(4);
    leftSignal.writeNext(5);
    leftSignal.writeNext(6);
    leftSignal.writeNext(7);
    leftSignal.writeNext(8);

    rightSignal.writeNext(8);
    rightSignal.writeNext(9);
    rightSignal.writeNext(10);
    rightSignal.writeNext(11);
    rightSignal.writeNext(12);
    rightSignal.writeNext(13);
    rightSignal.writeNext(14);
    rightSignal.writeNext(15);
    rightSignal.writeNext(16);
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

