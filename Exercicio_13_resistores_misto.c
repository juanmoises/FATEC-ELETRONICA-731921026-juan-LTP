/********************************************************************************
 FileName:     Exercicio_13_resistores_misto
 Company:      FATEC Santo André
 Author:       Juan Moisés Carvallo Ferreira
 Date:         22/11/2020
 Disciplina:   Linguagem e Técnica de Programação     
 *******************************************************************************
 File Description: Calcula as correntes e as tensões parciais em um circuito misto.
 Change History:
 1.0   22/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main(void) {
float e_E1,e_r1,e_r2,e_r3,E_r1,E_r2,E_r3,i_r1,i_r2,i_r3,ra,rt,it,i_ra,E_ra;

  printf("Digite o valor de E1 : ");
  scanf("%f",&e_E1);
  printf("Digite o valor de r1 : ");
  scanf("%f",&e_r1);
  printf("Digite o valor de r2 : ");
  scanf("%f",&e_r2);
  printf("Digite o valor de r3 : ");
  scanf("%f",&e_r3);
  ra=(e_r2*e_r3)/(e_r2+e_r3);
  rt=e_r1+ra;
  it=e_E1/rt;
  i_r1=i_ra=it;
  E_r1=e_r1*it;
  E_ra=ra*it;
  E_r2=E_r3=E_ra;
  E_r2=E_r3=E_ra;
  i_r2=E_r2/e_r2;
  i_r3=E_r3/e_r3;

   
  printf("A corrente em r1 = %f A\n",i_r1);
  printf("A corrente em r2 = %f A\n",i_r2);
  printf("A corrente em r3 = %f A\n",i_r3);
  printf("A tensão em   r1 = %f V\n",E_r1);
  printf("A tensão em   r2 = %f V\n",E_r2);
  printf("A tensão em   r3 = %f V\n",E_r3);
  
    return 0;
  
}