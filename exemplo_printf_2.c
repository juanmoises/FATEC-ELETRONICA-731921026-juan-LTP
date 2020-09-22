#include <stdio.h>

int main(void) {
  int x;
  x=10;
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
