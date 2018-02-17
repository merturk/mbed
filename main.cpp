#include "mbed.h"

DigitalOut ledGreen(LED1);
DigitalOut ledRed(LED2);


Serial out(USBTX, USBRX);

int main() {

	ledGreen = 1;

	while (true) {
		ledGreen = !ledGreen;
		wait(1);
		ledRed = !ledRed;

		out.printf("led on \n");
	}

}
