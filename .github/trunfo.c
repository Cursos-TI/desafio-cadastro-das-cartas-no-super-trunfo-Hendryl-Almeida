#include <stdio.h>
        int main(){
    char Cidade1[30];
    char Codigocarta1[20];
    char Estado1[15];
    float Area1, Pib1;
    int pontos_turisticos1, Populaçao1;
    
    char Cidade2[30];
    char Codigocarta2[20];
    char Estado2[15];
    float Area2, Pib2;
    int pontos_turisticos2, Populaçao2;

printf("Insira a cidade: \n");
   scanf("%29[^\n]", Cidade1);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta1);

printf("Insira o Estado da cidade: \n");
scanf("%s", Estado1);

printf("Insira a População cidade: \n");
scanf("%d", &Populaçao1);

printf("Insira a Área da cidade:  \n");
scanf("%f", &Area1);

printf("insira o Pib da cidade: \n");
scanf("%f", &Pib1);

printf("Insira a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos1);
   
printf("carta 2\n");
    
    printf("Insira a cidade: \n");
   scanf("%29[^\n]", Cidade2);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta2);


printf("Insira o Estado da cidade: \n");
scanf("%s", Estado2);

printf("Insira a População cidade: \n");
scanf("%d", &Populaçao2);

printf("Insira a Área da cidade:  \n");
scanf("%f", &Area2);

printf("insira o Pib da cidade: \n");
scanf("%f", &Pib2);

printf("Insira a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);
   
printf("\n");
printf("\n--- Dados da Carta 1 ---\n"); printf("Cidade: %s\n", Cidade1); printf("Codigo: %s\n", Codigocarta1); printf("Estado: %s\n", Estado1); 
printf("Populacao: %d\n", Populaçao1); printf("Area: %.2f km²\n", Area1); 
printf("PIB: %.2f\n", Pib1); printf("Pontos Turisticos: %d\n", pontos_turisticos1); 


return 0;  
}
