
#include "msp430.h"
#include "clock_frequencies.h"


void setClock()
{
	 DCOCTL = 0;

	 BCSCTL1 = CALBC1_1MHZ;
	 DCOCTL = CALDCO_1MHZ;

}
