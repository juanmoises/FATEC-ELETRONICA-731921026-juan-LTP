/********************************************************************************
 FileName:     Exercicio_14_resistores_malha
 Company:      FATEC Santo André
 Author:       Juan Moisés Carvallo Ferreira
 Date:         24/11/2020
 Disciplina:   Linguagem e Técnica de Programação     
 *******************************************************************************
 File Description: Calcula as correntes e as tensões parciais em um circuito "malha".
 Change History:
 1.0   24/11/2020  Versão inicial
 
********************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float E1,E2,R1,R2,R3,Mc,x,y,z,Vn,i_r1,i_r2,i_r3,E_r1,E_r2,E_r3;
    printf("Digite o valor de E1 = ");
    scanf("%f", &E1);
    printf("Digite o valor de E2 = ");
    scanf("%f", &E2);
    printf("Digite o valor de R1 = ");
    scanf("%f", &R1);
    printf("Digite o valor de R2 = ");
    scanf("%f", &R2);
    printf("Digite o valor de R3 = ");
    scanf("%f", &R3);
    Mc=R1*R2*R3;
    x=Mc/R1;
    y=Mc/R3;
    z=Mc/R2;
    Vn=((x*E1)+(y*E2))/(x+y+z);
    /*printf("Mc = %f\n",Mc);
    printf("x  = %f\n",x);
    printf("y  = %f\n",y);
    printf("z  = %f\n",z);
    printf("Vn = %f\n",Vn);*/

    i_r1=(E1-Vn)/R1;
    i_r2=Vn/R2;
    i_r3=(E2-Vn)/R3;

    printf("O valor da corrente i_r1 : %f \n",i_r1);    
    printf("O valor da corrente i_r2 : %f \n",i_r2);    
    printf("O valor da corrente i_r3 : %f \n",i_r3);

    E_r1=R1*i_r1;
    E_r2=R2*i_r2;
    E_r3=R3*i_r3;

    printf("O valor da tensão   E_r1 : %f \n",E_r1);
    printf("O valor da tensão   E_r2 : %f \n",E_r2);
    printf("O valor da tensão   E_r3 : %f \n",E_r3);




    return 0;
}