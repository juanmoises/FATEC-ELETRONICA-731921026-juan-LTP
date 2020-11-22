/********************************************************************************
 FileName:     Exercicio_12_resistores_paralelo
 Company:      FATEC Santo André
 Author:       Juan Moisés Carvallo Ferreira
 Date:         22/11/2020
 Disciplina:   Linguagem e Técnica de Programação     
 *****************************************************************************
 File Description: Calcula as correntes e as tensões parciais de dois resistores asociados em paralelo.
 Change History:
 1.0   22/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
float e_r1,e_r2,e_E1,E_r1,E_r2,I_r1,I_r2;
// A  tensão em um circuito paralelo e igual para todos os resistores.
    printf("Digite o valor de r1 : ");
  scanf("%f",&e_r1);
  printf("Digite o valor de r2: ");
  scanf("%f",&e_r2);
  printf("Digite o valor de E1 : ");
  scanf("%f",&e_E1);
  E_r1=E_r2=e_E1;
  I_r1=E_r1/e_r1;
  I_r2=E_r2/e_r2;
  printf("A corrente em r1= %f ma\n",I_r1);
  printf("A corrente em r2= %f ma\n",I_r2);
  printf("A tensão em r1= %f V\n",E_r1);
  printf("A tensão em r2= %f V\n",E_r2);
  
    return 0;
  
}