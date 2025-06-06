#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;
    
    const int movimentoCavaloVertical = 2;
    const int movimentoCavaloHorizontal = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("---Bispo---\n");
    for(int i = 0; i < movimentoBispo; i++){
        printf("Cima, Direita\n");
    }

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("---Torre---\n");
    int contadorWhile = 0; // Variavel de controle do while
    while(contadorWhile < movimentoTorre){
        printf("Direita\n");
        contadorWhile++;
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("---Rainha---\n");
    int contadorDoWhile = 0;
    do{
        printf("Esquerda\n");
        contadorDoWhile++;
    }while(contadorDoWhile < movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    printf("\n---Cavalo---\n");
    contadorWhile = 0; // Reutilizando contador para while
    for(int i = 0; i < movimentoCavaloHorizontal; i++){
        while (contadorWhile < movimentoCavaloVertical)
        {
            printf("Baixo, ");
            contadorWhile++;
        }
        printf("Esquerda\n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
