#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

  int escolhaJogador, escolhaMaquina; //Variáveis para escolha de jogador e máquina
  int repetir = 1;

  srand(time(0)); //Números aleatórios em tempo real

  printf("Seja bem-vindo ao jogo de: [JokenPô] \n");//Comando para introdução ao jogo!

  do{
  printf("\nEscolha um elemento: \n"); //Menu para seleção dos elementos do jogador!
  printf("1 - Pedra \n2 - Papel \n3 - Tesoura \n");  
  scanf("%d", &escolhaJogador);

  if(escolhaJogador < 1 || escolhaJogador > 3) //implementada para cancelar a auto seleção da máquina após opção inválida!
  {
    printf("Xx - - Comando inválido!! - - xX\n");
  return 0; //Para a execução se a lógica for verdadeira
  }

  switch (escolhaJogador)
  {
  case 1:
    printf("\nJogador:  Pedra  vs  ");
    break;
  case 2:
    printf("\nJogador:  Papel  vs  ");
    break;
  case 3:
    printf("\nJogador:  Tesoura  vs  ");
    break;
  
  default:
    printf("Este comando não é válido!!\n\n");
    break;
  }

  escolhaMaquina = rand() % 3 + 1;//Escolha até 3

  switch (escolhaMaquina)
  {
  case 1:
    printf("Pedra  :Máquina\n");
    break;
  case 2:
    printf("Papel  :Máquina\n");
    break;
  case 3:
    printf("Tesoura  :Máquina\n");
    break;   
  }

  if(escolhaJogador == escolhaMaquina)
  {
    printf("\n>>>>>> [ EMPATE! ] <<<<<<\n");
  }
  else if((escolhaJogador == 1 && escolhaMaquina == 3) ||
          (escolhaJogador == 2 && escolhaMaquina == 1) ||
          (escolhaJogador == 3 && escolhaMaquina == 2))
     {
      printf("\n>>>>>> [ Jogador Vence! ] <<<<<<\n\n");
     } else{
      printf("\n>>>>>> [ Máquina Vence! ] <<<<<<\n\n");
     }
  
  printf("Gostaria de Jogar novamente? \n");
  printf("1 - Sim \n0 - Não\n");
  scanf("%d", &repetir);
  
    } while(repetir != 0);
return 0;
}
