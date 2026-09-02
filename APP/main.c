#define F_CPU 8000000UL
#include <util/delay.h>

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include "LED_int.h"
#include "SevSegment_int.h"

int main(void)
{
	u8 Local_u8Counter = 0;

	DIO_voidInitializion();

	while(1)
	{
		SevSegment_voidSetValue(Local_u8Counter);

		LED_voidToggle();

		_delay_ms(1000);

		Local_u8Counter++;
		if(Local_u8Counter > 9)
		{
			Local_u8Counter = 0;
		}
	}

	return 0;
}
