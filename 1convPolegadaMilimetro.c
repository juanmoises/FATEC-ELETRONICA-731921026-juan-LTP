 /****************************************************************************
 FileName:     Conversor PolegadasMilimetros 
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa converte polegadas para milimetros.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_polegadas,s_milimetros;

  printf("Entre com o valor em polegadas\n");
  scanf("%f", & e_polegadas);
  s_milimetros=e_polegadas*2.54;
  printf("O valor em s_milimetros= :%f\n",s_milimetros);
   
  return 0;
}