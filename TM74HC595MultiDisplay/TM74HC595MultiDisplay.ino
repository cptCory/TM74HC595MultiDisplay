/*
 Name:		TM74HC595MultiDisplay.ino
 Created:	31-Mar-18 22:49:40
 Author:	cptCory
*/

// the setup function runs once when you press reset or power the board
#include "TM74HC595Multi.h"

TM74HC595Multi disp(4,5,6);

void setup() {

}

// the loop function runs over and over again until power down or reset
void loop() {
	disp.digit4(1987);
}
