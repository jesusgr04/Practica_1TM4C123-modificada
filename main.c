
#include "lib/include.h"
unsigned long Led;

int main(void)
{
   Configuracion_GPIO();
    while(1)
    {
    //if(PF4 == 0x0){
      Led = 0x02;            // reverse value of LED rojo
      GPIOF->DATA = Led;   // write value to PORTF DATA register,toggle led
      Delay();
      Led = 0x04;            // reverse value of LED  azul
      GPIOF->DATA  = Led;   // write value to PORTF DATA register,toggle led
      Delay();
      Led = 0x08;            // reverse value of LED verde 
      GPIOF->DATA  = Led;   // write value to PORTF DATA register,toggle led
      Delay();
      Led = 0x0A;            // reverse value of LED amarillo 
      GPIOF->DATA  = Led;   // write value to PORTF DATA register,toggle led
      Delay();
    // }
    }
}
