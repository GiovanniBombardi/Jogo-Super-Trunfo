#include <stdio.h>

int main(){
    // Cadastros das cidades 

    // Cadastro carta 1
    char estado1 = "A";
    char codigo1[05] = "A01";
    char cidade1[20] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontostur1 = 30;
    float densidadedem1 = 8102.47;
    float pibpercapita1 = 56724.32;
    float superpoder1;
    float inversodensidade1;
     
    // Cadastro carta 2
    char estado2 = "B";
    char codigo2[05] = "B01";
    char cidade2[20] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontostur2 = 30;
    float densidadedem2 = 5622.24;
    float pibpercapita2 = 44532.91;
    float superpoder2;
    float inversodensidade2;

    // Calculo de densidade, pip, etc carta 1
    densidadedem1 = (float)populacao1 / area1;
    pibpercapita1 = (float)pib1 * 1000000000 / populacao1;
    inversodensidade1 = (densidadedem1 > 0) ? (1.0f / densidadedem1) : 0.0f;
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontostur1 + pibpercapita1 + inversodensidade1);

    // Apresentação da Carta 1
    printf("Carta N1\n");
    printf("Estada: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontostur1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedem1);
    printf("PIB per Capita: %.2f mil reais\n", pibpercapita1);
    printf("Super Poder: %.2f\n", superpoder1);

    // Introdução dos dados da 2 carta
    densidadedem2 = (float)populacao2 / area2;
    pibpercapita2 = (float)pib2 * 1000000000 / populacao2;
    inversodensidade2 = (densidadedem2 > 0) ? (1.0f / densidadedem2) : 0.0f;
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontostur2 + pibpercapita2 + inversodensidade2);

    // Apresentação da Carta 2
    printf("Carta N2\n");
    printf("Estada: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontostur2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadedem2);
    printf("PIB per Capita: %.2f mil reais\n", pibpercapita2);
    printf("Super Poder: %.2f\n", superpoder2);

    // Menu para confronto entre as cartas
    int opcao;

    printf("*** Escolha qual atributo para o combate você deseja! ***\n");
    printf("1- Nome da Cidade\n");
    printf("2- População\n");
    printf("3- Area\n");
    printf("4- PIB\n");
    printf("5- Pontos Turisticos\n");
    printf("6- Densidade Demográfica\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Você escolheu o atributo Nome da Cidade!\n");
            printf("Esse atributo não é para comparação apenas informativo! \n");
            printf("Carta 1 - %s \n", cidade1);
            printf("Carta 2 - %s \n", cidade2);
            break;

        case 2:
            printf("Você escolheu o atributo População!\n");
            printf("Carta 1 - %s: %d \n", cidade1, populacao1);
            printf("Carta 2 - %s: %d \n", cidade2, populacao2);
            if (populacao1 > populacao2){
                printf("Carta 1 (%s) venceu! \n", cidade1);
            } else if (populacao2 > populacao1){
                printf("Carta 2 (%s) venceu! \n", cidade2);
            } else {
                printf("Deu empate! \n");
            }
            break;

        case 3:
            printf("Você escolheu o atributo Area!\n");
            printf("Carta 1 - %s: %.2f km² \n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km² \n", cidade2, area2);
            if (area1 > area2){
                printf("Carta 1 (%s) venceu! \n", cidade1);
            } else if (area2 > area1){
                printf("Carta 2 (%s) venceu! \n", cidade2);
            } else {
                printf("Deu empate! \n");
            }
            break;

        case 4:
            printf("Você escolheu o atributo PIB!\n");
            printf("Carta 1 - %s: %.2f bilhoes de reais \n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes de reais \n", cidade2, pib2);
            if (pib1 > pib2){
                printf("Carta 1 (%s) venceu! \n", cidade1);
            } else if (pib2 > pib1){
                printf("Carta 2 (%s) venceu! \n", cidade2);
            } else {
                printf("Deu empate! \n");
            }
            break;

        case 5:
            printf("Você escolheu o atributo Pontos Turisticos!\n");
            printf("Carta 1 - %s: %d \n", cidade1, pontostur1);
            printf("Carta 2 - %s: %d \n", cidade2, pontostur2);
            if (pontostur1 > pontostur2){
                printf("Carta 1 (%s) venceu! \n", cidade1);
            } else if (pontostur2 > pontostur1){
                printf("Carta 2 (%s) venceu! \n", cidade2);
            } else {
                printf("Deu empate! \n");
            }
            break;

        case 6:
            printf("Você escolheu o atributo Densidade Demográfica!\n");
            printf("Carta 1 - %s: %.2f hab/km² \n", cidade1, densidadedem1);
            printf("Carta 2 - %s: %.2f hab/km² \n", cidade2, densidadedem2);
            if (densidadedem1 < densidadedem2){
                printf("Carta 1 (%s) venceu! \n", cidade1);
            } else if (densidadedem2 < densidadedem1){
                printf("Carta 2 (%s) venceu! \n", cidade2);
            } else {
                printf("Deu empate! \n");
            }
            break;

        default:
            printf("Opção inválida! \n");
            break;
    }

    return 0;
        

}