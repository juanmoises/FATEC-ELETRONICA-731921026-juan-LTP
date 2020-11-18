 /****************************************************************************
 FileName:     6CalculadoraResistenciaEquivalente
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula o valor da resitência equivalente de duas resistências ligadas em paralelo.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_r1,e_r2,s_re;

  printf("Entre com o valor de r1\n");
  scanf("%f", & e_r1);
  printf("Entre com o valor de r2\n");
  scanf("%f", & e_r2);
  s_re=(e_r1*e_r2)/(e_r1+e_r2);
  printf("O valor de Resistência Equivalente = :%f\n",s_re);
   
  return 0;
}