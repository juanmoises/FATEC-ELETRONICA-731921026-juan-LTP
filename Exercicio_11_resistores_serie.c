/********************************************************************************
 FileName:     Exercicio_11.
 Company:      FATEC Santo André
 Author:       Juan Moisés Carvallo Ferreira
 Date:         22/11/2020
 Diciplina:    Linguagem e Técnica de Programação     
 *****************************************************************************
 File Description: Calcula as correntes e as tensões parciais de dois resistores asociados em serie.
 Change History:
 1.0   22/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
int e_r1,e_r2,e_E1,Rt,It,E_r1,E_r2,I_r1,I_r2;
  
  printf("Digite o valor de r1 : ");
  scanf("%d", & e_r1);
  printf("Digite o valor de r2: ");
  scanf("%d", & e_r2);
  printf("Digite o valor de E1 : ");
  scanf("%d", & e_E1);
  Rt=e_r1+e_r2;
  It=e_E1/Rt;
  E_r1=e_r1*It;
  E_r2=e_r2*It;
  I_r1=E_r1/e_r1;
  I_r2=E_r2/e_r2;
  printf("A corrente em r1= %d\n",I_r1);
  printf("A corrente em r2= %d\n",I_r2);
  printf("A tensão em r1= %d\n",E_r1);
  printf("A tensão em r2= %d\n",E_r2);
  
    return 0;
  
}