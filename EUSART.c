#include<p18f4520.h>
void UART_init(void);
void trans(unsigned char);
void delay(void);
void main()
{
UART_init();
while(1)
{
trans('A');
delay();
}
}
void UART_init(void)
{
TRISC=0X80;
TXSTA=0X24;
RCSTA=0X90;
SPBRG=0X81;
}
void trans(unsigned char x)
{
TXREG=x;
while(TXSTAbits.TRMT==0);
}
void delay(void)
{
int i,j;
for(i=0;i<500;i++)
{
for(j=0;j<500;j++)
{
}
}
}