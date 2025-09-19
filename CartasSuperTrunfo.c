#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis
    int pontos1, pontos2, opcao1, opcao2;
    unsigned long int populacao1, populacao2;
    char estado1, estado2;
    char nome1[50], nome2[50], codigo1[10], codigo2[10];
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;
    double superPoder1, superPoder2;

    // Entrada de dados
    printf("** JOGO SUPERTRUNFO **\n");
    printf("Cadastro da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código: ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\nCadastro da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código: ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = (pib1 * 1000000000) / populacao1;
    percapita2 = (pib2 * 1000000000) / populacao2;
    superPoder1 = (double)populacao1 + area1 + pib1 + percapita1 + (1.0 / densidade1) + (double)pontos1;
    superPoder2 = (double)populacao2 + area2 + pib2 + percapita2 + (1.0 / densidade2) + (double)pontos2;

    // Menu de atributos
    printf("\nEscolha dois atributos para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB per capita\n");
    printf("5. PIB\n");
    printf("6. Pontos Turísticos\n");
    printf("7. Super Poder\n");

    // Escolha do primeiro atributo
    printf("Escolha o primeiro atributo: ");
    scanf("%d", &opcao1);

    // Escolha do segundo atributo (diferente do primeiro)
    do {
        printf("Escolha o segundo atributo (diferente do primeiro): ");
        scanf("%d", &opcao2);
        if (opcao1 == opcao2) {
            printf("Você não pode escolher o mesmo atributo duas vezes!\n");
        }
    } while (opcao1 == opcao2);

    // Função auxiliar para obter valores
    double valor1A, valor2A, valor1B, valor2B;
    char atributo1[30], atributo2[30];

    // Mapeando o primeiro atributo
    switch (opcao1) {
        case 1: valor1A = populacao1; valor2A = populacao2; strcpy(atributo1, "População"); break;
        case 2: valor1A = area1; valor2A = area2; strcpy(atributo1, "Área"); break;
        case 3: valor1A = densidade1; valor2A = densidade2; strcpy(atributo1, "Densidade"); break;
        case 4: valor1A = percapita1; valor2A = percapita2; strcpy(atributo1, "PIB per capita"); break;
        case 5: valor1A = pib1; valor2A = pib2; strcpy(atributo1, "PIB"); break;
        case 6: valor1A = pontos1; valor2A = pontos2; strcpy(atributo1, "Pontos Turísticos"); break;
        case 7: valor1A = superPoder1; valor2A = superPoder2; strcpy(atributo1, "Super Poder"); break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Mapeando o segundo atributo
    switch (opcao2) {
        case 1: valor1B = populacao1; valor2B = populacao2; strcpy(atributo2, "População"); break;
        case 2: valor1B = area1; valor2B = area2; strcpy(atributo2, "Área"); break;
        case 3: valor1B = densidade1; valor2B = densidade2; strcpy(atributo2, "Densidade"); break;
        case 4: valor1B = percapita1; valor2B = percapita2; strcpy(atributo2, "PIB per capita"); break;
        case 5: valor1B = pib1; valor2B = pib2; strcpy(atributo2, "PIB"); break;
        case 6: valor1B = pontos1; valor2B = pontos2; strcpy(atributo2, "Pontos Turísticos"); break;
        case 7: valor1B = superPoder1; valor2B = superPoder2; strcpy(atributo2, "Super Poder"); break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Regras especiais para densidade (menor vence)
    int resultado1 = (opcao1 == 3) ? (valor1A < valor2A) : (valor1A > valor2A);
    int resultado2 = (opcao2 == 3) ? (valor1B < valor2B) : (valor1B > valor2B);

    // Soma dos valores
    double soma1 = valor1A + valor1B;
    double soma2 = valor2A + valor2B;

    // Exibição clara dos resultados
    printf("\nComparação entre %s e %s\n", nome1, nome2);
    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) -> %s venceu\n",
           atributo1, valor1A, valor2A,
           resultado1 ? nome1 : nome2);

    printf("%s: %.2f (Carta 1) vs %.2f (Carta 2) -> %s venceu\n",
           atributo2, valor1B, valor2B,
           resultado2 ? nome1 : nome2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado Final: %s venceu a rodada!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nResultado Final: %s venceu a rodada!\n", nome2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }

    return 0;
}
