#include <stdio.h>
#include <string.h>

// Função para comparar os atributos e exibir o vencedor
void compararCartas(int opcao1, int opcao2, float valor1, float valor2, char nome1[], char nome2[], char atributo1[], char atributo2[]) {
    printf("\nComparando as cartas (%s e %s):\n", atributo1, atributo2);
    printf("Carta 1 - %s: %.2f\n", nome1, valor1);
    printf("Carta 2 - %s: %.2f\n", nome2, valor2);

    if (opcao1 == 6 || opcao2 == 6) {  // Caso a densidade populacional seja comparada
        valor1 = (opcao1 == 6) ? valor1 : valor1;
        valor2 = (opcao2 == 6) ? valor2 : valor2;

        printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
    }
}

int main() {
    // Cartas de exemplo (dados fictícios)
    char nomeCidade1[] = "São Paulo";
    char nomeCidade2[] = "Rio de Janeiro";

    unsigned long int populacao1 = 12300000, populacao2 = 6000000;
    float area1 = 1500.0, area2 = 1200.0;
    float pib1 = 600.0, pib2 = 500.0;
    int pontosTuristicos1 = 200, pontosTuristicos2 = 180;
    float densidadePopulacional1 = populacao1 / area1, densidadePopulacional2 = populacao2 / area2;

    int opcao1, opcao2;

    // Menu interativo para a escolha do primeiro atributo
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao1);

    // Menu interativo para a escolha do segundo atributo (não pode ser o mesmo do primeiro)
    printf("\nEscolha o segundo atributo para comparar (não pode ser o mesmo do primeiro):\n");
    do {
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de Pontos Turísticos\n");
        printf("5 - PIB per Capita\n");
        printf("6 - Densidade Demográfica\n");
        printf("Sua escolha: ");
        scanf("%d", &opcao2);

        if (opcao1 == opcao2) {
            printf("Erro: Você não pode escolher o mesmo atributo duas vezes. Tente novamente.\n");
        }

    } while (opcao1 == opcao2);

    // Atributos para comparação
    float valor1, valor2;
    char atributo1[30], atributo2[30];

    // Escolher os atributos com base nas opções
    switch (opcao1) {
        case 1: valor1 = (float)populacao1; strcpy(atributo1, "População"); break;
        case 2: valor1 = area1; strcpy(atributo1, "Área"); break;
        case 3: valor1 = pib1; strcpy(atributo1, "PIB"); break;
        case 4: valor1 = (float)pontosTuristicos1; strcpy(atributo1, "Pontos Turísticos"); break;
        case 5: valor1 = pib1 / populacao1; strcpy(atributo1, "PIB per Capita"); break;
        case 6: valor1 = densidadePopulacional1; strcpy(atributo1, "Densidade Demográfica"); break;
        default: printf("Opção inválida\n"); return 1;
    }

    switch (opcao2) {
        case 1: valor2 = (float)populacao2; strcpy(atributo2, "População"); break;
        case 2: valor2 = area2; strcpy(atributo2, "Área"); break;
        case 3: valor2 = pib2; strcpy(atributo2, "PIB"); break;
        case 4: valor2 = (float)pontosTuristicos2; strcpy(atributo2, "Pontos Turísticos"); break;
        case 5: valor2 = pib2 / populacao2; strcpy(atributo2, "PIB per Capita"); break;
        case 6: valor2 = densidadePopulacional2; strcpy(atributo2, "Densidade Demográfica"); break;
        default: printf("Opção inválida\n"); return 1;
    }

    // Comparar os valores dos dois atributos escolhidos
    compararCartas(opcao1, opcao2, valor1, valor2, nomeCidade1, nomeCidade2, atributo1, atributo2);

    return 0;
}
