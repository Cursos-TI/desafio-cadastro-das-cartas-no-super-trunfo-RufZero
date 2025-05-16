#include <stdio.h>

int main() {

    // Carta 1

    char Estado[20];
    char Codigo_da_Carta[20];
    char Nome_da_Cidade[20];
    int Populacao; // em milhões de pessoas
    float Area; // em quilômetros quadrados
    float PIB; // em reais
    int Numero_de_Pontos_Turisticos;
    float Densidade_populacional;
    float PIB_per_Capita;


    printf("Digite o Estado da Carta: \n");
    scanf("%19s", Estado); 

    printf("Digite o Código da Carta: \n");
    scanf("%19s", Codigo_da_Carta);

    printf("Digite o Nome da Cidade: \n");
    scanf("%19s", Nome_da_Cidade);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    Densidade_populacional = Populacao / Area;

    PIB_per_Capita = Populacao / PIB;

    printf("\n"); // Separar uma carta da outra

    // Carta 2 

    char Estado1[20];
    char Codigo_da_Carta1[20];
    char Nome_da_Cidade1[20];
    int Populacao1; // em milhões de pessoas
    float Area1; // em quilômetros quadrados
    float PIB1; // em reais
    int Numero_de_Pontos_Turisticos1;
    float Densidade_populacional1;
    float PIB_per_Capita1;

    printf("Digite o Estado da Carta: \n");
    scanf("%19s", Estado1); 

    printf("Digite o Código da Carta: \n");
    scanf("%19s", Codigo_da_Carta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%19s", Nome_da_Cidade1);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turísticos: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos1);

    Densidade_populacional1 = Populacao1 / Area1;

    PIB_per_Capita1 = Populacao1 / PIB1;

    // Impressão da Carta 1

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", Codigo_da_Carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %2.f km²\n", Area);
    printf("PIB: %2.f bilhões de reias\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
    
    printf("\n"); // Pular uma linha de uma carta para a outra

    // Impressão da Carta 2

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %2.f km²\n", Area1);
    printf("PIB: %2.f bilhões de reias\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);


    return 0;
}