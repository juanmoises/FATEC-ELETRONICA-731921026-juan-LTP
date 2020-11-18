 /********************************************************************************
 FileName:     9PosiçaoFinalMUV
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula a velocidade final de um movel no MUV.
 Change History:
 1.0   18/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
/*
Descrição:VF=V0+at
s_Vf  = velocidade final do móvel(m/s)
e_V0  = velocidade inicial do móvel(m/s)
e_a   = aceleração(m/s)
e_t   = intervalo de tempo(s)
*/
int main(void) {
  float e_V0,e_a,e_t,s_Vf;

  
  printf("Entre com a velocidade inicial do movel em m/s =\n");
  scanf("%f", & e_V0);
  printf("Entre com a aceleracao movel em m/s =\n");
  scanf("%f", & e_a);
  printf("Entre com o intervalo de tempo do movel em segundos =\n");
  scanf("%f", & e_t);

  s_Vf=e_V0+e_a*e_t;
   
  printf("Velocidade final do movel = %f m/s\n",s_Vf);
  
  return 0;
}