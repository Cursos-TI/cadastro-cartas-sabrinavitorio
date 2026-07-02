#include <stdio.h>

//Desafio Super Trunfo
//Tema 1 e 2

int main (){

    //Carta 1
        char estado1; //estado representado na carta
        char codigo1[4]; //código da carta
        char cidade1[30]; //cidade representada na carta
        int populaçao1; //números de habitantes da cidade
        float area1; //área da cidade (km²)
        float PIB1; //o Produto Interno Bruto da cidade em reais
        int pontosturisticos1; //quantos pontos turísticos têm na cidade

        //Coleta de dados
            printf("Cadastro da Carta 1: \n");

            printf ("Estado: \n");
            scanf("%c", &estado1);

            printf("Código da carta: \n");
            scanf("%s", codigo1);

            printf("Cidade: \n");
            scanf(" %[^\n]", cidade1);

            printf("População: \n");
            scanf("%d", &populaçao1);

            printf("Área: \n");
            scanf("%f", &area1);

            printf("PIB: \n");
            scanf("%f", &PIB1);

            printf("Quantidade de pontos turísticos: \n");
            scanf("%d", &pontosturisticos1);

            printf("\n");

        //Cálculos
            float densidade1 = (float) populaçao1 / area1; //densidade populacional da cidade hab/km²
            float pibpercapita1 = (float) PIB1 / populaçao1; //pib per capita da cidade
            float superpoder1 = (float) populaçao1 + area1 + PIB1 + pontosturisticos1 + (1 / densidade1) + pibpercapita1;

        //Demonstração
            printf("Carta 1: \n");
            printf("Estado: %c \n", estado1);
            printf("Código: %s \n", codigo1);
            printf("Cidade: %s \n", cidade1);
            printf("População: %d \n", populaçao1);
            printf("Área: %.2f km² \n", area1);
            printf("PIB: R$ %.2f \n", PIB1);
            printf("Quantidade de pontos turísticos: %d \n", pontosturisticos1);
            printf("Densidade populacional: %.2f hab/km²\n", densidade1);
            printf("PIB per capita: R$ %.2f\n", pibpercapita1);
            printf("Super Poder: %.2f \n", superpoder1);

    printf("\n");

    //Carta 2
        char estado2; //estado representado na carta
        char codigo2[4]; //código da carta
        char cidade2[30]; //cidade representada na carta
        int populaçao2; //números de habitantes da cidade
        float area2; //área da cidade (km²)
        float PIB2; //o Produto Interno Bruto da cidade em reais
        int pontosturisticos2; //quantos pontos turísticos têm na cidade

        //Coleta de dados
            printf("Cadastro da Carta 2: \n");

            printf ("Estado: \n");
            scanf("%c", &estado2);

            printf("Código da carta: \n");
            scanf("%s", codigo2);

            printf("Cidade: \n");
            scanf(" %[^\n]", cidade2);

            printf("População: \n");
            scanf("%d", &populaçao2);

            printf("Área: \n");
            scanf("%f", &area2);

            printf("PIB: \n");
            scanf("%f", &PIB2);

            printf("Quantidade de pontos turísticos: \n");
            scanf("%d", &pontosturisticos2);

            printf("\n");

        //Cálculos
            float densidade2 = (float) populaçao2 / area2; //densidade populacional da cidade hab/km²
    
            float pibpercapita2 = (float) PIB2 / populaçao2; //pib per capita da cidade
    
            float superpoder2 = (float) populaçao2 + area2 + PIB2 + pontosturisticos2 + (1 / densidade2) + pibpercapita2;


   
        //Demonstração
            printf("Carta 2: \n");
            printf("Estado: %c \n", estado2);
            printf("Código: %s \n", codigo2);
            printf("Cidade: %s \n", cidade2);
            printf("População: %d \n", populaçao2);
            printf("Área: %.2f km² \n", area2);
            printf("PIB: R$ %.2f \n", PIB2);
            printf("Quantidade de pontos turísticos: %d \n", pontosturisticos2);
            printf("Densidade populacional: %.2f hab/km²\n", densidade2);
            printf("PIB per capita: R$ %.2f\n", pibpercapita2);
            printf("Super Poder: %.2f \n", superpoder2);

    return 0;

}
