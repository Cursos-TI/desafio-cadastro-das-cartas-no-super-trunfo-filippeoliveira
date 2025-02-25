//Inclui a biblioteca padrão de entrada e saída
#include <stdio.h>

// Método principal, o que inicia o sistema
int main() {
    printf("Vamos criar as cartas para um jogo? Digite as informações solicitadas abaixo: \n");
    
    // Cadastro da primeira carta
    // Declaração de variáveis
    char estado1;
    char codigoCarta1[10];  // Alocando espaço para a string
    char nomeCidade1[50];   // Alocando espaço para a string
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    printf("Vamos para a primeira carta: \n");
    printf("Digite uma Letra: \n");
    scanf(" %c", &estado1);  // Espaço antes de %c para consumir o caractere de nova linha
    printf("Digite o numero de 1 a 4 começando com 0: \n");
    scanf("%s", codigoCarta1);  // Leitura do código da carta corretamente (sem espaços)
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade1);  // Para ler o nome completo com espaços
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao1);
    printf("Digite a área desta cidade: \n");
    scanf("%f", &area1);  
    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos1);
 
    // Cadastro da segunda carta
    // Declaração de variáveis
    char estado2;
    char codigoCarta2[10];  // Alocando espaço para a string
    char nomeCidade2[50];   // Alocando espaço para a string
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Vamos para a segunda carta: \n");
    printf("Digite uma Letra: \n");
    scanf(" %c", &estado2);  // Espaço antes de %c para consumir o caractere de nova linha
    printf("Digite o numero de 1 a 4 começando com 0: \n");
    scanf("%s", codigoCarta2);  // Leitura do código da carta corretamente (sem espaços)
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomeCidade2);  // Para ler o nome completo com espaços
    printf("Digite a população desta cidade: \n");
    scanf("%d", &populacao2);
    printf("Digite a área desta cidade: \n");
    scanf("%f", &area2);  
    printf("Digite o PIB desta cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos desta cidade: \n");
    scanf("%d", &pontosTuristicos2);

    // Imprime a primeira carta de acordo com os parâmetros
    printf("Carta 01: \n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);  
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("\n");

    // Imprime a segunda carta de acordo com os parâmetros
    printf("Carta 02: \n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2); 
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("\n");

    return 0;  // Finaliza o programa
}
