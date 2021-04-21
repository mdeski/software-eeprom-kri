#include <mega32.h>
#include <delay.h>

void main(void)
{
DDRC  = 0b11111111; // 0xFF 
PORTC = 0b00000000; //0x00
while(1){
    PORTC = 0b00000001;
    delay_ms(50);
    PORTC = 0b00000010;
    delay_ms(50);
    PORTC = 0b00000100;
    delay_ms(50);
    PORTC = 0b00001000;
    delay_ms(50);
    PORTC = 0b00010000;
    delay_ms(60);
    PORTC = 0b00100000;
    delay_ms(60);
    PORTC = 0b01000000;
    delay_ms(60);
    //PORTC = 0b10000000;
    //delay_ms(60);
}   
}
