 /****************************************************************************
 FileName:     5CalculadoraResistencia
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula o valor da resitência r1, usando os valores de entrada de tensão v1 e corrente i1.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_v1,e_i1,s_r1;

  printf("Entre com o valor de v1\n");
  scanf("%f", & e_v1);
  printf("Entre com o valor de i1\n");
  scanf("%f", & e_i1);
  s_r1=e_v1*e_i1;
  printf("O valor de Resistência Equivalente = %f\n",s_r1);
   
  return 0;
}