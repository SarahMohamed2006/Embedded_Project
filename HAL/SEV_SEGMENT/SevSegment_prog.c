#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"

#include "SevSegment_int.h"
#include "SevSegment_private.h"
#include "SevSegment_config.h"

void SevSegment_voidSetValue(u8 Num)
{
	if(Num <= 9)
	{
		DIO_voidSetPortValue(SEVSEG_u8_PORT, SevSegment_u8Pattern[Num]);
	}
}
