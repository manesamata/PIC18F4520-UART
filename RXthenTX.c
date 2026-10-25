#include<p18f4520.h>
unsigned char receive (void);
void trans(unsigned char);
void UART_init(void);
void main()
{
unsigned char x;
UART_init();
while(1)
{
x=receive();
trans(x);
}
}
unsigned char receive(void)
{
while(PIR1bits.RCIF==0);
return RCREG;
}
void trans(unsigned char x)
{
TXREG=x;
while(TXSTAbits.TRMT==0);
}
void UART_init(void)
{
TRISC=0X80;
TXSTA=0X24;
RCSTA=0X90;
SPBRG=0X81;
}
