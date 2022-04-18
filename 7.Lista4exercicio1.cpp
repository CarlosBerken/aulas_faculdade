/* 1 - Construa um programa em C/C++ que tenha as 
seguintes opções de Menu:
1.1 - Leia um vetor de 10 posições com valores
aleatórios 0-100 e na sequência selecione
aleatoriamente três posições/índices deste 
vetor e apresente os seus valores e a multiplicação 
destes.
1.2 - Leia dois vetores de 5 posições com valores 
inteiros cada e gere um terceiro com os resultados 
da soma dos valores sendo a lógica: soma o 1ª elemento 
do 1º vetor com o 5º elemento do 2º vetor, 2ª elemento
do 1º vetor com o 4º elemento do 2º vetor, 
e assim sucessivamente.
1.3 - Construa um vetor de 13 posições com valores 
caracteres aleatórios e na sequência pedir para o 
usuário digitar um caractere e localizar onde 
este está no vetor e quantas vezes aparece.

//Varáveis 
//1.1
Vetor[10] tipo inteiro;
Pos1,Pos2,Pos3 tipo inteiro;
MultiElementos tipo inteiro;
//1.2
V1,V2,V3 tipo inteiro;
//1.3
VetorChar[13] tipo caracter;
caracter tipo caracter;
QtdVezes tipo inteiro;

op tipo caracter;

Inicio
//rótulo
Menu: 
limpa tela
escreva("Menu de opções");
escreva("1 - Leia um vetor[10] valores inteiros");
escreva("2 - Leia dois vetor[5] valores inteiros");
escreva("3 - Leia vetor[13] valores caracteres");
escreva("4 - Sair do Sistema");
escreva("Digite a opção deseja");
leia(op);

se(op == '1') então
escreva("Preencher aleatoriamente Vetor[10]");
para(int i=0;i<10;i++)
   Vetor[i] = randomizar 0-100;
fimpara

escreva("Digite a primeira posição desejada");
leia(Pos1);
escreva("Digite a segunda posição desejada");
leia(Pos2);
escreva("Digite a terceira posição desejada");
leia(Pos3);   

escreva("Pos1:",Pos1,"contém:",Vetor[Pos1]);
escreva("Pos2:",Pos2,"contém:",Vetor[Pos2]);
escreva("Pos3:",Pos3,"contém:",Vetor[Pos3]);
MultiElementos = Pos1*Pos2*Pos3;
escreva("Multiplicação das 3 posições:",MultiElementos);

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse

se(op == '2') então
escreva("Preencher dois Vetores V1[5] e V2[5] e gerar V3[5]");
escreva("Preencher o V1[5]");
para(int i=0;i<5;i++)
 escreva("V1[",i,"]: ");
 leia(V1[i]);
fimpara

escreva("Preencher o V2[5]");
para(int i=0;i<5;i++)
 escreva("V2[",i,"]: ");
 leia(V2[i]);
fimpara

escreva(" V1[5] e V2[5]");
para(int i=0;i<5;i++)
  escreva("V1[",i,"]:",V1[i]," + V2[",4-i,"]:",V2[4-i]);
fimpara

escreva("Gerar o V3[5]");
para(int i=0;i<5;i++)
   V3[i] = V1[i] + V2[4-i];
   escreva("V3[",i,"]: ",V3[i]);
 fimpara

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse

se(op == '3') então
escreva("Preencher VetorChar[13] com caracteres A-Z");
para(int i=0;i<13;i++)
VetorChar[i] = randomizar A-Z;
 escreva("VetorChar[",i,"]: ");
fimpara

escreva("Digite um caracter aleatório de A-Z") 
leia(caracter);
caracter=maísculo(caracter);
QtdVezes = 0;
para(int i=0;i<13;i++)
  se(caracter == VetorChar[i])
      QtiVezes= QtiVezes + 1;
      escreva("Caracter na Pos:",i,:",VetorChar[i]);
  fimse    
  fimpara
escreva("O caracter:",caracter," Aparaceu ",QtdVezes, Vezes no Vetor");

escreva("Tecle <enter> para voltar ao Menu Principal");
leia();
Vá para Menu;// direciona-se ao rótulo Menu
fimse
      
se(op == '4') então
escreva("Sair do Sistema, Tecle enter)";
leia();
sair sistema;

fimalgoritmo.

*/
#include<conio.h>
#include<stdio.h>
#include<iostream> //biblioteca que tem comandos C nativo e C++
#include<stdlib.h>
#include<locale.h>//para usar acentuação e Ç no código
#include<math.h>
#include<time.h>

using namespace std;

int Vetor[10];
int Pos1,Pos2,Pos3;
int MultiElementos;
//1.2
int V1,V2,V3;
int contador;
//1.3
char VetorChar[13];
char caracter;
int QtdVezes;
char op;

main(){
  setlocale(LC_ALL,"portuguese");

Menu:
system("cls");
printf("\n Menu de opções");
printf("\n 1 - Leia um vetor[10] valores inteiros");
printf("\n 2 - Leia dois vetor[5] valores inteiros");
printf("\n 3 - Leia vetor[13] valores caracteres");
printf("\n 4 - Sair do Sistema");
printf("\n Digite a opção deseja");
scanf("%s",&op);

switch (op) {
  case '1':{
printf("\n Preencher aletoriamente Vetor[10]");
for(int i=0;i<10;i++) { //inicio for
  Vetor[i] = rand() % 100;
} //fim for

printf("\n Digite a primeira posição desejada");
scanf("%i",&Pos1);
printf("\n Digite a segunda posição desejada");
scanf("%i",&Pos2);
printf("\n Digite a terceira posição desejada");
scanf("%i",&Pos3);

printf("\n Pos1[i]: %i ","contém:",Vetor[Pos1]);
printf("\n Pos2[i]: %i ","contém:",Vetor[Pos2]);
printf("\n Pos3[i]: %i ","contém:",Vetor[Pos3]);
MultiElementos = Pos1*Pos2*Pos3;
printf("\n Multiplicação das 3 posições: %i ",MultiElementos);

printf("\n Tecle <enter> para voltar ao Menu Principal");
getch();
goto Menu;// direciona-se ao rótulo Menu
}//fim opção 1

case '2':{
  contador = 4;
printf("\n Preencher dois Vetores V1[5] e V2[5] e gerar V3[5]");
printf("\n Preencher o V1[5]");
for(int i=0;i<5;i++){
 printf("\n Vetor[%i]: ",i++);
 scanf("%d",&Vetor[i]);
}
printf("\n Preencher o V2[5]");
for (int i=0;i<5;i+1) {
 printf("\n Vetor[%i]: %i ", i+1);
 scanf("%i",&Vetor[i]);
}
printf("\n V1[5] e V2[5]");
for (int i=0;i<5;i+1) {
  printf("\n V1[%i]:",Vetor[i]," + V2[",4-i,"]:",Vetor[4-i]);
}
  printf("\n Gerar o V3[5]");
for (int i=0;i<5;i+1) {
   Vetor[i] = Vetor[i] + Vetor[contador - i];
   printf("\n V3[%i]: %i ",i+1,V3["%i"]);

 }
 printf("\n Tecle <enter> para voltar ao Menu Principal");
getch();
goto Menu;// direciona-se ao rótulo Menu
}
break;

case '3':{
printf("\n Preencher VetorChar[13] com caracteres A-Z");
srand(time(NULL));
for (int i=0;i<13;i+1) {
VetorChar[i] = rand() % 26 + 97;
printf ("\n VetorChar[%i]: %c");
}
printf("\n Digite um caracter aleatório de A-Z");
scanf("%c",&caracter);
fflush(stdin);
caracter=toupper(caracter);
QtdVezes = 0;
for(int i=0;i<13;i++) {
  if(caracter == VetorChar[i]){
      QtdVezes= QtdVezes + 1;
      printf("\n Caracter na Pos: %c,:",i,VetorChar[i]);
}
}
printf("\n O caracter: %c ", "Aparaceu" ",QtdVezes, Vezes no Vetor");

printf("\n Tecle <enter> para voltar ao Menu Principal");
getch();
goto Menu;// direciona-se ao rótulo Menu
}
      
case '4':{
printf("\n Sair do Sistema, Tecle enter");
getch();
exit(0);//função para sair do programa
}//fim da opção 3
break;

}//fim Switch
}//fim do programa