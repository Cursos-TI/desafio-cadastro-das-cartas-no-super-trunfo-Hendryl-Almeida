#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    int escolhajogador1, escolhabot;
 srand(time(0));
 printf("***Iniciando jogo***\n");
 printf("Escolha uma das opções a seguir\n");
printf("1 para Pedra\n");
printf("2 para Tesoura\n");
printf("3 para Papel\n");
printf("Escolha: \n");
scanf("%d", &escolhajogador1);

escolhabot = rand() % 3 + 1;

switch (escolhajogador1)
{
case 1:
printf("Jogador: Pedra -");
break;
case 2:
printf("Jogador: Tesoura -");
break;
case 3:
printf("Jogador: Papel -");

break;
default:
printf("Você tem que escolher pedra, papel ou tesoura. tente novamente\n");
    break;
}
switch (escolhabot)
{
case 1:
printf("Bot: Pedra\n");
break;
case 2:
printf("Bot: Tesoura\n");
break;
case 3:
printf("Bot: Papel\n");
break;
}

if (escolhabot == escolhajogador1){
printf("vocês empataram\n");
}
else if ((escolhajogador1 == 1) && (escolhabot == 2)
|| (escolhajogador1 == 2) && (escolhabot == 3) ||
(escolhajogador1 == 3) && (escolhabot == 1))
{printf("---Você venceu o computador!!!---\n");
} else { printf("Você perdeu haha ;)\n");}

return 0;
}