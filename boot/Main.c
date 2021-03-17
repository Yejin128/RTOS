#include "stdint.h"
#include "HalUart.h"
#include "stdbool.h"
#include "stdio.h"
#include "HalTimer.h"
#include "stdlib.h"

static void Timer_test(void);
static void Hw_init(void);

void main(void)
{
	Hw_init();

	uint32_t i = 100;
	while(i--)
	{
		Hal_uart_put_char('N');
	}
	Hal_uart_put_char('\n');

	putstr("Hello World!\n");

	i = 100;

	Timer_test();
/*	while(i--)
	{
		uint8_t ch = Hal_uart_get_char();
		Hal_uart_put_char(ch);
	}
	*/
}
static void Hw_init(void)
{
	Hal_interrupt_init();
	Hal_uart_init();
	Hal_timer_init();
}

static void Timer_test(void)
{
    while(true)
    {
        putstr("tic\n");
        delay(1000);
    }
}
