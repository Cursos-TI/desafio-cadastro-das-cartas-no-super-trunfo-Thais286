#include <stdio.h>
int main(){
  printf("Desafiosuper-triunfo!\n");

char estado[2];
//sigla do estado 

char codigo[9];
//codigo da carta

char nome[50];
//nome da cidade

char populacao [50];
//populacao da cidade

float area [50];
//area da cidade

float pib [50];
//pib da cidade

int pontos [50];
//pontos turisticos da cidade

printf("qual o estado da carta?\n");
scanf("%2s",estado);
printf("qual o codigo da carta?\n");
scanf("%9s",codigo);
printf("qual o nome da cidade?\n");
scanf("%s",nome);
printf("qual a populacao da cidade?\n");
scanf("%f",populacao);
printf("qual a area da cidade?\n");
sscanf("%f",&area);
printf("qual o pib da cidade?\n");
scanf("%2f",&pib);
printf("quantos pontos turisticos essa cidade tem?\n");
scanf("%d",&pontos);

printf("estado:%s\n","A");
printf("codigo da carta:%s\n","A01\n");
printf("nome da cidade:%s\n","São Paulo\n");
printf("populacao:%d 12325000\n");
printf("area(em km²):%.2fM²\n","1521.11");
printf("pib:%s","699.28 bilhoes de reais\n");
printf("numero de pontos turisticos:%d\n",50);

return 0;
}





