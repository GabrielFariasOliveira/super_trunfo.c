#include <stdio.h>

int main (){
    
  
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos;

    printf("Digite a letra do estado: ");
    scanf(" %c", &estado);
    
    printf("Digite o c�digo do estado: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    

    printf("Digite a popula��o da cidade: ");
    scanf("%d", &populacao);
    

    printf("Digite a �rea: ");
    scanf("%f", &area);
    

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    

    printf("Quantos pontos tur�sticos possui: ");
    scanf("%d", &pontos);
    

    printf("\nDados da carta inserida:\n");
    printf("Estado: %c\n", estado);
    printf("C�digo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Popula��o: %d\n", populacao);
    printf("�rea: %.f km�\n", area);
    printf("PIB: %.f\n", pib);
    printf("N�mero de pontos tur�sticos: %d\n", pontos);

    printf("\n");
    printf("Digite os dados da segunda carta.\n");

    printf("\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado);
    

    printf("Digite o c�digo do estado: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    

    printf("Digite a popula��o da cidade: ");
    scanf("%d", &populacao);
   

    printf("Digite a �rea: ");
    scanf("%f", &area);
    

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    

    printf("Quantos pontos tur�sticos possui: ");
    scanf("%d", &pontos);
   

    printf("\nDados Inseridos\n");
    printf("Estado: %c\n", estado);
    printf("C�digo: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("Popula��o: %d\n", populacao);
    printf("�rea: %.f km�\n", area);
    printf("PIB: %.f\n", pib);
    printf("N�mero de pontos tur�sticos: %d\n", pontos);

    return 0;
}

