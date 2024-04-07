#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/*
Projeto Jogo das Palavras (Termo) 
Primeiro semestre de Algoritmos e Programação 2
Universidade Presbiteriana Mackenzie

Ciência da Computação
02N11

PEDRO MONIZ CANTO
RA 10426546
GABRIEL ERICK MENDES 
RA 10420391 
*/

#define tam_lista 1521

char *escolher_palavra(char *palavras[], int num_palavras) {

  // gerador de números aleatórios
  srand(time(NULL));   
  
  // índice aleatório
  int indice = rand() % num_palavras; 

  // Retorna a palavra no índice aleatório
  return palavras[indice];            
}

void registrar_pontuacao(char *palavra, int tentativas, double tempo) {

  char nome[50];
  printf("\nParabéns, você acertou a palavra! \nA palavra correta era '%s'\n\nPor favor, digite seu nome: ", palavra);

  // Lê o nome do jogador vencedor
  scanf("%49s", nome); 

  while(strlen(nome)>49){
    printf("Digite um nome com até 49 caracteres: ");
    scanf("%49s", nome);
    
  }

  //Abre o arquivo de scores
  FILE *file = fopen("scores.txt", "a");

  // Grava a pontuação no arquivo
  fprintf(file, "%s, %s, %d, %f\n", nome, palavra, tentativas, tempo); 

  fclose(file);
}

void adivinhar_palavra(char *palavra) {
  
  char tentativa[6];
  int acertou = 0;
  int tentativas = 0;
  clock_t inicio, fim;
  double tempo_gasto;

  //Iniciar a contagem do tempo para registro no score
  inicio = clock();

  //Inicia o sistema de tentativas do jogo
  for (tentativas = 0; tentativas < 6; tentativas++) {
    printf("Tente adivinhar a palavra: ");
    scanf("%5s", tentativa);

    //Estrutura para conferir se a quantidade de caracteres está correta
    while(strlen(tentativa) != 5){
      printf("\nInsira uma palavra de 5 caracteres: ");
      scanf("%5s", tentativa);
    }

    //Caso o jogador acerte a palavra
    if (strcmp(palavra, tentativa) == 0) {
      acertou = 1;
      break;
    }

    //Criar o laytou do jogo no terminal
    printf("+-----------+\n");
    printf("| ");

    //Escreve os caracteres no terminal
    for (int i = 0; i < 5; i++) {
      printf("%c ", tentativa[i]);
    }

    printf("|\n| ");
    
    // Estrutura para verificar as letras da tentativa
    for (int i = 0; i < 5; i++) {
      
      if (palavra[i] == tentativa[i]) {
        printf("^ "); // Letra correta
        
      } else if (strchr(palavra, tentativa[i])) {
        printf("! "); // Letra correta, lugar errado
        
      } else {
        printf("x "); // Letra errada
      }
    }
    printf("|\n+-----------+\n");
  }

  //Finaliza a contagem do tempo para registro do score
  fim = clock();
  
  //Calcula o tempo gasto na partida
  tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

  //Se o jogador ganhou
  if (acertou) {
    registrar_pontuacao(palavra, tentativas + 1, tempo_gasto);
  } 
  //Se o jogador perdeu
  else {
    printf("Infelizmente, você não conseguiu adivinhar a palavra. A palavra correta era '%s'.\n",palavra);
  }
}

int ler_dict(char *palavras[]) {

   // Abre o arquivo de dicionário em modo leitura
  FILE *file = fopen("sem_acentos.txt", "r");


  int i = 0;
  while (i < tam_lista) {

    // Aloca memória para cada palavra
    palavras[i] = malloc(6 * sizeof(char)); 

    // Libera a memória se a leitura falhar
    if (fscanf(file, "%5s", palavras[i]) != 1) {
      free(palavras[i]); 
      break;
    }
    i++;
  }

  fclose(file);

  return i; // Retorna o número de palavras lidas
}

int main(void) {
  
  char *palavras[tam_lista];
  int num_palavras = ler_dict(palavras);

  // Escolhe uma palavra aleatória
  char *palavra_aleatoria = escolher_palavra(palavras, num_palavras);

  // Pede ao usuário para adivinhar a palavra
  adivinhar_palavra(palavra_aleatoria);

  // liberar a memória alocada
  for (int j = 0; j < num_palavras; j++) {
    free(palavras[j]);
  }
  printf("\nJogo desenvolvido por Pedro Canto e Gabriel Mendes\n");
  return 0;
}
