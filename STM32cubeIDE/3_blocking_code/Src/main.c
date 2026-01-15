
#include <stdio.h>
#include "led.h"
#include "uart.h"
#include "timebase.h"

void motor_start(void);
void motor_stop(void);
void valve_open(void);
void valve_close(void);

int main()
{
	led_init();
	uart_tx_init();
	timebase_init();

	while(1)
	{
		motor_start();
		/* Here delay is the blocking statement as it blocks the execution
		 flow, until an event occurs which is systick handler  */
		delay(1);
		motor_stop();
		delay(1);
	}
	return 0;
}


void motor_start(void)
{
	printf("Motor is starting...\n\r");
}


void motor_stop(void)
{
	printf("Motor is stopping...\n\r");
}


void valve_open(void)
{
	printf("Valve is Opening...\n\r");
}


void valve_close(void)
{
	printf("Valve is Closing...\n\r");
}

