#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  // Q8
  char nome[30];
  int ano;

  time_t t;
  struct tm *info;
  time(&t);
  info = localtime(&t);

  printf("Digite seu nome: ");
  scanf("%s", nome);

  printf("Digite o ano em que nasceu: ");
  scanf("%i", &ano);

  int idade = info->tm_year + 1900 - ano;

  printf("Olá %s, você nasceu em %i?\nE voce tem %d anos", nome, ano, idade);

  return 0;
}