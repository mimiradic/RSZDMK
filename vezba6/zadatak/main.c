#include <stdint.h>
#include "../usart/usart.h"
#include <util/delay.h>

int main()
{
    int8_t ispis[40] = "Unesite svoje ime i prezime\r\n";
    int8_t ime[30];

    usartInit(9600);

	while(1)
	{
		usartPutString(ispis);

		while(usartAvailable() == 0); //ceka dokle god je prazan bafer
		_delay_ms(100);

		usartGetString(ime);
		usartPutString("Zdravo, ");
		usartPutString(ime);
		usartPutString(". :)\r\n");
		while(1);
	}
	return 0;
}
