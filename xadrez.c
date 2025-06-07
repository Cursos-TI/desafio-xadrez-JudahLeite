#include <stdio.h>

void moverBispo(int casas){ //Recursividade Bispo
    if (casas>0){
        for (int i=1; i<=1; i++){
            for (int j = 1; j<=1; j++ ){
                printf("Direita\n");
            }
        printf("Cima\n");  
        }
        moverBispo(casas-1);
    }
}

void moverTorre(int casas){ //Recursividade Torre
    if (casas>0){
        printf("Direita\n");
        moverTorre(casas-1);
    }
}

void moverRainha(int casas){ //Recursividade Rainha
    if (casas>0){
        printf("Esquerda\n");
        moverRainha(casas-1);
    }
}

void moverCavalo (int casas){ //Recursividade Cavalo
    if (casas>0){
        for (int i = 1; i<=1; i++){
            for (int j = 1; j<=2; j++ ){
            printf("Cima\n");
        }
        printf("Direita\n");
        }
        moverCavalo(casas-1);
    }

}

int main() {
    
//Bispo
    printf("Movimentação do Bispo:\n");   
    moverBispo(5);
//Torre
    printf("Movimentação da Torre:\n");
    moverTorre(5);
//Rainha
    printf("Movimentação Rainha:\n");
    moverRainha(8);
// Cavalo
printf("Movimentação do Cavalo:\n");
    moverCavalo(1);
    printf("\n");

    return 0;
}
