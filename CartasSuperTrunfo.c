#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Definição das variáveis

    int populacao1, populacao2, pontos1, pontos2;
    char estado1, estado2;
    char nome1 [50], nome2 [50], codigo1 [10], codigo2 [10];
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2;


    // Entrada dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("Escolha uma letra para representar o Estado: ");
    scanf (" %c", &estado1);

    printf ("Escreva o código da carta: ");
    scanf ("%s", codigo1);

    printf ("Escreva o nome da cidade: ");
    scanf ("%s", nome1);

    printf ("Escreva a população da cidade: ");
    scanf ("%d", &populacao1);

    printf ("Escreva a área da cidade: ");
    scanf ("%f", &area1);

    printf ("Escreva o PIB da cidade: ");
    scanf ("%f", &pib1);

    printf ("Escreva o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos1);

    printf ("Escreva uma letra para representar o segundo Estado: ");
    scanf (" %c", &estado2);

    printf ("Escreva o código da carta: ");
    scanf ("%s", codigo2);

    printf ("Escreva o nome da cidade: ");
    scanf ("%s", nome2);

    printf ("Escreva a população da cidade: ");
    scanf ("%d", &populacao2);

    printf ("Escreva a área da cidade: ");
    scanf ("%f", &area2);

    printf ("Escreva o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("Escreva o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos2);

    // Cáculo da densidade e PIB per capita

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = (pib1 * 1000000000.0f) / populacao1;
    percapita2 = (pib2 * 1000000000.0f) / populacao2;

    // Exibição dos dados das cartas
    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", nome1);
    printf ("População: %d\n", populacao1);
    printf ("Área: %.2f Km2\n", area1);
    printf ("PIB: %.2f bilhões\n", pib1);
    printf ("Pontos turísticos: %d\n", pontos1);
    printf ("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf ("PIB per capita: %.2f reais\n", percapita1);
    
    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", nome2);
    printf ("População: %d\n", populacao2);
    printf ("Área: %.2f km2\n", area2);
    printf ("PIB: %.2f bilhões\n", pib2);
    printf ("Pontos turísticos: %d\n", pontos2);
        printf ("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf ("PIB per capita: %.2f reais\n", percapita2);
    
    return 0;
}
