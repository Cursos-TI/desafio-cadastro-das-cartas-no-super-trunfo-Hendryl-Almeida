#include <stdio.h>
        int main(){
    char[30] Cidade1;
    char[10] codigocarta1;
    char[20] Estado1;
    float População1, Área1, Pib1;
    int pontos_turísticos1;

printf("Insira a cidade: \n", Cidade1);
   scanf("%s", Cidade1);

printf("Insira o código da cidade: \n",Codigocarta1);
scanf("%s", Codigocarta1);

printf("Insira o Estado da cidade: \n", Estado1);
scanf("%s", Estado1);

printf("Insira a População cidade: \n", População1);
scanf("%f", &População1);

printf("Insira a Área da cidade:  \n", Área1);
scanf("%f", &Área1);

printf("insira o Pib da cidade: \n", Pib1);
scanf("%f", &Pib1);

printf("Insira a quantidade de pontos turísticos: \n", pontos_turísticos1);
scanf("%d", &pontos_turísticos1);
   return 0;  
}
