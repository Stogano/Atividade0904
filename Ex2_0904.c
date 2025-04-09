#include <stdio.h>
int subtrai3(int y){
    return y-3;
}
int main(void) {
    int numero=0;
 printf("Digite um numero inteiro: ");
 scanf("%d",&numero);
 printf("\nNumero recebido: %d",numero);
 int resultado = subtrai3(numero);
 printf("\nResultado: %d",resultado);
  printf("\nValor atual: %d",numero);
}
