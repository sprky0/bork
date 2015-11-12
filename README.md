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

## MIT License

Copyright © 2015 Sprky0

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.  IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.

https://opensource.org/licenses/MIT
