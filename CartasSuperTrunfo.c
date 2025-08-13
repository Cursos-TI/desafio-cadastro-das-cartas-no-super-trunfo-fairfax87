#include <stdio.h>
int main()
{
    // carta 1
    char estado1[20];
    char cidade1[30];
    unsigned long int populacao1;
    int cod_carta1;
    int pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1;
    float superpoder1;

    float pibPerCapita1;
    // variavel para calculo
    float resultadoDensidade1;
    float resultadoPib1;

    // inserir dados carta1
    printf("bem vindo ao super trunfo brasil!\n");

    printf("estado:\n");
    scanf("%s", estado1);
    printf("Codigo\n");
    scanf("%d", &cod_carta1);
    printf("cidade:\n");
    scanf("%s",cidade1);
    printf("populacao1:\n");
    scanf("%lu", &populacao1);
    printf("area1:\n");
    scanf("%f", &area1);
    printf("pib1:\n");
    scanf("%f", &pib1);
    printf("Pontos turísticos:\n");
    scanf("%d", &pontosTuristicos1);

    printf("Densidade Populacional: hab/km²\n");
    scanf("%f", &densidadePopulacional1);
    printf("PIB per Capita:reais\n");

    resultadoDensidade1 = (float)populacao1 / area1;
    resultadoPib1 = (pib1 * 1000000000) / populacao1;
    printf("pib per capita: %.2f\n", resultadoPib1);
    superpoder1 = (float)populacao1+area1+pib1+pontosTuristicos1+(1/resultadoDensidade1);


    printf("Carta 1:\n");
    printf("estado:%s\n", estado1);
    printf("Codigo B0%d\n", cod_carta1);
    printf("cidade:%s\n", cidade1);
    printf("populacao1:%lu\n", populacao1);
    printf("area1:%.2f\n", area1);
    printf("pib1:%.2f\n", pib1);
    printf("Densidade Populacional: %.2f hab/km²\n", resultadoDensidade1);
    printf("Superpoder: %.2f\n",superpoder1);

    // carta 2
    char estado2[5];
    char cidade2[10];
    unsigned long int populacao2;
    int pontosTuristicos2;
    int cod_carta2;
     float area2, pib2;
    float densidadePopulacional2;
    float superpoder2;

    float pibPerCapita2;
    // variavel para calculo
    float resultadoDensidade2;
    float resultadoPib2;

    printf("estado:\n");
    scanf("%s", estado2);
    printf("Codigo\n");
    scanf("%d", &cod_carta2);
    printf("cidade:\n");
    scanf("%s", cidade2);
    printf("populacao2:\n");
    scanf("%lu", &populacao2);
    printf("area2:\n");
    scanf("%f", &area2);
    printf("pib2:\n");
    scanf("%f", &pib2);
    printf("Pontos turísticos:\n");
    scanf("%d", &pontosTuristicos2);

    printf("Densidade Populacional: hab/km²\n");
    scanf("%f", &densidadePopulacional2);
    printf("PIB per Capita:reais\n");
    resultadoDensidade2 = (float)populacao2 / area2;
    resultadoPib2 = (pib2 * 1000000000) / populacao2;
    printf("pib per capita: %.2f\n", resultadoPib2);
    superpoder2 = (float)populacao2+area2+pib2+pontosTuristicos2+(1/resultadoDensidade2);


    printf("Carta 2:\n");
    printf("estado:%s\n", estado2);
    printf("Codigo B0%d\n", cod_carta2);
    printf("cidade:%s\n", cidade2);
    printf("populacao2:%lu\n", populacao2);
    printf("area2:%.2f\n", area2);
    printf("pib2:%.2f\n", pib2);
    printf("Densidade Populacional: %.2f hab/km²\n", resultadoDensidade2);
    printf("pib per capita: %.2f\n", resultadoPib2);
    printf("Superpoder: %.2f\n", superpoder2);
    printf("\n");

    return 0;
}
