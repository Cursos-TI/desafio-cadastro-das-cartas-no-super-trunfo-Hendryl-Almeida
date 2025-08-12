#include <stdio.h>
        int main(){
    char Cidade1[30];
    char Codigocarta1[20];
    char Estado1[15];
    float Area1, Pib1;
    int pontos_turísticos1, Populaçao1;
    
    char Cidade2[30];
    char codigocarta2[20];
    char Estado2[15];
    float Area2, Pib2;
    int pontos_turísticos2, Populaçao2;

printf("Insira a cidade: \n");
   scanf("%s", Cidade1);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta1);

printf("Insira o Estado da cidade: \n");
scanf("%s", Estado1);

printf("Insira a População cidade: \n", Populaçao1);
scanf("%d", &Populaçao1);

printf("Insira a Área da cidade:  \n", Area1);
scanf("%f", &Area1);

printf("insira o Pib da cidade: \n", Pib1);
scanf("%f", &Pib1);

printf("Insira a quantidade de pontos turísticos: \n", pontos_turísticos1);
scanf("%d", &pontos_turísticos1);
   
scanf("carta 2\n");
    
    printf("Insira a cidade: \n");
   scanf("%s", Cidade2);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta2);

printf("Insira o Estado da cidade: \n");
scanf("%s", Estado2);

printf("Insira a População cidade: \n", Populaçao2);
scanf("%d", &Populaçao2);

printf("Insira a Área da cidade:  \n", Area2);
scanf("%f", &Area2);

printf("insira o Pib da cidade: \n", Pib2);
scanf("%f", &Pib2);

printf("Insira a quantidade de pontos turísticos: \n", pontos_turísticos2);
scanf("%d", &pontos_turísticos2);
   
printf("\n");

return 0;  
}
