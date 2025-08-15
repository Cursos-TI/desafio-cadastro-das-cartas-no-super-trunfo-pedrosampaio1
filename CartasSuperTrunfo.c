#include <stdio.h>
#include <string.h>

int main()
{
  // Setando os atributos das cartas do jogo de trunfo

  char estado1[20], codigoDaCarta1[20], nomeDaCidade1[20];
  int pontosTuristicosCarta1;
  unsigned long int populacaoCarta1;
  float areaCarta1, pibCarta1;

  char estado2[20], codigoDaCarta2[20], nomeDaCidade2[20];
  int pontosTuristicosCarta2;
  unsigned long int populacaoCarta2;
  float areaCarta2, pibCarta2;

  printf("Bem vindo(a) ao Super Trunfo! \n");
  printf("Vamos inciar o preenchimento da Carta 1. \n");

  // Dados Carta 1
  //  Estado
  printf("Qual será o Estado? \n");
  fgets(estado1, sizeof(estado1), stdin);
  estado1[strcspn(estado1, "\n")] = 0;

  // Código da carta
  printf("Insira o código para identificar a Carta 1: \n");
  fgets(codigoDaCarta1, sizeof(codigoDaCarta1), stdin);
  codigoDaCarta1[strcspn(codigoDaCarta1, "\n")] = 0;

  // Nome da cidade
  printf("Digite o nome da cidade: \n");
  fgets(nomeDaCidade1, sizeof(nomeDaCidade1), stdin);
  nomeDaCidade1[strcspn(nomeDaCidade1, "\n")] = 0;

  // População
  printf("Qual a população? \n");
  scanf("%lu", &populacaoCarta1);
  while (getchar() != '\n');

  // Área
  printf("Qual a área da cidade? \n");
  scanf("%f", &areaCarta1);
  while (getchar() != '\n');

  // PIB
  printf("Qual o PIB da cidade? \n");
  scanf("%f", &pibCarta1);
  while (getchar() != '\n');

  // Pontos turísticos
  printf("Quantos pontos turísticos tem a cidade? \n");
  scanf("%d", &pontosTuristicosCarta1);
  while (getchar() != '\n');

  printf("Dados da Carta 1 foram armazenados! \n");

  /***************************************************/

  // Dados Carta 2
  printf("Vamos inciar o preenchimento da Carta 2. \n");

  //  Estado
  printf("Qual será o Estado? \n");
  fgets(estado2, sizeof(estado2), stdin);
  estado2[strcspn(estado2, "\n")] = 0;

  // Código da carta
  printf("Insira o código para identificar a Carta 2: \n");
  fgets(codigoDaCarta2, sizeof(codigoDaCarta2), stdin);
  codigoDaCarta2[strcspn(codigoDaCarta2, "\n")] = 0;

  // Nome da cidade
  printf("Digite o nome da cidade: \n");
  fgets(nomeDaCidade2, sizeof(nomeDaCidade2), stdin);
  nomeDaCidade2[strcspn(nomeDaCidade2, "\n")] = 0;

  // População
  printf("Qual a população? \n");
  scanf("%lu", &populacaoCarta2);
  while (getchar() != '\n');

  // Área
  printf("Qual a área da cidade? \n");
  scanf("%f", &areaCarta2);
  while (getchar() != '\n');

  // PIB
  printf("Qual o PIB da cidade? \n");
  scanf("%f", &pibCarta2);
  while (getchar() != '\n');

  // Pontos turísticos
  printf("Quantos pontos turísticos tem a cidade? \n");
  scanf("%d", &pontosTuristicosCarta2);
  while (getchar() != '\n');

  printf("Dados da Carta 2 foram armazenados!");

  // Exibindo os dados dados da carta 1
  printf("Vamos exibir os dados das cartas.");

  printf("\n--- Dados da Carta 1 ---\n");
  printf("Estado: %s\n", estado1);
  printf("Código: %s\n", codigoDaCarta1);
  printf("Cidade: %s\n", nomeDaCidade1);
  printf("População: %lu\n", populacaoCarta1);
  printf("Área: %.2f km²\n", areaCarta1);
  printf("PIB: R$ %.2f\n", pibCarta1);
  printf("Pontos turísticos: %d\n", pontosTuristicosCarta1);

  // Printando os dados da carta 2
  printf("\n--- Dados da Carta 2 ---\n");
  printf("Estado: %s\n", estado2);
  printf("Código: %s\n", codigoDaCarta2);
  printf("Cidade: %s\n", nomeDaCidade2);
  printf("População: %lu\n", populacaoCarta2);
  printf("Área: %.2f km²\n", areaCarta2);
  printf("PIB: R$ %.2f\n", pibCarta2);
  printf("Pontos turísticos: %d\n", pontosTuristicosCarta2);

  return 0;
}
