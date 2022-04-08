// Dæmi um notkun á 7Segment display
// Byggir á kóða héðan: https://lastminuteengineers.com/seven-segment-arduino-tutorial/

#include "SevSeg.h"

SevSeg sevseg;

void setup() {
    //Set to 1 for single digit display
    byte numDigits = 1;

    //defines common pins while using multi-digit display. Left empty as we have a single digit display
    byte digitPins[] = {};

    //Defines arduino pin connections in order: A, B, C, D, E, F, G, DP
    byte segmentPins[] = {8, 7, 11, 12, 13, 9, 10, 1};
    bool resistorsOnSegments = true;

    //Initialize sevseg object. 
    sevseg.begin(COMMON_CATHODE, numDigits, digitPins, segmentPins, resistorsOnSegments);

    sevseg.setBrightness(90);
}

void loop() { 
    for(int i = 0; i < 10; i++) {
        sevseg.setNumber(i);
        sevseg.refreshDisplay(); 
        delay(500);
    }
}