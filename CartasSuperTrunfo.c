#include <stdio.h>

int main (){
    // Declaração das variáveis para armazenar os dados da primeira carta
    char cidade[30];      
    char estado;          
    char codigo[30];
    int populacao;
    int pontoTuristico;
    float area;
    float pib;

    // Entrada dos dados da primeira carta
    printf("nome da cidade: "); 
    scanf(" %[^\n]", cidade);   

    printf("estado (A a H): "); 
    scanf(" %c", &estado);      

    printf("codigo da carta (A01, A02, A03): ");
    scanf("%s", codigo);        

    printf("população: ");
    scanf("%d", &populacao);

    printf("quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico);

    printf("área (km²): ");
    scanf("%f", &area);         

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib);

    // Impressão dos dados da primeira carta
    printf("\n---------------------------------\n");

    printf("\n - CARTA 1 - \n"); 
    printf("Cidade: %s\n", cidade);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontoTuristico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);

    printf("\n---------------------------------\n");

    // Declaração das variáveis para armazenar os dados da segunda carta
    char cidade2[30];
    char estado2;              
    char codigo2[30];
    int populacao2;
    int pontoTuristico2;
    float area2;
    float pib2;

    // Entrada dos dados da segunda carta
    printf("\n");

    printf("nome da cidade: ");
    scanf(" %[^\n]", cidade2);  

    printf("estado (A a H): "); 
    scanf(" %c", &estado2);     

    printf("codigo da carta (A01, A02, A03): ");
    scanf("%s", codigo2);

    printf("população: ");
    scanf("%d", &populacao2);

    printf("quantidade de pontos turísticos: ");
    scanf("%d", &pontoTuristico2);

    printf("área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    // Impressão dos dados da segunda carta
    printf("\n---------------------------------\n");

    printf("\n - CARTA 2 - \n"); 
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);

    printf("\n---------------------------------\n");

    // Comparação entre as duas cartas cadastradas
    printf("\n- AGORA COMPARE -\n");

    printf("\n - CARTA 1 - \n"); 
    printf("Cidade: %s\n", cidade);
    printf("Estado: %c\n", estado);
    printf("Código da carta: %s\n", codigo);
    printf("População: %d\n", populacao);
    printf("Pontos turísticos: %d\n", pontoTuristico);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);

    printf("\n");

    printf("\n - CARTA 2 - \n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Pontos turísticos: %d\n", pontoTuristico2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
}
