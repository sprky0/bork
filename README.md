# Bork

This library is intended to demonstrating using common cpp libraries inside of the workspace from a shared lib directory under version control.

This is what your README.md should approximately look like if you care enough to make one.  Hey listen buddy i'm no doctor, what do I know?

## API

### Public methods

#### unsigned long `timeSinceCheck`
* returns unsigned long representing time elapsed since this function was last called
* first request is equivalent to a call to timeSinceStart()

#### unsigned long `timeSinceStart`
* returns unsigned long representing time elapsed since the sketch started running

## Examples

The following sketch will print the response from both methods in the loop, just really clogging that puppy right up. This demonstrates a 'sketch' using this library.

```
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

```
