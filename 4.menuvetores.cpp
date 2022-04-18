/*Exerc1 da lista 4 - 1 - Construa um programa em C/C++
que tenha as seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores 
aleatórios 0-100 e na sequência selecione
aleatoriamente três posições/índices deste 
vetor e apresente os seus valores e 
a multiplicação destes.

1.2 - Leia dois vetores de 5 posições 
com valores inteiros cada e gere um 
terceiro com os resultados da soma dos 
valores sendo a lógica: soma o 1ª elemento 
do 1º vetor com o 5º elemento do 2º vetor,
2ª elemento do 1º vetor com o 4º elemento 
do 2º vetor, e assim sucessivamente.

1.3 - Construa um vetor de 13 posições com 
valores caracteres aleatórios e na 
sequência pedir para o usuário digitar 
um caractere e localizar onde este está 
no vetor e quantas vezes aparece.

//Variáveis
1 - VetorA[10] tipo inteiro;
    Ind1,Ind2,Ind3 tipo inteiro;
	MultipValores tipo inteiro; 
	
2 - Vetor1[5],Vetor2[5],Vetor3Soma[5] tipo inteiro;
     
3 - VetorChar[13] tipo caracter;
    caracter tipo caracter;
    QtasVezes inteiro;
	
Variáveis gerais
op tipo caracter;

Início
Menu:  //rótulo Menu
 limpa tela
 escreva("Menu de Opções de Manupulação de Vetores");
 escreva("1 - Vetor 10 posições aleatória 0-100");
 escreva("2 - Vetores 5 posições - Soma intercalada");
 escreva("3 - Vetores 13 posições carcateres");
 escreva("4 - Sair do sistema");
 leia(op);
 
 se(op == '1') então
	 escreva("Gere aletaoriamente 10 valores inteiros aleatórios");
	 para(i=0;i<10;i++) faça
	    VetorA[i] = randomizar(0-100);
	    escreva("VetorA[",i,"]=",VetorA[i]);
	 fimpara
	 
	 escreva("Digite o 1º indice a buscar o conteúdo");
	 leia(Ind1);
	 escreva("Digite o 2º indice a buscar o conteúdo");
	 leia(Ind2);
	 escreva("Digite o 3º indice a buscar o conteúdo");
	 leia(Ind3);
	    
     MultipValores = VetorA[Ind1] * VetorA[Ind2] * VetorA[Ind3];
     
     escreva("VetorA[",Ind1,] = ",VetorA[Ind1]);
     escreva("VetorA[",Ind2,] = ",VetorA[Ind2]);
     escreva("VetorA[",Ind3,] = ",VetorA[Ind3]);
     
     escreva("Valor da Mutiplicação dos Três:",MultipValores);
     escreva("Tecle entre para voltar ao Menu Principal");
     tecle algo; Vá para Menu;
fimse //opção 1

se(op == '2') então 
  escreva("Valores do Vetor1[5]");
  para(i=0;i<5;i++) faça
     escreva("Digite o valor do Vetor1[",i,"]:");
     leia(Vator1[i]);
  fimpara
  
  escreva("Valores do Vetor2[5]");
  para(i=0;i<5;i++) faça//{abre chave
     escreva("Digite o valor do Vetor2[",i,"]:");
     leia(Vator2[i]);
  fimpara//}fecha chave
     
//criação do 3º vetor
tamanho=5;
para(i=0;i<5;i++) faça
   Vetor3Soma[i] = Vetor1[i] + Vetor2[tamanho-i];
fimpara   

//mostrar os vetores

escreva("Vetor1");
Para(i=0;i<5;i++) faça
  escreva("Vetor1[",i,"]:",Vetor1[i]);
fimpara

escreva("Vetor2");
Para(i=0;i<5;i++) faça
  escreva("Vetor2[",i,"]:",Vetor2[i]);
fimpara  

escreva("Vetor3Soma");
Para(i=0;i<5;i++) faça
  escreva("Vetor3Soma[",i,"]:",Vetor3Soma[i]);
fimpara

escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; Vá para Menu;
fimse //opção 2

se(op == '3') então 
escreva("Preechimento aleatórios de 13 caracteres");
para(i=0;i<13;i++) faça
  VetorChar[i] = Randomizar(0-255);
  escreva("VetorChar[",i,"]:",VetorChar[i]); 
fimpara

escreva("Digite um caracacter qualquer:");
leia(caracter);
QtasVezes = 0;
para(i=0;i<13;i++) faça
   se(caracter == VetorChar[i]) então
         QtasVezes=QtasVezes+1;
         escreva("VetorChar[",i,"]:",caracter);
   fimse
fimpara  
escreva("Total de Vezes:",QtasVezes); 
escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; Vá para Menu;
fimse //opção 3

se(op == '4') então
  escreva("Saindo do Sistema.......");
  escreva("tecle enter......");
  tecle algo;
  Sair do sistema;
fimse //opção 4

fimalgoritmo */

#include<conio.h>
#include<stdio.h>
#include<iostream>

int VetorA[10];
int Ind1,Ind2,Ind3;
int	MultipValores; 
int Vetor1[5],Vetor2[5],Vetor3Soma[5];
char VetorChar[13];
char op;
int QtasVezes;

Início
Menu:  //rótulo Menu
  system("cls");

 printf("Menu de Opções de Manupulação de Vetores");
 printf("1 - Vetor 10 posições aleatória 0-100");
 printf("2 - Vetores 5 posições - Soma intercalada");
 printf("3 - Vetores 13 posições carcateres");
 printf("4 - Sair do sistema");
 leia(op);
 
 if (op == '1') então
	 escreva("Gere aletaoriamente 10 valores inteiros aleatórios");
	 para(i=0;i<10;i++) faça
	    VetorA[i] = randomizar(0-100);
	    escreva("VetorA[",i,"]=",VetorA[i]);
	 fimpara
	 
	 escreva("Digite o 1º indice a buscar o conteúdo");
	 leia(Ind1);
	 escreva("Digite o 2º indice a buscar o conteúdo");
	 leia(Ind2);
	 escreva("Digite o 3º indice a buscar o conteúdo");
	 leia(Ind3);
	    
     MultipValores = VetorA[Ind1] * VetorA[Ind2] * VetorA[Ind3];
     
     escreva("VetorA[",Ind1,] = ",VetorA[Ind1]);
     escreva("VetorA[",Ind2,] = ",VetorA[Ind2]);
     escreva("VetorA[",Ind3,] = ",VetorA[Ind3]);
     
     escreva("Valor da Mutiplicação dos Três:",MultipValores);
     escreva("Tecle entre para voltar ao Menu Principal");
     tecle algo; Vá para Menu;
fimse //opção 1

se(op == '2') então 
  escreva("Valores do Vetor1[5]");
  para(i=0;i<5;i++) faça
     escreva("Digite o valor do Vetor1[",i,"]:");
     leia(Vator1[i]);
  fimpara
  
  escreva("Valores do Vetor2[5]");
  para(i=0;i<5;i++) faça//{abre chave
     escreva("Digite o valor do Vetor2[",i,"]:");
     leia(Vator2[i]);
  fimpara//}fecha chave
     
//criação do 3º vetor
tamanho=5;
para(i=0;i<5;i++) faça
   Vetor3Soma[i] = Vetor1[i] + Vetor2[tamanho-i];
fimpara   

//mostrar os vetores

escreva("Vetor1");
Para(i=0;i<5;i++) faça
  escreva("Vetor1[",i,"]:",Vetor1[i]);
fimpara

escreva("Vetor2");
Para(i=0;i<5;i++) faça
  escreva("Vetor2[",i,"]:",Vetor2[i]);
fimpara  

escreva("Vetor3Soma");
Para(i=0;i<5;i++) faça
  escreva("Vetor3Soma[",i,"]:",Vetor3Soma[i]);
fimpara

escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; Vá para Menu;
fimse //opção 2

se(op == '3') então 
escreva("Preechimento aleatórios de 13 caracteres");
para(i=0;i<13;i++) faça
  VetorChar[i] = Randomizar(0-255);
  escreva("VetorChar[",i,"]:",VetorChar[i]); 
fimpara

escreva("Digite um caracacter qualquer:");
leia(caracter);
QtasVezes = 0;
para(i=0;i<13;i++) faça
   se(caracter == VetorChar[i]) então
         QtasVezes=QtasVezes+1;
         escreva("VetorChar[",i,"]:",caracter);
   fimse
fimpara  
escreva("Total de Vezes:",QtasVezes); 
escreva("Tecle entre para voltar ao Menu Principal");
tecle algo; Vá para Menu;
fimse //opção 3

se(op == '4') então
  escreva("Saindo do Sistema.......");
  escreva("tecle enter......");
  tecle algo;
  Sair do sistema;
fimse //opção 4

fimalgoritmo */

        



