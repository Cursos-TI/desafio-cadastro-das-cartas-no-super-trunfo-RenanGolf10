#include <stdio.h>

  int main(){
   
    printf("Desafio supertrunfo! \n");

    char Estado[50];
    char Codigo [1];
    char NomeDaCidade[100];
    int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;
    
    printf("*** Carta SuperTrunfo 1 *** \n");

    printf("Digite o Estado: \n");
    scanf("%s\n", &Estado);

    printf("Codigo: \n");
    scanf("%s\n", &Codigo);
    
    printf("Digite o Nome Da Cidade: \n");
    scanf("%s\n", &NomeDaCidade);

    printf("Populacao: \n");
    scanf("%d\n", &Populacao);

    printf("Area (em km²): ");
    scanf("%f\n", &Area);

    print("Pib: ");
    scanf("%f\n", &Pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d\n", &PontosTuristicos);

    printf("Estado: %c\n", 1, Estado);
    printf("Código: %s\n", 1, Codigo);
    printf("Nome da Cidade: %s\n", 1, NomeDaCidade);
    printf("População: %d\n", 1, Populacao);
    printf("Área: %.2f km²\n", 1, Area);
    printf("PIB: R$ %.2f bilhões\n", 1, Pib);
    printf("Pontos Turísticos: %d\n", 1, PontosTuristicos);

  }
