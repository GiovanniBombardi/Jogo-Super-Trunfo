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
    float densidadepop1;
    float pibpercapita1;
    float superpoder1;
    float inversodensidade1;

    
       
    // Cadastro carta 2
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontostur2;
    float densidadepop2;
    float pibpercapita2;
    float superpoder2;
    float inversodensidade2;


    // Introdução dos dados da 1 carta
    printf("***Cadastro da carta N1***\n");
    printf("Insira a Letra representada pelo estado: ");
    scanf(" %c", &estado1);
    printf("Insira o codigo representado da carta: ");
    scanf("%s", &codigo1);
    printf("Insira os Nome da cidade (Por favor colocar o nome sem espaço): ");
    scanf("%s", &cidade1);
    printf("Insira os dados da Pupulação: ");
    scanf("%d", &populacao1);
    printf("Isira a area em km quadrados: ");
    scanf("%f", &area1);
    printf("Insira o PIB em bilhoes da cidade: ");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turisticos da Cidade: ");
    scanf("%d", &pontostur1);

    densidadepop1 = (float)populacao1 / area1;
    pibpercapita1 = (float)pib1 * 1000000000 / populacao1;
    inversodensidade1 = (densidadepop1 > 0) ? (1.0f / densidadepop1) : 0.0f;
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontostur1 + pibpercapita1 + inversodensidade1);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop1);
    printf("PIB per Capita: %.2f mil reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);


    // Introdução dos dados da 2 carta
    printf("***Cadastro da carta N2***\n");
    printf("Insira a Letra representada pelo estado: ");
    scanf(" %c", &estado2);
    printf("Insira o codigo representado da carta: ");
    scanf("%s", &codigo2);
    printf("Insira os Nome da cidade (Por favor colocar o nome sem espaço): ");
    scanf("%s", &cidade2);
    printf("Insira os dados da Pupulação: ");
    scanf("%d", &populacao2);
    printf("Isira a area em km quadrados: ");
    scanf("%f", &area2);
    printf("Insira o PIB em bilhoes da cidade: ");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turisticos da Cidade: ");
    scanf("%d", &pontostur2);

    densidadepop2 = (float)populacao2 / area2;
    pibpercapita2 = (float)pib2 * 1000000000 / populacao2;
    inversodensidade2 = (densidadepop2 > 0) ? (1.0f / densidadepop2) : 0.0f;
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontostur2 + pibpercapita2 + inversodensidade2);

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepop2);
    printf("PIB per Capita: %.2f mil reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Confronto entre as cartas
    printf("***Resultado do confronto entre as cartas:***\n");

    // População
    printf("Atributo: População\n");
    printf("Carta 1 - %s (%c): %d \n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%c): %d \n", cidade2, estado2, populacao2);
    if(populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    // Area
    printf("Atributo: Area\n");
    printf("Carta 1 - %s (%c): %.2f km² \n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%c): %.2f km² \n", cidade2, estado2, area2);
    if(area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    // PIB
    printf("Atributo: PIB\n");
    printf("Carta 1 - %s (%c): %.2f bilhoes de reais \n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%c): %.2f bilhoes de reais \n", cidade2, estado2, pib2);
    if(pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    // Pontos Turisticos
    printf("Atributo: Pontos Turisticos\n");
    printf("Carta 1 - %s (%c): %d \n", cidade1, estado1, pontostur1);
    printf("Carta 2 - %s (%c): %d \n", cidade2, estado2, pontostur2);
    if(pontostur1 > pontostur2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    // Densidade Populacional
    printf("Atributo: Densidade Populacional\n");
    printf("Carta 1 - %s (%c): %.2f hab/km² \n", cidade1, estado1, densidadepop1);
    printf("Carta 2 - %s (%c): %.2f hab/km² \n", cidade2, estado2, densidadepop2);
    if(densidadepop1 < densidadepop2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    // PIB per Capita
    printf("Atributo: PIB per Capita\n");
    printf("Carta 1 - %s (%c): %.2f mil reais \n", cidade1, estado1, pibpercapita1);
    printf("Carta 2 - %s (%c): %.2f mil reais \n", cidade2, estado2, pibpercapita2);
    if(pibpercapita1 > pibpercapita2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }
    
    // Super Poder
    printf("Atributo: Super Poder\n");
    printf("Carta 1 - %s (%c): %.2f \n", cidade1, estado1, superpoder1);
    printf("Carta 2 - %s (%c): %.2f \n", cidade2, estado2, superpoder2);
    if(superpoder1 > superpoder2){
        printf("Resultado: Carta 1 (%s) venceu! \n", cidade1);
    } else {
        printf("Resultado: Carta 2 (%s) venceu! \n", cidade2);
    }

    return 0;
        
    
}