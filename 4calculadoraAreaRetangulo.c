 /****************************************************************************
 FileName:     4calculadoraAreaRetangulo
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa calcula a area de um retângulo.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_base,e_altura,s_area;

  printf("Entre com o valor da base do retangulo\n");
  scanf("%f", & e_base);
  printf("Entre com o valor da altura do retangulo\n");
  scanf("%f", & e_altura);
  s_area=e_base*e_altura;
  printf("O valor da area do retangulo = :%f\n",s_area);
   
  return 0;
}