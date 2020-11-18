 /********************************************************************************
 FileName:     7CalculadoraFarenheit
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa converte graus Celsius °C em graus Farenheit F°.
 Change History:
 1.0   18/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>

int main(void) {
  float e_grausCelsius,s_grausFarenheit;

  printf("Entre com o valor em Celsius\n");
  scanf("%f", & e_grausCelsius);

  s_grausFarenheit=(e_grausCelsius*9/5)+32; 
  printf("O valor em graus Farenheit = %f\n",s_grausFarenheit);
  //(27*(9/5))+32 
  return 0;
}