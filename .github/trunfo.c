#include <stdio.h>
        int main(){
    char Cidade, Codigocarta, Estado;
    float População, Área, Pib;
    int pontos_turísticos;

printf("Insira a cidade: \n", Cidade);
   scanf("%s", &Cidade);

printf("Insira o código da cidade: \n", Codigocarta);
scanf("%s", &Codigocarta);

printf("Insira o Estado da cidade: \n", Estado);
scanf("%s", &Estado);

printf("Insira a População cidade: \n", População);
scanf("%f", &População);

printf("Insira a Área da cidade:  \n", Área);
scanf("%f Km quadrados", &Área);

printf("insira o Pib da cidade: \n", Pib);
scanf("%f", &Pib);

printf("Insira a quantidade de pontos turísticos: \n", pontos_turísticos);
scanf("%d", &pontos_turísticos);
   return 0;  
}
