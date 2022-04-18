/*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa,
 e exibir quantos dias de vida ela possui. Considere sempre anos
completos, e que um ano possui 365 dias. Ex: uma pessoa com 19 
anos possui 6935 dias de vida; veja um exemplo de saída:
 MARIA, VOCÊ JÁ VIVEU 6935 DIAS.
 
//variáveis
Nome caracter;
idade inteiro;
dias_vida inteiro;

Inicio
//entrada de dados
escreva("Digite o Nome da Pessoa:");
leia(Nome);
escreva("Digite a idade da Pessoa:");
leia(idade);

//processamento
dias_vida = idade * 365;

//saida de dados
escreva("O nome da Pessoa é:",Nome);
escreva("Possui ",idade," anos que corresponde a ",dias_vida,"dias de vida");

fim algoritmo
*/

//Codificação do algoritmo em C

#include<conio.h>
#include<stdio.h>
#include<iostream>

//variáveis
char Nome[20];//tipo caracter;
int idade;//tipo inteiro;
int dias_vida;// tipo  inteiro;

//Inicio
main(){
setlocale(LC_ALL,"portuguese");//comamdo para usar acentuação
//entrada de dados
printf("\n Digite o Nome da Pessoa:");
scanf("%s",&Nome);
printf("\n Digite a idade da Pessoa:");
scanf("%i",&idade);

//processamento
dias_vida = idade * 365;

//saida de dados
printf("\n O nome da Pessoa é: %s ",Nome);
printf("\n Possui %i anos que corresponde a %i dias de vida",idade,dias_vida);
printf("\n\n\n");
system("pause");
//fim algoritmo
}