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
    
    printf("Digite o código do estado: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    

    printf("Digite a área: ");
    scanf("%f", &area);
    

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    

    printf("Quantos pontos turísticos possui: ");
    scanf("%d", &pontos);
    

    printf("\nDados da carta inserida:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.f km²\n", area);
    printf("PIB: %.f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);

    printf("\n");
    printf("Digite os dados da segunda carta.\n");

    printf("\n");
    printf("Digite a letra do estado: ");
    scanf(" %c", &estado);
    

    printf("Digite o código do estado: ");
    scanf("%s", codigo);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
   

    printf("Digite a área: ");
    scanf("%f", &area);
    

    printf("Digite o PIB: ");
    scanf("%f", &pib);
    

    printf("Quantos pontos turísticos possui: ");
    scanf("%d", &pontos);
   

    printf("\nDados Inseridos\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.f km²\n", area);
    printf("PIB: %.f\n", pib);
    printf("Número de pontos turísticos: %d\n", pontos);

    return 0;
}

