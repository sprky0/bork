/*
Demonstrate sketches using common libraries in the repository
*/
#include <Bork.h>

Bork extBork;

void setup() {
	Serial.begin(9600);
}

void loop(){
	Serial.print(extBork.timeSinceStart());
	Serial.print("ms since start, ");
	Serial.print(extBork.timeSinceCheck());
	Serial.println("ms since asked");
}
