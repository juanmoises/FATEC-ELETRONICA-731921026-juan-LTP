 /********************************************************************************
 FileName:     8PosiçaoFinalMU
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula a velocidade final de um movel no MU.
 Change History:
 1.0   18/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
/*
Descrição:Sf=S0+vt
s_Sf  = posição final do móvel(m/s)
e_S0 = posição inicial do móvel(m)
e_v  = velocidade do móvel(m/s)
e_t  = intervalo de tempo(s)
*/
int main(void) {
  float e_S0,e_v,e_t,s_Sf;

  printf("Entre com a posição inicial do movel em metros =\n");
  scanf("%f", & e_S0);
  printf("Entre com a velocidade inicial do movel em m/s =\n");
  scanf("%f", & e_v);
  printf("Entre com o intervalo de tempo do movel em segundos =\n");
  scanf("%f", & e_t);

  s_Sf=e_S0+e_v*e_t;
   
  printf("A velocidade final do movel e = %f m/s\n",s_Sf);
  
  return 0;
}