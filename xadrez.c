#include <stdio.h>

// Desafio de Xadrez - MateCheck

void recursivoTorre(int p){
    if(p > 0){
        printf("Direita\n");
        recursivoTorre(p - 1); 
    }
}

void recursivoRainha(int r){
    if(r > 0){
        printf("Esquerda\n");
        recursivoRainha(r - 1); 
    }
}

void recursivoBispo(int n){
    if(n > 0){
        printf("Diagonal superior direita\n");  
        recursivoBispo(n - 1); 
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
     int bispo = 5;
     int torre = 5;
     int rainha = 8;
     int x = 0;
     int i;
     

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação do Bispo: \n");
     while  (x < bispo){
    printf("Diagonal superior direita\n");
        x++;
     }  

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("Movimentação da Torre: \n");
    for (i = 0; i < torre; i++) {
        printf("Direita\n");
    }
    
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha: \n");
    for (i = 0; i < rainha; i++) {
        printf("Esquerda\n");
    }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    printf("Movimentação do cavalo: \n");
    int cavalo = 2;

    for (i = 2; i <= cavalo; i++){
            int j;
           for (j = 1; j <= i; j++)
           {
            printf("Baixo\n");
           }
            
        printf("Esquerda\n");   
    }


    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    int n = 5;
    int p = 5;
    int r = 8;

    

    printf("Movimentação da Torre Recursivo: \n");
    recursivoTorre(p);

    printf("Movimentação da Rainha Recursivo: \n");
    recursivoRainha(r);

    printf("Movimentação do Bispo Recursivo: \n");
    recursivoBispo(n);


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("Movimentação do Cavalo: \n");
    for (int x = 1;x == 1;x++){
        for (int i = 0, j = 10; i < j; i++, j--)
        {
            if(i == 2) continue;
            if(j == 7) break;
            printf("Cima\n"); 
        }
        
        printf("Direita\n"); 
    }

    return 0;
}
