#include <stdio.h>
        int main(){
    char Cidade1[30];
    char Codigocarta1[20];
    char Estado1[15];
    float Área1, Pib1;
    int pontos_turísticos1, População1;
    
    char Cidade2[30];
    char codigocarta2[20];
    char Estado2[15];
    float Área2, Pib2;
    int pontos_turísticos2, População2;

printf("Insira a cidade: \n");
   scanf("%s", Cidade1);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta1);

printf("Insira o Estado da cidade: \n");
scanf("%s", Estado1);

printf("Insira a População cidade: \n", População1);
scanf("%d", &População1);

printf("Insira a Área da cidade:  \n", Área1);
scanf("%f", &Área1);

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

printf("Insira a População cidade: \n", População2);
scanf("%d", &População2);

printf("Insira a Área da cidade:  \n", Área2);
scanf("%f", &Área2);

printf("insira o Pib da cidade: \n", Pib2);
scanf("%f", &Pib2);

printf("Insira a quantidade de pontos turísticos: \n", pontos_turísticos2);
scanf("%d", &pontos_turísticos2);
   
printf("\n");

return 0;  
}
