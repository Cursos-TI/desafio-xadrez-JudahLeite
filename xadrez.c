#include <stdio.h>
// Desafio de Xadrez - MateCheck
int main() {
    
int b, t, r, c; // variáveis para peças Bispo, Torre, Rainha, cavalo, respectivamente.
b = 1;
t = 1;
r = 1;
c = 1;
    //Bispo
printf("Movimentação do Bispo:\n");
    while (b<=5){
        printf("Cima, Direita\n");
        b++;
    }
    //Torre
printf("Movimentação da Torre:\n");
    do{
       printf("Direita\n");
       t++;
    } while (t<=5);    
    //Rainha
printf("Movimentação Rainha:\n");
    for (r; r<=8; r++){
        printf("Esquerda\n");   
    }
    // Cavalo
printf("Movimentação do Cavalo:\n");
    while(c<=1){
        c++;
        for (int i = 1; i<=2; i++ ){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        
    }   
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
