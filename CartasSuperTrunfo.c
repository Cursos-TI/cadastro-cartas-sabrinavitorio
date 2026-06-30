#include <stdio.h>

int main (){

    //estado A
    char estadoA = 'A'; //representa o estado de Santa Catarina

    //carta 1
    char codigoA1[4] = "A01"; //código da carta
    char cidadeA1[30] = "São José"; //cidade representada na carta
    int populaçaoA1 = 295658; //número de habitantes da cidade
    float areaA1 = 150.5; //área da cidade (km²)
    float PIBA1 = 15600000000; //o Produto Interno Bruto da cidade em reais
    int pontosturisticosA1 = 10; //quantos pontos turísticos têm na cidade
    float densidadeA1 = (float) populaçaoA1 / areaA1; //densidade populacional da cidade hab/km²
    float pibpercapitaA1 = (float) PIBA1 / populaçaoA1; //pib per capita da cidade

    printf("Carta 1: \n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", codigoA1);
    printf("Cidade: %s\n", cidadeA1);
    printf("População: %d\n", populaçaoA1);
    printf("Área: %.2f km²\n", areaA1);
    printf("PIB: R$ %.2f\n", PIBA1);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticosA1);
    printf("Densidade populacional: %.2f hab/km²\n", densidadeA1);
    printf("PIB per capita: R$ %.2f\n", pibpercapitaA1);

    printf("\n");
    
    //carta 2
    char codigoA2[4] = "A02"; //código da carta
    char cidadeA2[30] = "Florianópolis"; //cidade representada na carta
    int populaçaoA2 = 595630; //número de habitantes da cidade
    float areaA2 = 674.84; //área da cidade (km²)
    float PIBA2 = 31200000000; //o Produto Interno Bruto da cidade em reais
    int pontosturisticosA2 = 30; //quantos pontos turísticos têm na cidade
    float densidadeA2 = (float) populaçaoA2 / areaA2; //densidade populacional da cidade hab/km²
    float pibpercapitaA2 = (float) PIBA2 / populaçaoA2; //pib per capita da cidade

    printf("Carta 2: \n");
    printf("Estado: %c\n", estadoA);
    printf("Código: %s\n", codigoA2);
    printf("Cidade: %s\n", cidadeA2);
    printf("População: %d\n", populaçaoA2);
    printf("Área: %.2f km²\n", areaA2);
    printf("PIB: R$ %.2f\n", PIBA2);
    printf("Quantidade de pontos turísticos: %d\n", pontosturisticosA2);
    printf("Densidade populacional: %.2f hab/km²\n", densidadeA2);
    printf("PIB per capita: R$ %.2f\n", pibpercapitaA2);
  
    return 0;
}
