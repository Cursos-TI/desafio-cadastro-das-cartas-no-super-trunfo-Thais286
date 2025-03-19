#include <stdio.h>
int main(){
  printf("Desafiosuper-triunfo!\n");

char estado[2];
//sigla do estado 

char codigo[9];
//codigo da carta

char codigo_cidade[50];
//nome da cidade

char populacao [20000000];
//populacao da cidade

float area_km² [100000];
//area da cidade

float pib [30000];
//pib da cidade

int pontos [50];
//pontos turisticos da cidade

printf("qual o estado da carta?\n");
scanf("%2s",estado);
printf("qual o codigo da carta?\n");
scanf("%9s",codigo);
printf("qual o nome da cidade?\n");
scanf("%50s",nome);
printf("qual a populacao da cidade?\n");
scanf("%20000000f",populacao);
printf("qual a area da cidade?\n");
sscanf("%100000f",&area);
printf("qual o pib da cidade?\n");
scanf("%30000f",&pib);
printf("quantos pontos turisticos essa cidade tem?\n");
scanf("%50d",&pontos);

printf("estado:%s\n","A");
printf("codigo da carta:%s\n","A01\n");
printf("nome da cidade:%s\n","São Paulo\n");
printf("populacao:%d 12325000\n");
printf("area(em km²):%.2fM²\n","1521.11");
printf("pib:%s","699.28 bilhoes de reais\n");
printf("numero de pontos turisticos:%d\n",50);

return 0;
}





