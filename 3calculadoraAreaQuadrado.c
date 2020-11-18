 /****************************************************************************
 FileName:     3calculadoraAreaQuadrado
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula a area do quadrado.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_lado,s_area;

  printf("Entre com o valor do lado do quadrado\n");
  scanf("%f", & e_lado);
  s_area=e_lado*e_lado;
  printf("O valor da area do quadrado = :%f\n",s_area);
   
  return 0;
}