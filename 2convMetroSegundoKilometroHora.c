 /****************************************************************************
 FileName:     Conversor 2convMetroSegundoKilometroHora 
 Company:      FATEC Santo Andre
 Author:       Juan Moisés Carvallo Ferreira
 Date:         18/11/2020
 
 *****************************************************************************
 File Description: Este programa converte m/s em k/h.
 Change History:
 1.0   18/11/2020  Versão inicial
 
*****************************************************************************/
#include <stdio.h>

int main(void) {
  float e_ms,s_kh;

  printf("Entre com o valor em m/s\n");
  scanf("%f", & e_ms);
  s_kh=e_ms*3.6;
  printf("O valor em s_k/h= :%f\n",s_kh);
   
  return 0;
}