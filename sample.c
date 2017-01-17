//
// oled test program
// Written by Larry Bank
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "oled96.h"

int main(int argc, char *argv[])
{
int i;

	i=oledInit(0x3c);
	if (i == 0)
	{
		oledFill(0); // fill with black
		oledWriteString(0,0,"OLED 96 Library!",0);
		for (i=0; i<64; i++)
		{
			oledSetPixel(i, 16+i, 1);
			oledSetPixel(127-i, 16+i, 1);
		}
		usleep(8000000); // leave it showing for 8 seconds
		oledShutdown();
	}
   return 0;
} /* main() */