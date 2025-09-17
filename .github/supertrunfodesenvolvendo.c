#include <stdio.h>
        int main(){
    char Cidade1[30];
    char Codigocarta1[20];
    char Estado1[15];
    float Area1, Pib1;
    int pontos_turisticos1, Populacao1, escolhaplayer;
    float Pib_per_capita1;
    float Densidade_populacional1;
    float Super_poder1;
    
    char Cidade2[30];
    char Codigocarta2[20];
    char Estado2[15];
    float Area2, Pib2;
    int pontos_turisticos2, Populacao2;
    float Pib_per_capita2;
    float Densidade_populacional2;
    float Super_poder2;

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
Densidade_populacional1 = Populacao1 / Area1;
Pib_per_capita1 = Pib1 / Populacao1;
Super_poder1 = Area1 + Pib1 + Populacao1 + (1.0 / Densidade_populacional1) + Pib_per_capita1;

   
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
Super_poder2 = Area2 + Pib2 + Populacao2 + (1.0 / Densidade_populacional2) + Pib_per_capita2;

   
printf("\n");
printf("\n--- Dados da Carta 1 ---\n"); 
printf("Cidade: %s\n", Cidade1); printf("Codigo: %s\n", Codigocarta1); 
printf("Estado: %s\n", Estado1); 
printf("Populacao: %d\n", Populacao1); printf("Area: %.2f\n", Area1); 
printf("PIB: %.2f\n", Pib1); printf("Pontos Turisticos: %d\n", pontos_turisticos1);
printf("Densidade populacional: %.f\n", Densidade_populacional1);
printf("Pib per capita: %f\n", Pib_per_capita1);
printf("O Super poder é: %.2f\n", Super_poder1);

printf("\n");
printf("\n--- Dados da Carta 2 ---\n"); 
printf("Cidade: %s\n", Cidade2); printf("Codigo: %s\n", Codigocarta2); 
printf("Estado: %s\n", Estado2); 
printf("Populacao: %d\n", Populacao2); printf("Area: %.2f\n", Area2); 
printf("PIB: %.2f\n", Pib2); printf("Pontos Turisticos: %d\n", pontos_turisticos2);
printf("Densidade populacional: %.f\n", Densidade_populacional2);
printf("Pib per capita: %.2f\n", Pib_per_capita2);
printf("O super poder é: %.2f\n", Super_poder2);

printf("\n");   
printf("Escolha uma das opções \n");
printf("1 para Área \n");
printf("2 para Pib \n");
printf("3 para pontos turísticos \n");
printf("4 para População \n");
printf("5 para Pib per capita \n");
printf("6 para Densidade populacional \n");
printf("7 para Super poder \n");
printf("**Escolha o atributo que você quer comparar: \n");
scanf("%d", &escolhaplayer);

switch (escolhaplayer)
{
case 1: if (Area1 > Area2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Area1 < Area2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
    case 2: if (Pib1 > Pib2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Pib1 < Pib2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
    case 3: if (pontos_turisticos1 > pontos_turisticos2)
{
    printf("A carta 1 venceu!!! \n");
} else if (pontos_turisticos1 < pontos_turisticos2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
case 4: if (Populacao1 > Populacao2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Populacao1 < Populacao2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
    case 5: if (Pib_per_capita1 > Pib_per_capita2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Pib_per_capita1 < Pib_per_capita2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
    case 6: if (Densidade_populacional1 < Densidade_populacional2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Densidade_populacional1 > Densidade_populacional2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
    case 7: if (Super_poder1 > Super_poder2)
{
    printf("A carta 1 venceu!!! \n");
} else if (Super_poder1 < Super_poder2) {
    printf("A carta 2 venceu!!!! \n");
} else {
    printf("Houve um empate! \n");
}

    break;
default:
printf("Você não selecionou nenhuma característica das cartas. \n");
break;
}


return 0;
  
}
