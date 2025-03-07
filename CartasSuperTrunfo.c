#include <stdio.h>
#include <ctype.h>
#include "SuperT.h"
 
    void supertrunfo() {
    printf("Vamos criar as cartas para um jogo? Digite as informações solicitadas abaixo:\n");
    
    // Cadastro da primeira carta
    char estado1, codigoCarta1[10], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, superPoder1;
    double pib1;
    
    printf("\nVamos para a primeira carta:\n");

    printf("Digite uma Letra:\n");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    printf("Digite o número de 1 a 4 começando com 0:\n");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]" , nomeCidade1);

    printf("Digite a população desta cidade:\n");
    scanf("%lu", &populacao1);

    printf("Digite a área desta cidade:\n");
    scanf("%f", &area1);

    printf("Digite o PIB desta cidade (em bilhões, ex: 699.28):\n");
    scanf("%lf", &pib1);
    pib1 *= 1e9;

    printf("Digite a quantidade de pontos turísticos desta cidade:\n");
    scanf("%d", &pontosTuristicos1);

    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Cadastro da segunda carta
    char estado2, codigoCarta2[10], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, superPoder2;
    double pib2;

    printf("\nVamos para a segunda carta:\n");

    printf("Digite uma Letra:\n");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    printf("Digite o número de 1 a 4 começando com 0:\n");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade:\n");
    scanf(" %[^\n]" , nomeCidade2);

    printf("Digite a população desta cidade:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área desta cidade:\n");
    scanf("%f", &area2);

    printf("Digite o PIB desta cidade (em bilhões, ex: 699.28):\n");
    scanf("%lf", &pib2);
    pib2 *= 1e9;

    printf("Digite a quantidade de pontos turísticos desta cidade:\n");
    scanf("%d", &pontosTuristicos2);

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    // Comparação
    printf("\n=== Comparação de Cartas ===\n");
    printf("População: Carta %d venceu (%d)\n", populacao1 > populacao2 ? 1 : 2, populacao1 > populacao2);
    printf("Área: Carta %d venceu (%d)\n", area1 > area2 ? 1 : 2, area1 > area2);
    printf("PIB: Carta %d venceu (%d)\n", pib1 > pib2 ? 1 : 2, pib1 > pib2);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", pontosTuristicos1 > pontosTuristicos2 ? 1 : 2, pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", densidade1 < densidade2 ? 1 : 2, densidade1 < densidade2);
    printf("PIB per Capita: Carta %d venceu (%d)\n", pibPerCapita1 > pibPerCapita2 ? 1 : 2, pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta %d venceu (%d)\n", superPoder1 > superPoder2 ? 1 : 2, superPoder1 > superPoder2);
    printf("\n");
    
    
    if(densidade1<densidade2){
        printf("Carta 1 venceu por densidade populacional\n");
    } else if  (densidade1==densidade2){
        printf("Empate\n");
    } else {
        printf("Carta 2 venceu por densidade populacional\n");
    }
  supertrunfo();
}
