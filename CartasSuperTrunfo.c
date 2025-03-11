#include <stdio.h>
int main(){
  printf("Desafiosuper-triunfo!\n");

char estado[2];
//sigla do estado 

char codigo[10];
//codigo da carta

char nome[50];
//nome da cidade

int habitantes =20000;
//população da cidade

float area =10000000;
//area da cidade

float pib =30000000;
//pib da cidade

int pontos =50;
//pontos turisticos da cidade

printf("qual o estado da carta?\n");
scanf("%2s",estado);

printf("qual o codigo da carta?\n");
scanf("%10s",codigo);

printf("qual o nome da cidade?\n");
sacnf("%[^\n]",nome);
//ler o nome com espaços

printf("qual a populacao da cidade?\n");
scanf("%d",&populacao);

printf("qual a area da cidade?\n");
sacanf("%f",&area);

printf("qual o pib da cidade?\n");
sacnf("%f",&pib);

printf("quantos pontos turisticos essa cidade tem?\n");
scanf("%d",&pontos);

printf("dados da cidade\n")
printf("estado:%s\n",estado);
printf("codigo da carta:%s\n",codigo);
printf("nome da cidade:%s\n",nome);
printf("populacao:%d populacao");
printf("area(em km²):%.2fM²\n",area);
printf("pib:%2f\n",pib);
printf("numero de pontos turisticos:%d\n",pontos);

return 0;
}








  