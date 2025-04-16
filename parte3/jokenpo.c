#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Mensagem de boas-vindas
    printf("JOKENPÔ - Você contra o Computador\n");
    printf("Escolha uma das opções:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");

    // Leitura da escolha do jogador
    printf("\nSua escolha: ");
    scanf("%d", &jogador);

    // O computador faz sua escolha aleatória
    computador = rand() % 3 + 1;  // Gera um número entre 1 e 3

    // Exibe as escolhas
    printf("\nVocê escolheu: ");
    switch(jogador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
        default: printf("Escolha inválida\n"); return 1;
    }

    printf("O Computador escolheu: ");
    switch(computador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
    }

    // Determina o vencedor
    if (jogador == computador) {
        printf("\nResultado: Empate!\n");
    } else {
        switch(jogador) {
            case 1: // Pedra
                if (computador == 3)
                    printf("\nResultado: Você venceu! Pedra quebra Tesoura.\n");
                else
                    printf("\nResultado: Computador venceu! Papel embrulha Pedra.\n");
                break;
            case 2: // Papel
                if (computador == 1)
                    printf("\nResultado: Você venceu! Papel embrulha Pedra.\n");
                else
                    printf("\nResultado: Computador venceu! Tesoura corta Papel.\n");
                break;
            case 3: // Tesoura
                if (computador == 2)
                    printf("\nResultado: Você venceu! Tesoura corta Papel.\n");
                else
                    printf("\nResultado: Computador venceu! Pedra quebra Tesoura.\n");
                break;
        }
    }

    return 0;
}
