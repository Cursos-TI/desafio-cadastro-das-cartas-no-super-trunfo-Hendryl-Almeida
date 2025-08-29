#include <stdio.h>
        int main(){
    char Cidade1[30];
    char Codigocarta1[20];
    char Estado1[15];
    float Area1, Pib1;
    int pontos_turisticos1, Populacao1;
    float Pib_per_capita1;
    float Densidade_popucacional1;
    float Super_poder1;
    
    char Cidade2[30];
    char Codigocarta2[20];
    char Estado2[15];
    float Area2, Pib2;
    int pontos_turisticos2, Populacao2;
    float Pib_per_capita2;
    float Densidade_populacional2;
    float Super_poder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;


printf("Insira a cidade: \n");
   scanf("%s", Cidade1);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta1);

printf("Insira o Estado da cidade: \n");
scanf("%s", Estado1);

printf("Insira a População cidade: \n");
scanf("%d", &Populacao1);

printf("Insira a Área da cidade:  \n");
scanf("%f", &Area1);

printf("insira o Pib da cidade: \n");
scanf("%f", &Pib1);

printf("Insira a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos1);
Densidade_popucacional1 = Populacao1 / Area1;
Pib_per_capita1 = Pib1 / Populacao1;
Super_poder1 (float) = Area1 + Pib1 + Populacao1 + 1 / Densidade_popucacional1 + Pib_per_capita1;

   
printf("carta 2\n");
    
    printf("Insira a cidade: \n");
   scanf("%s", Cidade2);

printf("Insira o código da cidade: \n");
scanf("%s", Codigocarta2);


printf("Insira o Estado da cidade: \n");
scanf("%s", Estado2);

printf("Insira a População cidade: \n");
scanf("%d", &Populacao2);

printf("Insira a Área da cidade:  \n");
scanf("%f", &Area2);

printf("insira o Pib da cidade: \n");
scanf("%f", &Pib2);

printf("Insira a quantidade de pontos turísticos: \n");
scanf("%d", &pontos_turisticos2);
Densidade_populacional2 = Populacao2 / Area2;
Pib_per_capita2 = Pib2 / Populacao2;
Super_poder2 (float) = Area2 + Pib2 + Populacao2 + 1 / Densidade_popucacional2 + Pib_per_capita2;

   
printf("\n");
printf("\n--- Dados da Carta 1 ---\n"); 
printf("Cidade: %s\n", Cidade1); printf("Codigo: %s\n", Codigocarta1); 
printf("Estado: %s\n", Estado1); 
printf("Populacao: %d\n", Populacao1); printf("Area: %.2f\n", Area1); 
printf("PIB: %.2f\n", Pib1); printf("Pontos Turisticos: %d\n", pontos_turisticos1);
printf("Densidade populacional: %.f\n", Densidade_popucacional1);
printf("Pib per capita: %f\n", Pib_per_capita1);
printf("O Super poder é: %.2f\n", Super_poder1);

printf("\n");
printf("\n--- Dados da Carta 2 ---\n"); 
printf("Cidade: %s\n", Cidade2); printf("Codigo: %s\n", Codigocarta2); 
printf("Estado: %s\n", Estado2); 
printf("Populacao: %d\n", Populacao2); printf("Area: %.2f\n", Area2); 
printf("PIB: %.2f\n", Pib2); printf("Pontos Turisticos: %d\n", pontos_turisticos2);
printf("Densidade populacional: %.f\n", Densidade_popucacional2);
printf("Pib per capita: %.2f\n", Pib_per_capita2);
printf("O super poder é: %.2f\n", Super_poder2);

resultado1 = Area1 > Area2;
resultado2 = Pib1 > Pib2;
resultado3 = Pib_per_capita1 > Pib_per_capita2;
resultado4 = Populacao1 > Populacao2;
resultado5 = pontos_turisticos1 > pontos_turisticos2;
resultado6 = Densidade_popucacional1 < Densidade_populacional2;
resultado7 = Super_poder1 > Super_poder2; 



// printf("")
 
}
