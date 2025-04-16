#include <stdio.h>
#include <string.h>

// Função para comparar dois valores de qualquer tipo
void compararCartas(int opcao, float valor1, float valor2, char nome1[], char nome2[], char atributo[]) {
    printf("\nComparando as cartas (%s):\n", atributo);
    printf("Carta 1 - %s: %.2f\n", nome1, valor1);
    printf("Carta 2 - %s: %.2f\n", nome2, valor2);
    
    if (opcao == 6) {  // Para Densidade Demográfica (opcao 6)
        if (valor1 < valor2) {
            printf("Resultado: Carta 1 (%s) venceu! Menor Densidade Demográfica.\n", nome1);
        } else if (valor1 > valor2) {
            printf("Resultado: Carta 2 (%s) venceu! Menor Densidade Demográfica.\n", nome2);
        } else {
            printf("Resultado: Empate! Densidade Demográfica é igual.\n");
        }
    } else {  // Para outros atributos (maior valor vence)
        if (valor1 > valor2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else if (valor1 < valor2) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        } else {
            printf("Resultado: Empate!\n");
        }
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
    
    int opcao;
    
    // Menu interativo
    printf("Bem-vindo ao Super Trunfo!\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - PIB per Capita\n");
    printf("6 - Densidade Demográfica\n");
    printf("Sua escolha: ");
    scanf("%d", &opcao);

    // Comparar as cartas com base na escolha do usuário
    switch (opcao) {
        case 1:
            compararCartas(opcao, (float)populacao1, (float)populacao2, nomeCidade1, nomeCidade2, "População");
            break;
        case 2:
            compararCartas(opcao, area1, area2, nomeCidade1, nomeCidade2, "Área");
            break;
        case 3:
            compararCartas(opcao, pib1, pib2, nomeCidade1, nomeCidade2, "PIB");
            break;
        case 4:
            compararCartas(opcao, (float)pontosTuristicos1, (float)pontosTuristicos2, nomeCidade1, nomeCidade2, "Pontos Turísticos");
            break;
        case 5:
            compararCartas(opcao, pib1 / populacao1, pib2 / populacao2, nomeCidade1, nomeCidade2, "PIB per Capita");
            break;
        case 6:
            compararCartas(opcao, densidadePopulacional1, densidadePopulacional2, nomeCidade1, nomeCidade2, "Densidade Demográfica");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção entre 1 e 6.\n");
            break;
    }

    return 0;
}
