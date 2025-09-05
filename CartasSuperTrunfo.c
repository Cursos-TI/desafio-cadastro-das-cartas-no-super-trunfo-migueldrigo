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

    int pontos1, pontos2, resultado, opcao;
    unsigned long int populacao1, populacao2;
    char estado1, estado2;
    char nome1 [50], nome2 [50], codigo1 [10], codigo2 [10];
    float area1, area2, pib1, pib2, densidade1, densidade2, percapita1, percapita2, superPoder1, superPoder2;
    int resultadoPopulacao, resultadoArea, resultadoPib, resultadoPontos, resultadoDensidade, resultadoPerCap, resultadoSuper;


    // Entrada dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf ("** JOGO SUPERTRUNFO **\n");
    printf ("Vamos cadastrar as cartas!\n");
    printf ("Entre com os dados!\n");

    printf ("Escolha uma letra para representar o Estado: ");
    scanf (" %c", &estado1);

    printf ("Escreva o código da carta: ");
    scanf ("%s", codigo1);

    printf ("Escreva o nome da cidade: ");
    scanf ("%s", nome1);

    printf ("Escreva a população da cidade: ");
    scanf ("%lu", &populacao1);

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
    scanf ("%lu", &populacao2);

    printf ("Escreva a área da cidade: ");
    scanf ("%f", &area2);

    printf ("Escreva o PIB da cidade: ");
    scanf ("%f", &pib2);

    printf ("Escreva o número de pontos turísticos da cidade: ");
    scanf ("%d", &pontos2);

    // Cáculo da densidade, PIB per capita e SuperPoder

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    percapita1 = (pib1 * 1000000000) / populacao1;
    percapita2 = (pib2 * 1000000000) / populacao2;
    superPoder1 = (float)populacao1 + area1 + pib1 + percapita1 + (1.0 / densidade1) + (float)pontos1;
    superPoder2 = (float)populacao2 + area2 + pib2 + percapita2 + (1.0 / densidade2) + (float)pontos2;

    // Exibição dos dados das cartas
    printf ("Carta 1: \n");
    printf ("Estado: %c\n", estado1);
    printf ("Código: %s\n", codigo1);
    printf ("Nome da cidade: %s\n", nome1);
    printf ("População: %lu\n", populacao1);
    printf ("Área: %.2f Km2\n", area1);
    printf ("PIB: %.2f bilhões\n", pib1);
    printf ("Pontos turísticos: %d\n", pontos1);
    printf ("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf ("PIB per capita: %f reais\n", percapita1);
    
    printf ("Carta 2: \n");
    printf ("Estado: %c\n", estado2);
    printf ("Código: %s\n", codigo2);
    printf ("Nome da cidade: %s\n", nome2);
    printf ("População: %lu\n", populacao2);
    printf ("Área: %.2f km2\n", area2);
    printf ("PIB: %.2f bilhões\n", pib2);
    printf ("Pontos turísticos: %d\n", pontos2);
    printf ("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf ("PIB per capita: %f reais\n", percapita2);
    
    // Resultado comparações
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPerCap = percapita1 > percapita2;
    resultadoPib = pib1 > pib2;
    resultadoPontos = pontos1 > pontos2;
    resultadoSuper = superPoder1 > superPoder2;

    //Criando o menu interativo
    printf ("Escolha qual atributo você quer comparar!:\n");
    printf ("1. População\n");
    printf ("2. Área\n");
    printf ("3. Densidade\n");
    printf ("4. Pib per capita\n");
    printf ("5. PIB\n");
    printf ("6. Pontos Turísticos\n");
    printf ("7. Super Poder\n");
    printf ("Opção: ");
    scanf ("%d", &opcao);

    //Switch para a escolha da opção do jogador no Menu

    switch (opcao)
    {
    case 1:
        if (populacao1 > populacao2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("População: Carta 1 - %lu vs Carta 2 - %lu\n", populacao1, populacao2);
        printf ("População: Carta 1 venceu!\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("População: Carta 1 - %lu vs Carta 2 - %lu\n", populacao1, populacao2);
        printf ("População: Carta 2 venceu!\n");
    }
        break;
    case 2:
        if (area1 > area2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Área: Carta 1 - %.2f km2 vs Carta 2 - %.2f km2\n", area1, area2);
        printf ("Área: Carta 1 venceu\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Área: Carta 1 - %.2f km2 vs Carta 2 - %.2f km2\n", area1, area2);
        printf ("Área: Carta 2 venceu\n");
    }
        break;
    case 3:
    if (densidade1 < densidade2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Densidade populacional: Carta 1 - %f hab/km2 vs Carta 2 - %f hab/km2\n", densidade1, densidade2);
        printf ("Densidade populacional: Carta 1 venceu!\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Densidade populacional: Carta 1 - %f hab/km2 vs Carta 2 - %f hab/km2\n", densidade1, densidade2);
        printf ("Densidade populacional: Carta 2 venceu!\n");
    }
        break;
    case 4:
    if (percapita1 > percapita2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("PIB per capita: Carta 1 - %f reais vs Carta 2 - %f reais\n", percapita1, percapita2);
        printf ("PIB per capita: Carta 1 venceu!\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("PIB per capita: Carta 1 - %f reais vs Carta 2 - %f reais\n", percapita1, percapita2);
        printf ("PIB per capita: Carta 2 venceu!\n");
    }
        break;
    case 5:
     if (pib1 > pib2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("PIB: Carta 1 - %.2f bilhões vs Carta 2 - %.2f bilhões\n", pib1, pib2);
        printf ("PIB: Carta 1 venceu!\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("PIB: Carta 1 - %.2f bilhões vs Carta 2 - %.2f bilhões\n", pib1, pib2);
        printf ("PIB: Carta 2 venceu!\n");
    }
        break;
    case 6:
    if (pontos1 > pontos2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Pontos Turísticos: Carta 1 - %d  vs Carta 2 - %d\n", pontos1, pontos2);
        printf ("Pontos Turísticos: Carta 1 venceu\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Pontos Turísticos: Carta 1 - %d  vs Carta 2 - %d\n", pontos1, pontos2);
        printf ("Pontos Turísticos: Carta 2 venceu!\n");
    }
        break;
    case 7:
    if (superPoder1 > superPoder2){
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Super Poder: Carta 1 - %.2f  vs Carta 2 - %.2f\n", superPoder1, superPoder2);
        printf ("Super Poder: Carta 1 venceu!\n");
    }else{
        printf ("Carta 1 - %s vs Carta 2 - %s\n", nome1, nome2);
        printf ("Super Poder: Carta 1 - %.2f  vs Carta 2 - %.2f\n", superPoder1, superPoder2);
        printf ("Super Poder: Carta 2 venceu!\n");
    }
        break;    
    default:
        printf ("Opção inválida. Por favor, escolha novamente.\n");
        break;
    }
    

return 0;
}