#include <stdio.h>
int subtrai3(int *y){
    *y= *y-3;
}
int main(void) {
    int numero=0;
 printf("Digite um numero inteiro: ");
 scanf("%d",&numero);
 printf("\nNumero recebido: %d",numero);
subtrai3(&numero);
 printf("\nResultado: %d",numero);
  printf("\nValor atual: %d",numero);
}