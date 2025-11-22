int main() {
printf("Bem vindo ao Super Trunfo Aventureiro\n");

//Variáveis da primeira cidade
char estado_1;
char codigo_1[30];
char nomeCidade_1[30];
unsigned long int populacao_1;
float area_1;
float PIB_1;
int nPontosTur_1;
float DensidadePopulacional_1;
float PIBperCapita_1;
float SuperPoder_1;

//Variáveis da segunda cidade
char estado_2;
char codigo_2[30];
char nomeCidade_2[30];
unsigned long int populacao_2;
float area_2;
float PIB_2;
int nPontosTur_2;
float DensidadePopulacional_2;
float PIBperCapita_2;
float SuperPoder_2;

//Primeira Cidade 
printf("Dados da primeira cidade \n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_1);

printf("Código da carta: ");
scanf("%s", codigo_1);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_1);

printf("População da cidade: ");
scanf("%lu", &populacao_1);

printf("Área da cidade em km²: ");
scanf("%f", &area_1);

printf("PIB da cidade: ");
scanf("%f", &PIB_1);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_1);

//Calculo da Densidade, PIB per Capita e Super Poder da cidade 1.
DensidadePopulacional_1 = (float)(populacao_1 / area_1);
printf("A Densidade Populacional da cidade em km² é: %.2f \n", DensidadePopulacional_1);

PIBperCapita_1 = (float)(populacao_1 / area_1);
printf("O PIB per Capita da cidade em bilhões é: %.2f \n", PIBperCapita_1);

SuperPoder_1 = (float)populacao_1 + area_1 + PIB_1 + nPontosTur_1 + PIBperCapita_1 / (1/DensidadePopulacional_1);
printf("Super Poder: %.2f\n");

//Segunda cidade
printf("Dados da segunda cidade \n");

printf("Uma letra de 'A' a 'H': ");
scanf(" %c", &estado_2);

printf("Código da carta: ");
scanf("%s", codigo_2);

printf("Nome da cidade: ");
scanf("%s", nomeCidade_2);

printf("População da cidade: ");
scanf("%lu", &populacao_2);

printf("Área da cidade em km²: ");
scanf("%f", &area_2);

printf("PIB da cidade: ");
scanf("%f", &PIB_2);

printf("Número de pontos turísticos da cidade: ");
scanf("%d", &nPontosTur_2);

//Calculo da Densidade, PIB per Capita e Super Poder da cidade 2.
DensidadePopulacional_2 = (float)(populacao_2 / area_2);
printf("A Densidade Populacional da cidade em km² é: %.2f \n", DensidadePopulacional_2);

PIBperCapita_2 = (float)(populacao_2 / area_2);
printf("O PIB per Capita da cidade em bilhões é: %.2f \n", PIBperCapita_2);

SuperPoder_2 = (float)populacao_2 + area_2 + PIB_2 + nPontosTur_2 + PIBperCapita_2 / (1/DensidadePopulacional_2);
printf("Super Poder: %.2f\n");


//Impressão dos dados
printf("\n----Carta 1----\n");
printf("Estado: %c\n", estado_1);
printf("Código: %s\n", codigo_1);
printf("Nome: %s\n", nomeCidade_1);
printf("População: %lu\n", populacao_1);
printf("Área: %.2f km²\n", area_1);
printf("PIB: %.2f bilhões\n", PIB_1);
printf("Pontos turísticos: %d\n", nPontosTur_1);
printf("Densidade Populacional: %.2f km²\n", DensidadePopulacional_1);
printf("PIB per Capita: %.2f bilhões\n", PIBperCapita_1);
printf("Super Poder: %.2f\n", SuperPoder_1);

printf("\n----Carta 2----\n");
printf("Estado: %c\n", estado_2);
printf("Código: %s\n", codigo_2);
printf("Nome: %s\n", nomeCidade_2);
printf("População: %lu\n", populacao_2);
printf("Área: %.2f km²\n", area_2);
printf("PIB: %.2f bilhões\n", PIB_2);
printf("Pontos turísticos: %d\n", nPontosTur_2);
printf("Densidade Populacional: %.2f km²\n", DensidadePopulacional_2);
printf("PIB per Capita: %.2f bilhões\n", PIBperCapita_2);
printf("Super Poder: %.2f\n", SuperPoder_2);

//Comparações
printf("\n----Comparações----\n");

printf("População: Carta %d venceu (%d)\n",
populacao_1 > populacao_2 ? 1 : 2,
populacao_1 > populacao_2);

printf("Área: Carta %d venceu (%d)\n",
area_1 > area_2 ? 1 : 2,
area_1 > area_2);

printf("PIB: Carta %d venceu (%d)\n", 
PIB_1 > PIB_2 ? 1 : 2, 
PIB_1 > PIB_2);

printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
nPontosTur_1 > nPontosTur_2 ? 1 : 2, 
nPontosTur_1 > nPontosTur_2);

printf("Densidade Populacional: Carta %d venceu (%d)\n", 
DensidadePopulacional_1 < DensidadePopulacional_2 ? 1 : 2, 
DensidadePopulacional_1 < DensidadePopulacional_2);

printf("PIB per Capita: Carta %d venceu (%d)\n", 
PIBperCapita_1 > PIBperCapita_2 ? 1 : 2, 
PIBperCapita_1 > PIBperCapita_2);

printf("Super Poder: Carta %d venceu (%d)\n", 
SuperPoder_1 > SuperPoder_2 ? 1 : 2, 
SuperPoder_1 > SuperPoder_2);

return 0;
}