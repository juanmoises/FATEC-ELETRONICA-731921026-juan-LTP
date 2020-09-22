#include <stdio.h>

int main(void) {
  //formato do numero inteiro
  int x;
  //x=10;
  //entrada de valor pelo usuario
  printf("Entre com um valor em decimal:\n");
  //o & atribui o valor entrado no teclado a este endereço(memoria)
  scanf("%i",&x);
  // scanf espera que seja digitado o valor 
  printf("Nro decimal: %d...\t",x);
  //mostra o valor de x em decimal
  printf("Nro octal: %o...\t",x);
  //mostra o valor de x em octal
  printf("Nro hexadecimal: %x\n",x);
  //mostra o valor de x em exadecimal
  //não mostra valor em binario 
  //o caracter de formatação %b não existe
  return 0;
}
