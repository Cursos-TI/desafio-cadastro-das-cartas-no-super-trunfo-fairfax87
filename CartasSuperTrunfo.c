#include <stdio.h>
int main()
{
    // carta jogador pernambuco
    char estado1[30] = "pernambuco";
    char cidade1[5] = "R";
    int populacao1 = 1200, pontosTuristicos1 = 3, cod_carta1 = 1;
    float area1 = 3200, pib1 = 42.00;

    // inserir dados carta1
    printf("bem vindo ao super trunfo brasil!\n");

    printf("sua carta:\n");
    printf("estado:%s\n", estado1);
    printf("Codigo B0%d\n", cod_carta1);
    printf("cidade:%s\n", cidade1);
    printf("populacao1:%d\n", populacao1);
    printf("area1:%.2f\n", area1);
    printf("pib1:%.2f\n", pib1);

    printf("\n");

    // cartas jogador amazonas
    char estado2[30] = "amazonas";
    char cidade2[5] = "A";
    int populacao2 = 1100, pontosTuristicos2 = 3, cod_carta2 = 2;
    float area2 = 2350, pib2 = 60.00;

    printf("sua carta:\n");
    printf("estado:%s\n", estado2);
    printf("Codigo B0%d\n", cod_carta2);
    printf("cidade:%s\n", cidade2);
    printf("populacao1:%d\n", populacao2);
    printf("area1:%.2f\n", area2);
    printf("pib1:%.2f\n", pib2);

    return 0;
}
