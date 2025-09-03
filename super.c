#include <stdio.h>

  int main(){
   
    printf("Desafio supertrunfo! \n");
    
    int numero1;
    char Codigo;
    char Estado[50];
    char NomeDaCidade[100];
    int Populacao;
    float Area;
    float Pib;
    int PontosTuristicos;
    
    printf("Digite a carta :\n");
    scanf("%d", numero1)

    printf("Digite o Codigo :\n");
    scanf("%s", &Codigo);

    printf("Digite o Estado:\n");
    scanf("%s", &Estado);
    
    printf("Digite o Nome Da Cidade:\n");
    scanf("%s", &NomeDaCidade);

    printf("Digite a Populacao:\n");
    scanf("%d", &Populacao);

    printf("Digite a Area (em km²):\n");
    scanf("%f", &Area);

    printf("Digite o Pib:\n");
    scanf("%f", &Pib);

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &PontosTuristicos);
    
    printf("Numero1: %s\n", 1, numero1);
    printf("Código: %s\n", 1, Codigo);
    printf("Estado: %s\n", 1, Estado);
    printf("Nome da Cidade: %s\n", 1, NomeDaCidade);
    printf("População: %d\n", 1, Populacao );
    printf("Área: %.2f\n km²", 1, Area);
    printf("PIB: R$ %.2f\n bilhões", 1, Pib);
    printf("Pontos Turísticos: %d\n", 1, PontosTuristicos);

    return 0;

  }
