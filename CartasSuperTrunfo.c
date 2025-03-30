#include <stdio.h>

int main() {

    // Declaração das variáveis
    char estado;
    char codigo[4]; // Ex: A01, B02
    char nome[50];
    int populacao;
    float area;
    float pib;
    int pontos;

    // Entrada de dados
    printf("Digite a letra do estado (A-H):\n ");
    scanf(" %c", &estado);

    printf("Digite o código da carta (Ex: A01):\n ");
    scanf("%3s", codigo);

    printf("Digite o nome da cidade:\n ");
    scanf(" %49[^\n]", nome); // Permite espaços no nome

    printf("Digite a populacao da cidade:\n ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade (km²):\n ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões):\n ");
    while (getchar()!= '\n'); //limpa o buffer antes de scanf
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos:\n ");
    while (getchar()!= '\n'); //limpa o buffer antes de scanf
    scanf("%d", &pontos);

    // Exibição dos dados
    printf("\n--- Dados da Carta1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);


    printf("\n---CARTA2---\n");
    // Declaração das variáveis ,segunda carta
    char estado2;
    char codigo2[4]; // Ex: A01, B02
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;


    // Entrada de dados
    printf("Digite a letra do estado2 (A-H):\n ");
    scanf(" %s", &estado2);

    printf("Digite o código da carta2 (Ex: B02):\n ");
    scanf("%3s", codigo2);

    printf("Digite o nome da cidade2:\n ");
    scanf(" %49s[^\n]", nome2); // Permite espaços no nome

    printf("Digite a populacao da cidade2:\n ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade2 (km²):\n ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade2 (em bilhões):\n ");
    while (getchar()!= '\n'); //limpa o buffer antes de scanf
    scanf("%f", &pib2);

    printf("Digite o numero de pontos2 turísticos:\n ");
    while (getchar()!= '\n'); //limpa o buffer antes de scanf
    scanf("%d", &pontos2);

    // Exibição dos dados

    printf("\n--- Dados da Carta1 ---\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigo);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos);

    return 0;
}