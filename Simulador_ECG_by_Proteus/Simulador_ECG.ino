Código del PIC16F877A:
#include <16F877A.h>
#device ADC = 8; 
#use delay(clock=4000000)
#define sano pin_a1
#define bradi pin_a2
#define taqui pin_a3
#define amarillo pin_d0
#define azul pin_d1
#define verde pin_d2
int tabla;
int const electro[100]= {62,62,62,62,62,62,62,62,62,62,65,70,77,80,87,94,98,93,
92,85,76,67,60,59,59,59,59,59,59,59,59,57,50,40,32,30,51,95,258,252,231,198,157,
115,75,42,19,10,53,59,59,59,59,59,59,59,59,59,59,59,61,66,75,84,94,102,107,109,
111,104,97,88,78,69,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,60,
60,60,60,58,56,54};
void main()
{
while(true)
{
 if ((input(sano)==1)){
 for (tabla=0;tabla<100;tabla++)
 {
output_b(electro[tabla]);
delay_ms(2);
output_high(amarillo);
output_low (azul);
output_low (verde);
}
 tabla=0;}
  if  ((input(bradi)==1)){
 for (tabla=0;tabla<100;tabla++)
 {
output_b(electro[tabla]);
delay_ms(4);
output_high(azul);
output_low(amarillo);
output_low(verde);
}
 tabla=0;}
 if  ((input(taqui)==1)){
 for (tabla=0;tabla<100;tabla++)
 {
output_b(electro[tabla]);
delay_ms(1);
output_high(verde);
output_low(azul);
output_low(amarillo);
}
tabla=0;}
}
}
