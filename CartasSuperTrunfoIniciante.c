#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
printf("Bem vindo ao Super Trunfo\n");

//Variáveis da primeira cidade

char estado_1;
char codigo_1[30];
char nomeCidade_1[30];
int populacao_1;
float area_1;
float PIB_1;
int nPontosTur_1;

//Variáveis da segunda cidade
char estado_2;
char codigo_2[30];
char nomeCidade_2[30];
int populacao_2;
float area_2;
float PIB_2;
int nPontosTur_2;

//Dados da primeira cidade

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_1);

printf("Código da carta: ");
scanf("%s", codigo_1);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_1);

printf("População da cidade: ");
scanf("%d", &populacao_1);

printf("Área da cidade em km²: ");
scanf("%f", &area_1);

printf("PIB da cidade: ");
scanf("%f", &PIB_1);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_1);


//Dados da segunda cidade

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_2);

printf("Código da carta: ");
scanf("%s", codigo_2);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_2);

printf("População da cidade: ");
scanf("%d", &populacao_2);

printf("Área da cidade em km²: ");
scanf("%f", &area_2);

printf("PIB da cidade: ");
scanf("%f", &PIB_2);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_2);

//Impressão dos dados

printf("\n----Carta 1----\n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_1);
printf("Nome: %s\n", nomeCidade_1);
printf("População: %d\n", populacao_1);
printf("Área: %.2f km²\n", area_1);
printf("PIB: %.2f bilhões\n", PIB_1);
printf("Pontos turísticos: %d\n", nPontosTur_1);

printf("\n----Carta 2----\n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_2);
printf("Nome: %s\n", nomeCidade_2);
printf("População: %d\n", populacao_2);
printf("Área: %.2f km²\n", area_2);
printf("PIB: %.2f bilhões\n", PIB_2);
printf("Pontos turísticos: %d\n", nPontosTur_2);

return 0;
}
