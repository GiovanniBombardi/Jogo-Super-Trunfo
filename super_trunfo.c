#include <stdio.h>

int main(){
    // Cadastros das cidades 

    // Cadastro carta 1
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontostur1;
       
    // Cadastro carta 2
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;

    // Introdução dos dados da 1 carta
    printf("Cadastro da carta N2\n");
    printf("Insira a Letra representada pelo estado: ");
    scanf(" %c", &estado1);
    printf("Insira o codigo representado da carta: ");
    scanf("%s", &codigo1);
    printf("Insira os Nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Insira os dados da Pupulação: ");
    scanf("%d", &populacao1);
    printf("Isira a area em km quadrados: ");
    scanf("%f", &area1);
    printf("Insira o PIB em milhoes da cidade: ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turisticos da Cidade: ");
    scanf("%d", &pontostur1);

    printf("Carta N1 cadastrada com sucesso!\n");

    // Apresentação da Carta 1

    printf("Carta N1\n");
    printf("Estada: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontostur1);


    // Introdução dos dados da 2 carta
    printf("Por favor insira os dados do Cadastro da carta N2\n");
    printf("Insira a Letra representada pelo estado: ");
    scanf(" %c", &estado2);
    printf("Insira o codigo representado da carta: ");
    scanf("%s", &codigo2);
    printf("Insira os Nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Insira os dados da Pupulação: ");
    scanf("%d", &populacao2);
    printf("Isira a area em km quadrados: ");
    scanf("%f", &area2);
    printf("Insira o PIB em milhoes da cidade: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turisticos da Cidade: ");
    scanf("%d", &pontostur2);

    printf("Carta N2 cadastrada com sucesso!\n");

    // Apresentação da Carta 2
    printf("Carta N2\n");
    printf("Estada: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontostur2);



    
    
}