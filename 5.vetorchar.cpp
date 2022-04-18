/*Construa um algoritmo para ler(gerar 
a automático)vetor de 13 caracteres e 
apresentar estena tela e pedir para o 
usuário digitar um índice e o algoritmo
 deverá apresentaro caracter que se 
 encontra neste índice.
Dever ter a possibilidade de gerar novos
valores e pedir novo índice.

Variáveis
VetorChar[13] tipo caracter;
op tipo caracter;
indice tipo inteiro;

Início
faça
  limpa tela
  escreva("Gerar aleatoriamente 13 caracteres")/
  para(inteiro i=0;i<13;i++)
  VetorChar[i] = randomizar(65-90) //letras A-Z pelo seu número decimal da tabela ASCII
  fimpara
  
  escreva("Mostra VetorChar[13] caracteres")/
  para(inteiro i=0;i<13;i++)
  escreva("VetorChar[",i,"]: ",VetorChar[i]);
  fimpara
  
  escreva("Digite um índice de 0 até 12 para mostrar o caracter");
  leia(indice);
  
  escreva("VetorChar[",indice,"]=",VetorChar[indice]);

  escreva("Deseja gerar novos caracteres <S> ou <N>");
  leia(op);
  op=maísculo(op);
  Enquanto(op <> 'N');
  fimalgoritmo
 */
#include<conio.h>
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
//Variáveis
char VetorChar[13]; //tipo caracter;
char op;// tipo caracter;
int indice;//tipo inteiro;

//Início
main(){
    setlocale(LC_ALL,"portuguese");
//faça
do{

  //limpa tela
  system("cls");
  printf("\n Gerar aleatoriamente 13 caracteres");
  for(int i=0;i<13;i++){
    VetorChar[i] = rand() % 25+65; //letras A-Z pelo seu número decimal da tabela ASCII
 }//fimpara
  
  printf("\n Mostra VetorChar[13] caracteres");
  for(int i=0;i<13;i++){
   printf("\n VetorChar[%i]: %c ",i,VetorChar[i]);
  }//fimpara
  
  printf("\n\n");
  do{
  printf("\n Digite um índice de 0 até 12 para mostrar o caracter");
  scanf("%i",&indice);
  if((indice < 0) || (indice > 12)){
   printf("\n Indíce fora da faixa correta -> 0-12");
  }}while((indice < 0) || (indice > 12));
  
  printf("\n VetorChar[%i]= %c ",indice,VetorChar[indice]);
//*******************************************
/*O algortimo pede para o usuário digitar
um caracter maísculo de A-Z e sistema deve
localizar o índice que se encontra este caracter
e mostrar na tela, caso não tenha dizer:
Caracter não consta no Vetor
*/ printf("\n\n");
  char caracter;
  do{
  fflush(stdin);    
  printf("\n Digite um caracter A-Z maísculo");
  scanf("%c",&caracter);
  fflush(stdin);
  caracter=toupper(caracter);
  if((caracter < 65) || (caracter > 90)){
   printf("\n Caracter fora da faixa correta -> A-Z");
  }}while((caracter < 65) || (caracter > 90));
  int flag=0;
  for(int i=0;i<13;i++){
     if(caracter == VetorChar[i]){
         printf("\n VetorChar[%i]= %c ",i,VetorChar[i]);
         flag=1;        
     }}
   if(flag == 0){
       printf("\n Carecter não encontrado");
   }
      
//*************************
  printf("\n\n");
  printf("\n Deseja gerar novos caracteres <S> ou <N>");
  op=getche();//ler um caracter
  op=toupper(op);}
  while(op != 'N');}
 // fimalgoritmo
   
       
  
  

