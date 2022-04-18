/* 1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno. 
*/

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <locale.h>

float profundidade, largura, area;

main(){

printf(" \n Digite o profundidade do Terreno:");
scanf("%f",&profundidade);
printf(" \n Digite a Largura do Terreno:");
scanf("%f",&largura);

area = profundidade * largura;

printf(" \n A Area Total do Terreno: %.2f", area );


}