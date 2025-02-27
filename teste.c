#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Vamos criar as cartas para um jogo? Digite as informações solicitadas abaixo: \n");

    // Primeira carta
    char estado1, codigoCarta1[10], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    

    printf("Vamos para a primeira carta: \n");

    printf("Digite uma Letra: \n");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Digite o numero de 1 a 4 começando com 0: \n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a área desta cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade (em bilhões, ex: 699.28): \n");
    scanf("%.2f", &pib1); // Usando %lf para ler double

    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos1);

    // Converter PIB de bilhões para reais
    pib1 *= 1e9;

    // Segunda carta
    char estado2, codigoCarta2[10], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2;
    double pib2; // Alterado para double para maior precisão

    printf("Vamos para a segunda carta: \n");

    printf("Digite uma Letra: \n");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o numero de 1 a 4 começando com 0: \n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área desta cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade (em bilhões, ex: 699.28): \n");
    scanf("%.2f", &pib2); // Usando %lf para ler double

    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Converter PIB de bilhões para reais
    pib2 *= 1e9;

    // Exibir informações da primeira carta
    printf("\n=== Carta 01 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %c%s\n", estado1, codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1 / 1e9);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao1 / area1);

    /*if (populacao1 > 0) {*/
        printf("PIB per Capita: %.2f reais\n", pib1 / populacao1);
    /*} else {
        printf("PIB per Capita: N/A (população inválida)\n");
    }*/

    // Exibir informações da segunda carta
    /*printf("\n=== Carta 02 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %c%s\n", estado2, codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2 / 1e9);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", populacao2 / area2);

    if (populacao2 > 0) {
        printf("PIB per Capita: %.2f reais\n", pib2 / populacao2);
    } else {
        printf("PIB per Capita: N/A (população inválida)\n");
    }*/

    return 0;
}