#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_int.h"
#include "DIO_private.h"
#include "DIO_config.h"

void DIO_voidInitializion(void)
{
	DIO_u8_DDRA_REG = (DIO_PORTA_PIN0_DIR<<0) | (DIO_PORTA_PIN1_DIR<<1) | (DIO_PORTA_PIN2_DIR<<2) | (DIO_PORTA_PIN3_DIR<<3) |
	                   (DIO_PORTA_PIN4_DIR<<4) | (DIO_PORTA_PIN5_DIR<<5) | (DIO_PORTA_PIN6_DIR<<6) | (DIO_PORTA_PIN7_DIR<<7);

	DIO_u8_DDRB_REG = (DIO_PORTB_PIN0_DIR<<0) | (DIO_PORTB_PIN1_DIR<<1) | (DIO_PORTB_PIN2_DIR<<2) | (DIO_PORTB_PIN3_DIR<<3) |
	                   (DIO_PORTB_PIN4_DIR<<4) | (DIO_PORTB_PIN5_DIR<<5) | (DIO_PORTB_PIN6_DIR<<6) | (DIO_PORTB_PIN7_DIR<<7);

	DIO_u8_DDRC_REG = (DIO_PORTC_PIN0_DIR<<0) | (DIO_PORTC_PIN1_DIR<<1) | (DIO_PORTC_PIN2_DIR<<2) | (DIO_PORTC_PIN3_DIR<<3) |
	                   (DIO_PORTC_PIN4_DIR<<4) | (DIO_PORTC_PIN5_DIR<<5) | (DIO_PORTC_PIN6_DIR<<6) | (DIO_PORTC_PIN7_DIR<<7);

	DIO_u8_DDRD_REG = (DIO_PORTD_PIN0_DIR<<0) | (DIO_PORTD_PIN1_DIR<<1) | (DIO_PORTD_PIN2_DIR<<2) | (DIO_PORTD_PIN3_DIR<<3) |
	                   (DIO_PORTD_PIN4_DIR<<4) | (DIO_PORTD_PIN5_DIR<<5) | (DIO_PORTD_PIN6_DIR<<6) | (DIO_PORTD_PIN7_DIR<<7);
}

void DIO_voidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
	case DIO_u8_PORTA:
		if(Copy_u8Value == HIGH)
		{
			SET_BIT(DIO_u8_PORTA_REG, Copy_u8Pin);
		}
		else
		{
			CLR_BIT(DIO_u8_PORTA_REG, Copy_u8Pin);
		}
		break;

	case DIO_u8_PORTB:
		if(Copy_u8Value == HIGH)
		{
			SET_BIT(DIO_u8_PORTB_REG, Copy_u8Pin);
		}
		else
		{
			CLR_BIT(DIO_u8_PORTB_REG, Copy_u8Pin);
		}
		break;

	case DIO_u8_PORTC:
		if(Copy_u8Value == HIGH)
		{
			SET_BIT(DIO_u8_PORTC_REG, Copy_u8Pin);
		}
		else
		{
			CLR_BIT(DIO_u8_PORTC_REG, Copy_u8Pin);
		}
		break;

	case DIO_u8_PORTD:
		if(Copy_u8Value == HIGH)
		{
			SET_BIT(DIO_u8_PORTD_REG, Copy_u8Pin);
		}
		else
		{
			CLR_BIT(DIO_u8_PORTD_REG, Copy_u8Pin);
		}
		break;
	}
}

u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin)
{
	u8 Local_u8PinValue = 0;

	switch(Copy_u8Port)
	{
	case DIO_u8_PORTA:
		Local_u8PinValue = GET_BIT(DIO_u8_PINA_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTB:
		Local_u8PinValue = GET_BIT(DIO_u8_PINB_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTC:
		Local_u8PinValue = GET_BIT(DIO_u8_PINC_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTD:
		Local_u8PinValue = GET_BIT(DIO_u8_PIND_REG, Copy_u8Pin);
		break;
	}

	return Local_u8PinValue;
}

void DIO_voidTogglePinValue(u8 Copy_u8Port, u8 Copy_u8Pin)
{
	switch(Copy_u8Port)
	{
	case DIO_u8_PORTA:
		TOG_BIT(DIO_u8_PORTA_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTB:
		TOG_BIT(DIO_u8_PORTB_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTC:
		TOG_BIT(DIO_u8_PORTC_REG, Copy_u8Pin);
		break;

	case DIO_u8_PORTD:
		TOG_BIT(DIO_u8_PORTD_REG, Copy_u8Pin);
		break;
	}
}

void DIO_voidSetPortValue(u8 Copy_u8Port, u8 Copy_u8Value)
{
	switch(Copy_u8Port)
	{
	case DIO_u8_PORTA:
		DIO_u8_PORTA_REG = Copy_u8Value;
		break;

	case DIO_u8_PORTB:
		DIO_u8_PORTB_REG = Copy_u8Value;
		break;

	case DIO_u8_PORTC:
		DIO_u8_PORTC_REG = Copy_u8Value;
		break;

	case DIO_u8_PORTD:
		DIO_u8_PORTD_REG = Copy_u8Value;
		break;
	}
}
