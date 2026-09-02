#ifndef _DIO_INTERFACE_H_
#define _DIO_INTERFACE_H_

#define OUTPUT 1
#define INPUT 0

#define HIGH 1
#define LOW  0

/* Port Names */
#define DIO_u8_PORTA 0
#define DIO_u8_PORTB 1
#define DIO_u8_PORTC 2
#define DIO_u8_PORTD 3

/* Pin Numbers */
#define DIO_u8_PIN0 0
#define DIO_u8_PIN1 1
#define DIO_u8_PIN2 2
#define DIO_u8_PIN3 3
#define DIO_u8_PIN4 4
#define DIO_u8_PIN5 5
#define DIO_u8_PIN6 6
#define DIO_u8_PIN7 7


void DIO_voidInitializion(void);

void DIO_voidSetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8Value);

u8 DIO_u8GetPinValue(u8 Copy_u8Port, u8 Copy_u8Pin);

void DIO_voidTogglePinValue(u8 Copy_u8Port, u8 Copy_u8Pin);

void DIO_voidSetPortValue(u8 Copy_u8Port, u8 Copy_u8Value);

#endif
