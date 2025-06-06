#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva que movimenta a torre para a direita
void movimentaDireita(int n){
    if(n > 0){
        printf("Direita\n");
        movimentaDireita(n - 1);
    }
}

// Função recursiva que movimenta a rainha para a esquerda
void movimentaEsquerda(int n){
    if(n > 0){
        printf("Esquerda\n");
        movimentaEsquerda(n - 1);        
    }
}

// Função recursiva que movimenta o bispo para diagonal (Cima, Direita)
void movimentaDiagonal(int n){
    if(n > 0){
        printf("Cima, Direita\n");
        movimentaDiagonal(n - 1);        
    }    
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int movimentoBispo = 5;
    const int movimentoTorre = 5;
    const int movimentoRainha = 8;

    const int movimentoBispoVertical = 5;
    const int movimentoBispoHorizontal = 5;
    
    const int movimentoCavaloVertical = 2;
    const int movimentoCavaloHorizontal = 1;

    int contadorWhile = 0, contadorDoWhile = 0;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("---Bispo (Loops Aninhados)---\n");
    for(int i = 0; i < movimentoBispoVertical; i++){
        while (contadorWhile < movimentoBispoHorizontal)
        {
            printf("Cima, ");
            printf("Direita\n");
            contadorWhile++;
        }
    }

    printf("---Bispo---\n");
    movimentaDiagonal(movimentoBispo);

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("---Torre---\n");
    movimentaDireita(movimentoTorre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("---Rainha---\n");
    movimentaEsquerda(movimentoRainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // printf("\n---Cavalo---\n");
    // contadorWhile = 0; // Reutilizando contador para while
    // for(int i = 0; i < movimentoCavaloHorizontal; i++){
    //     while (contadorWhile < movimentoCavaloVertical)
    //     {
    //         printf("Baixo, ");
    //         contadorWhile++;
    //     }
    //     printf("Esquerda\n");
    // }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\n---Cavalo---\n");
    for (int i = 0, j = 0; i <= movimentoCavaloVertical || j < movimentoCavaloHorizontal; i++) {
        if (i < movimentoCavaloVertical) {
            printf("Cima, ");
            continue;  // volta pro início do loop
        }

        // Quando terminar o movimento vertical, entra aqui
        if (i == movimentoCavaloVertical && j < movimentoCavaloHorizontal) {
            printf("Direita\n");
            j++; // incrementa j após imprimir
            break;  // encerra o loop após o movimento em L
        }
    }


    return 0;
}
