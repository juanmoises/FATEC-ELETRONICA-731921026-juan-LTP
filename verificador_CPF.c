#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A,B,C,D,E,F,G,H,I,J,K,X,Y;
    printf("  Digite de esquerda a direita \n  o primeiro numero do seu CPF: ");
    scanf("%d", &A);

    printf("         Digite proximo numero: ");
    scanf("%d", &B);

    printf("         Digite proximo numero: ");
    scanf("%d", &C);

    printf("         Digite proximo numero: ");
    scanf("%d", &D);

    printf("         Digite proximo numero: ");
    scanf("%d", &E);

    printf("         Digite proximo numero: ");
    scanf("%d", &F);

    printf("         Digite proximo numero: ");
    scanf("%d", &G);

    printf("         Digite proximo numero: ");
    scanf("%d", &H);

    printf("         Digite proximo numero: ");
    scanf("%d", &I);

    printf("         Digite proximo numero: ");
    scanf("%d", &J);

    printf("         Digite proximo numero: ");
    scanf("%d", &K);


    X=((A*10)+(B*9)+(C*8)+(D*7)+(E*6)+(F*5)+(G*4)+(H*3)+(I*2))%11;
      if(X<2) {
            (X=0);
      }
            else{
                (X = 11-X);
            }



   (Y=((A*11)+(B*10)+(C*9)+(D*8)+(E*7)+(F*6)+(G*5)+(H*4)+(I*3)+(X*2))%11);
    if(Y<2){
       (Y=0);
    }
           else{
            (Y=11-Y);
           }


        if(J==X && K==Y)
        {

                printf ("\n CPF Valido : %d%d%d%d%d%d%d%d%d - %d%d",A,B,C,D,E,F,G,H,I,X,Y);

        }


            else {
               printf (" CPF Invalido\n\n ");
                 }

    return 0;
}
