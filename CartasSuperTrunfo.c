#include <stdio.h>

int main() {
    // VARIÁVEIS

    // Váriaveis_Carta_1
    int Carta1;
    char Estado1;
    char Codigo1[10];
    char Cidade1[50];
    int Populacao1;
    float Area1;
    float PIB1;
    int PontosTuristicos1;

    //  Váriaveis_Carta_2
    int Carta2;
    char Estado2;
    char Codigo2[10];
    char Cidade2[50];
    int Populacao2;
    float Area2;
    float PIB2;
    int PontosTuristicos2;

    //ENTRADA DE DADOS 
    // CARTA 1

    printf("Cadastro da Carta 1\n");
    printf("CARTA: \n");
    scanf("%d", &Carta1); 

    printf("Estado (Letra A-H): \n");
    scanf(" %c", &Estado1); 

    printf("Código: \n");
    scanf("%s", Codigo1); 

    printf("Cidade: \n");
    scanf("%s", Cidade1);

    printf("População: \n");
    scanf("%d", &Populacao1);

    printf("Área: \n");
    scanf("%f", &Area1); 

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    
    // CARTA 2
   
    printf("Cadastro da Carta 2\n");
    printf("CARTA: \n");
    scanf("%d", &Carta2); 

    printf("Estado (Letra A-H): \n");
    scanf(" %c", &Estado2);

    printf("Código: \n");
    scanf("%s", Codigo2); 

    printf("Cidade: \n");
    scanf("%s", Cidade2); 

    printf("População: \n");
    scanf("%d", &Populacao2); 

    printf("Área: \n");
    scanf("%f", &Area2); 

    printf("PIB: \n");
    scanf("%f", &PIB2); 

    printf("Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos2); 

    //IMPRESSÃO DE DADOS
    // CARTA 1
  
    printf("DADOS CADASTRADOS\n");

    printf("--- CARTA %d ---\n", Carta1);
    printf("Estado: %c\n", Estado1); 
    printf("Codigo: %s\n", Codigo1);
    printf("Nome da Cidade: %s\n", Cidade1);
    printf("Populacao: %d\n", Populacao1);
    printf("Area: %.2f km^2\n", Area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos1);
    
    //CARTA 2

    printf("\n--- CARTA %d ---\n", Carta2);
    printf("Estado: %c\n", Estado2); 
    printf("Codigo: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Cidade2);
    printf("Populacao: %d\n", Populacao2);
    printf("Area: %.2f km^2\n", Area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Numero de Pontos Turisticos: %d\n", PontosTuristicos2);
    
    return 0;
}