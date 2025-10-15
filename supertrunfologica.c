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
    int pontostur1 = 50;
    float densidadedem1 = 8102.47;
    float pibpercapita1 = 56724.32;
    float superpoder1;
    float inversodensidade1;
    pib1 = pib1 * 1000000000; // Convertendo PIB de bilhões para reais
     
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
    pib2 = pib2 * 1000000000; // Convertendo PIB de bilhões para reais

    // Calculo de densidade, pip, etc carta 1
    densidadedem1 = (float)populacao1 / area1;
    pibpercapita1 = (float)pib1 / populacao1;
    inversodensidade1 = (densidadedem1 > 0) ? (1.0f / densidadedem1) : 0.0f;
    superpoder1 = (float) (populacao1 + area1 + pib1 + pontostur1 + pibpercapita1 + inversodensidade1);

    /*Apresentação da Carta 1
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
    printf("Super Poder: %.2f\n", superpoder1);*/

    // Introdução dos dados da 2 carta
    densidadedem2 = (float)populacao2 / area2;
    pibpercapita2 = (float)pib2 / populacao2;
    inversodensidade2 = (densidadedem2 > 0) ? (1.0f / densidadedem2) : 0.0f;
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontostur2 + pibpercapita2 + inversodensidade2);

    /*Apresentação da Carta 2
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
    printf("Super Poder: %.2f\n", superpoder2);*/

    // Menu para confronto entre as cartas
    int opcao1, opcao2, somacard1, somacard2, resultado1, resultado2;
    int atrubitosdiponiveis[6] = {0,1,1,1,1,1}; // contrele de atributos disponíveis para nao repetir no proximo menu

    printf("**** Seja bem vindo ao game de Super Trunfo!! ****\n");

    // Primeiro atributo para confronto
    printf("Escolha o Primeiro atributo para o confronto entre as cartas: \n");
    for (int i = 1; i <= 5; i++) {
        if (atrubitosdiponiveis[i]) {
            switch(i){
                case 1:
                printf("1- População\n");
                break;

                case 2:
                printf("2- Area\n");
                break;

                case 3:
                printf("3- PIB\n");
                break;

                case 4:
                printf("4- Numero de pontos turisticos\n");
                break;

                case 5:
                printf("5- Densidade Demográfica\n");
                break;

            }
        }
    }
    printf("Digite a sua opção: ");
    scanf("%d", &opcao1);
    atrubitosdiponiveis[opcao1] = 0; // Marca o atributo como usado

    // Trava para nao escolher outro atributo
    if (opcao1 < 1 || opcao1 > 5) {
        printf("Opção inválida! Escolha um atributo válido.\n");
        return 0; // Encerra o programa com erro
    }

    printf("Você escolheu o Primeiro atributo %d\n", opcao1);

    // Resultado 1 do confronto
    switch(opcao1){
        
        case 1:
        resultado1 = populacao1 > populacao2 ? 1 : 0;        
        break;

        case 2:
        resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        resultado1 = pontostur1 > pontostur2 ? 1 : 0;
        break;

        case 5:
        resultado1 = densidadedem1 < densidadedem2 ? 1 : 0;
        break;

        default:
            printf("Opção inválida! \n");
            break;        
    }

    // Segundo atributo para confronto
    printf("Escolha o Segundo atributo para o confronto entre as cartas: \n");
    for (int i = 1; i <= 5; i++) {
        if (atrubitosdiponiveis[i]) {
            switch(i){

                case 1:
                printf("1- População\n");
                break;  

                case 2:
                printf("2- Area\n");
                break;

                case 3:
                printf("3- PIB\n");
                break;

                case 4:
                printf("4- Numero de pontos turisticos\n");
                break;

                case 5:
                printf("5- Densidade Demográfica\n");
                break;
            }
        }
    }

    printf("Digite a sua opção: ");
    scanf("%d", &opcao2);
    atrubitosdiponiveis[opcao2] = 0; // Marca o Segundo atributo como usado

    // Trava para não escolher outro atributo
    if (opcao2 < 1 || opcao2 > 5) {
        printf("Opção inválida! Escolha um atributo válido.\n");
        return 0; // Encerra o programa com erro
    }

    // Trava para não escolher o mesmo atributo
    if (opcao2 == opcao1) {
        printf("Atributo já escolhido! Escolha outro atributo.\n");
        return 0; // Encerra o programa com erro
    }

    printf("Você escolheu o Segundo atributo %d\n", opcao2);

    // Resultado 2 do confronto
    switch(opcao2){
        
        case 1:
        resultado2 = populacao1 > populacao2 ? 1 : 0;        
        break;

        case 2:
        resultado2 = area1 > area2 ? 1 : 0;
        break;

        case 3:
        resultado2 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
        resultado2 = pontostur1 > pontostur2 ? 1 : 0;
        break;

        case 5:
        resultado2 = densidadedem1 < densidadedem2 ? 1 : 0;
        break;

        default:
            printf("Opção inválida! \n");
            break;        
    }

    // Resultados dos confrontos
    printf("===== Resultados dos Confrontos =====\n");
    printf(" Cartas: %s (Carta 1)\n", cidade1);
    if (opcao1 == 1) {
        printf(" Atributo: População\n");
        printf(" Carta 1: %d\n", populacao1);
        printf(" Carta 2: %d\n", populacao2);
    } else if (opcao1 == 2) {
        printf(" Atributo: Area\n");
        printf(" Carta 1: %.2f km²\n", area1);
        printf(" Carta 2: %.2f km²\n", area2);
    } else if (opcao1 == 3) {
        printf(" Atributo: PIB\n");
        printf(" Carta 1: %.2f bilhoes de reais\n", pib1);
        printf(" Carta 2: %.2f bilhoes de reais\n", pib2);
    } else if (opcao1 == 4) {
        printf(" Atributo: Numero de pontos turisticos\n");
        printf(" Carta 1: %d\n", pontostur1);
        printf(" Carta 2: %d\n", pontostur2);
    } else if (opcao1 == 5) {
        printf(" Atributo: Densidade Demográfica\n");
        printf(" Carta 1: %.2f hab/km²\n", densidadedem1);
        printf(" Carta 2: %.2f hab/km²\n", densidadedem2);
    }
    if (opcao2 == 1) {
        printf(" Atributo: População\n");
        printf(" Carta 1: %d\n", populacao1);
        printf(" Carta 2: %d\n", populacao2);
    } else if (opcao2 == 2) {
        printf(" Atributo: Area\n");
        printf(" Carta 1: %.2f km²\n", area1);
        printf(" Carta 2: %.2f km²\n", area2);
    } else if (opcao2 == 3) {
        printf(" Atributo: PIB\n");
        printf(" Carta 1: %.2f bilhoes de reais\n", pib1);
        printf(" Carta 2: %.2f bilhoes de reais\n", pib2);
    } else if (opcao2 == 4) {
        printf(" Atributo: Numero de pontos turisticos\n");
        printf(" Carta 1: %d\n", pontostur1);
        printf(" Carta 2: %d\n", pontostur2);
    } else if (opcao2 == 5) {
        printf(" Atributo: Densidade Demográfica\n");
        printf(" Carta 1: %.2f hab/km²\n", densidadedem1);
        printf(" Carta 2: %.2f hab/km²\n", densidadedem2);
    }

    // soma dos atrubutos
    if (opcao1 == 1 && opcao2 == 2){
        somacard1 = populacao1 + area1;
        somacard2 = populacao2 + area2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %d + %.2f = %.2f\n", cidade1, populacao1, area1, (float)somacard1);
        printf("Carta 2 (%s): %d + %.2f = %.2f\n", cidade2, populacao2, area2, (float)somacard2);
    } else if (opcao1 == 1 && opcao2 == 3){
        somacard1 = populacao1 + pib1;
        somacard2 = populacao2 + pib2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %d + %.2f = %.2f\n", cidade1, populacao1, pib1, (float)somacard1);
        printf("Carta 2 (%s): %d + %.2f = %.2f\n", cidade2, populacao2, pib2, (float)somacard2);
    } 
    else if (opcao1 == 1 && opcao2 == 4){
        somacard1 = populacao1 + pontostur1;
        somacard2 = populacao2 + pontostur2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %d + %d = %d\n", cidade1, populacao1, pontostur1, somacard1);
        printf("Carta 2 (%s): %d + %d = %d\n", cidade2, populacao2, pontostur2, somacard2);
    } 
    else if (opcao1 == 1 && opcao2 == 5){
        somacard1 = populacao1 + densidadedem1;
        somacard2 = populacao2 + densidadedem2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %d + %.2f = %.2f\n", cidade1, populacao1, densidadedem1, (float)somacard1);
        printf("Carta 2 (%s): %d + %.2f = %.2f\n", cidade2, populacao2, densidadedem2, (float)somacard2);
    } 
    else if (opcao1 == 2 && opcao2 == 3){
        somacard1 = area1 + pib1;
        somacard2 = area2 + pib2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, area1, pib1, (float)somacard1);
        printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, area2, pib2, (float)somacard2);
    } 
    else if (opcao1 == 2 && opcao2 == 4){
        somacard1 = area1 + pontostur1;
        somacard2 = area2 + pontostur2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %.2f + %d = %.2f\n", cidade1, area1, pontostur1, (float)somacard1);
        printf("Carta 2 (%s): %.2f + %d = %.2f\n", cidade2, area2, pontostur2, (float)somacard2);
    } 
    else if (opcao1 == 2 && opcao2 == 5){
        somacard1 = area1 + densidadedem1;
        somacard2 = area2 + densidadedem2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, area1, densidadedem1, (float)somacard1);
        printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, area2, densidadedem2, (float)somacard2);
    } 
    else if (opcao1 == 3 && opcao2 == 4){
        somacard1 = pib1 + pontostur1;
        somacard2 = pib2 + pontostur2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %.2f + %d = %.2f\n", cidade1, pib1, pontostur1, (float)somacard1);
        printf("Carta 2 (%s): %.2f + %d = %.2f\n", cidade2, pib2, pontostur2, (float)somacard2);
    } 
    else if (opcao1 == 3 && opcao2 == 5){
        somacard1 = pib1 + densidadedem1;
        somacard2 = pib2 + densidadedem2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %.2f + %.2f = %.2f\n", cidade1, pib1, densidadedem1, (float)somacard1);
        printf("Carta 2 (%s): %.2f + %.2f = %.2f\n", cidade2, pib2, densidadedem2, (float)somacard2);
    } 
    else if (opcao1 == 4 && opcao2 == 5){
        somacard1 = pontostur1 + densidadedem1;
        somacard2 = pontostur2 + densidadedem2;
        printf("Soma dos Atributos: \n");
        printf("Carta 1 (%s): %d + %.2f = %.2f\n", cidade1, pontostur1, densidadedem1, (float)somacard1);
        printf("Carta 2 (%s): %d + %.2f = %.2f\n", cidade2, pontostur2, densidadedem2, (float)somacard2);
    }
    // Resultado final
    if (resultado1 && resultado2) {        
        printf(" O vencedor é a Carta 1 (%s)!\n", cidade1);
    } else if (resultado1 != resultado2) {
        printf("Deu Empate!\n");
    } else {
        printf(" O vencedor é a Carta 2 (%s)!\n", cidade2);
    }

    return 0;
        
    
}