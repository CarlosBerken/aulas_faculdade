/*Costrua um algoritmo que tenha um menu de 
opþ§es:
1 - Leia dois vetores de 5 posiþ§es cada, 
com valores fracionßrios. Gere o 3¦ vetor com
a soma dos dois Ýndice por Ýndice;
2 - Entre com um valor em Real e converta para
Dolar;
3 - Gere um vetor de 10 posiþ§es com caracteres
de A..Z e, pedindo para o usußrio digitar uma
letra e localizar onde o(s) Ýndice(s) que esta se 
encontra; Caso nÒo tenha a letra - msg - Letra encontrada;
4 - Sair;

//VarÝaveis
Vetor1[5],Vetor2[5],Vetor3[5] tipo fracionßrio;
ValorReal,ValorDolar tipo fracionßrio;
VetorLetras[10] do tipo caracter;
Letra tipo caracter;
op tipo caracter;

InÝcio
Menu: //r¾tulo
Limpa tela;
escreva("1 - Soma 2 Vetores fracionßrios");
escreva("2 - ConversÒo Real - Dolar");
escreva("3 - Vetor de Letras a..z");
escreva("Digite o opþÒo:");
leia(op);

se (op =='1') entÒo
  escreva("Soma de 2
   vetores fracionßrios");
  escreva("Valores Vetor1[5]");
  para(int i=0;i<5;i++)
    escreva(Digite valor para Vetor1[",i,"]:");
    leia(Vetor1[i]);
  fimpara
 
 escreva("Valores Vetor2[5]");
  para(int i=0;i<5;i++)
    escreva(Digite valor para Vetor2[",i,"]:");
    leia(Vetor2[i]);
  fimpara

 escreva("Gerando:Vetor1[5] + Vetor2[5] = Vetor3[5]");
 para(int i=0;i<5;i++)
    Vetor3[i] = Vetor1[i] + Vetor2[i];
    escreva("Vetor1[",i,"]:",Vetor1[i],"+ Vetor2[",i,"]:",Vetor2[i]," = Vetor3[",i,"]: ",Vetor3[i]);  
fimpara

escreva("Digite <enter> para voltar ao Menu");
leia(op);
Va para Menu;
fimse opþÒo 1

se (op == '2') entÒo
escreva("digite o valor em Real para conversÒo em Dolar");
leia(ValorReal);

ValorDolar = ValorReal * 5,39;

escreva("R$",ValorReal," = U$",ValorDolar);

escreva("Digite <enter> para voltar ao Menu");
leia(op);
Va para Menu;
fimse opþÒo 2

se (op == '3') entÒo
para(int i=0;i<10;i++)
  VetorLetra[i] = Randomizar 65-90
  escreva("VetorLetr[",i,"]: ",VetorLetra[i]); 
fimpara

escreva("Digite uma letra a-z para se localizada");
leia(Letra);
int controle=0;
para(int i=0;i<10;i++)
  se(VetorLetra[i] == Letra) entÒo
    escreva("VetorLetr[",i,"]: ",VetorLetra[i]); 
    controle = 1;
  fimse 
fimpara

se(controle == 0) entÒo
 escreva("NÒo existe a tecla no Vetor");
fimse

escreva("Digite <enter> para voltar ao Menu");
leia(op);
Va para Menu;
fimse opþÒo 3

se (op == '4') entÒo

escreva("Deseja realmente sair do Sistema <S> ou <N>?");
leia(op);
op=maÝsculo(op);
se(op == 'S') entÒo
  sair do sistema;
fimse
se(op == 'N') entÒo
Va para Menu;
fimse 
fimse opþÒo 4
*/

#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//VarÝaveis
float Vetor1[5],Vetor2[5],Vetor3[5];// tipo fracionßrio;
float ValorReal,ValorDolar;// tipo fracionßrio;
char VetorLetras[10];// do tipo caracter;
char Letra; // caracter;
char op;// tipo caracter;

//InÝcio
main(){
setlocale(LC_ALL,"portuguese");
Menu: //r¾tulo
//Limpa tela;
system("cls");
printf("\n 1 - Soma 2 Vetores fracionßrios");
printf("\n 2 - ConversÒo Real - Dolar");
printf("\n 3 - Vetor de Letras A..Z");
printf("\n 4 - Sair do Sistema");
printf("\n Digite o opþÒo:");
fflush(stdin);
scanf("%c",&op);
fflush(stdin);

if (op =='1'){
  printf("\n Soma de 2 vetores fracionßrios");
  printf("\n Valores Vetor1[5]");
  for(int i=0;i<5;i++){
      printf("\n Digite valor para Vetor1[%i]:",i);
    scanf("%f",&Vetor1[i]);
  }
 
 printf("\nValores Vetor2[5]");
   for(int i=0;i<5;i++){
    printf("\n Digite valor para Vetor2[%i]:",i);
    scanf("%f",&Vetor2[i]);
}

 printf("\n Gerando:Vetor1[5] + Vetor2[5] = Vetor3[5]");
 for(int i=0;i<5;i++){
    Vetor3[i] = Vetor1[i] + Vetor2[i];
    printf("\n Vetor1[%i]: %.2f + Vetor2[%i]: %.2f = Vetor3[%i]: %.2f",i,Vetor1[i],i,Vetor2[i],i,Vetor3[i]);  
}

printf("\n Digite <enter> para voltar ao Menu");
fflush(stdin);
scanf("%c",&op);
fflush(stdin);
goto Menu;
}//fimse opþÒo 1

if (op == '2'){
	
printf("\n digite o valor em Real para conversÒo em Dolar: ");
scanf("%f",&ValorReal);

ValorDolar = ValorReal / 5.39;

printf("\n R$ %.2f = U$ %.2f",ValorReal,ValorDolar);

printf("\n Digite <enter> para voltar ao Menu");
getche();
goto Menu;
}//fimse opþÒo 2

if (op == '3'){
for(int i=0;i<10;i++){
  VetorLetras[i] = rand() % 25+65;
  printf("\n VetorLetr[%i]: %c",i,VetorLetras[i]); 
}

printf("\n Digite uma letra a-z para se localizada");
scanf("%c",&Letra);
Letra=toupper(Letra);
int controle=0;
for(int i=0;i<10;i++){
  if(VetorLetras[i] == Letra){
    printf("\n VetorLetr[%i]: %c ",i,VetorLetras[i]); 
    controle = 1;
 }// fimse 
}//fimpara

if(controle == 0){
 printf("\n NÒo existe a tecla no Vetor");
}//fimse

printf("\n Digite <enter> para voltar ao Menu");
getche();
goto Menu;
}//fimse opþÒo 3

if (op == '4'){
printf("\n Deseja realmente sair do Sistema <S> ou <N>?");
fflush(stdin);
scanf("%c",&op); //op=getche();
fflush(stdin);
op=toupper(op);
if(op == 'S'){
  exit(0);
}//fimse
if(op == 'N'){
goto Menu;
}//fimse 
}//fimse opþÒo 4
}
