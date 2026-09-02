#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"

#include "LED_int.h"
#include "LED_private.h"
#include "LED_config.h"

void LED_voidOn(void)
{
	DIO_voidSetPinValue(LED_u8_PORT, LED_u8_PIN, HIGH);
}

void LED_voidOff(void)
{
	DIO_voidSetPinValue(LED_u8_PORT, LED_u8_PIN, LOW);
}

void LED_voidToggle(void)
{
	DIO_voidTogglePinValue(LED_u8_PORT, LED_u8_PIN);
}
