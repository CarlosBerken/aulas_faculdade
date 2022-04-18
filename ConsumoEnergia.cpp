/* Deseja-se fazer uma pesquisa a respeito do consumo mensal de 
energia elétrica em uma determinada cidade. Para isso são 
fornecidos os seguintes dados :
a) preço do kWh consumido
b) numero do consumidor
c) quantidade de Kwh consumidos durante o mês
d) código do tipo de consumidor (residencial, comercial, 
industrial)
O número do consumidor igual a zero deve ser usado como condição 
de parada (flag).

Fazer um algoritmo que calcule e imprima :
• para cada consumidor o total a pagar
• o maior consumo verificado
• o menor consumo verificado
• o total do consumo para cada um dos três tipos de consumidores
• a média geral de consumo 

//variáveis 
 PrecoKWHConsumido fracionário;
 NumConsumidor inteiro; //(flag == 0)bandeira de finalização
 QtidadeKwhConsMes fracionário;
 CodTipoConsu inteiro; //(1-Residencial,2-Comercial,3-Industrial)
 TotalPagarConsu fracionário;
 MaiorConsumo fracionário;
 MenorCOnsumo fracionário;
 TotalConsumoRes fracionário;
 TotalConsumoCom fracionário;
 TotalConsumoInd fracionário;
 MediaGeralCons fracionário;
 QtidadeConsumidores inteiro;
 op caracter;
 
//entrada de dados

faça1 //geral - deseja continuar ou não do{
limpa tela;
MaiorConsumo = 0;
MenorConsumo = 9999999;
TotalConsumoRes = 0;
TotalConsumoCom = 0;
TotalConsumoInd = 0;
MediaGeralCons = 0;
QtidadeConsumidores = 0;
  escreva("Digite o preço do KWh:");
  leia(PrecoKWHConsumido);//0,53224

faça2 //flag número do consumidor = 000  do{
limpa tela;  
  escreva("Digite a quantidade de Kwh consumidos durante o mês:");
  leia(QtidadeKwhConsMes);
  
  escreva("Digite Código do tipo de consumidor");
  escreva("1-Residencial");
  escreva("2-Comercial");
  escreva("3-Industrial");
  leia(CodTipoConsu);
  
  escreva("Digite o numero do consumidor:")//001 ou 002 ou 003 ou 000
  leia(NumConsumidor);
  
//processamento dos dados

TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;
escreva("Total do consumo pelo Consumidor: ",TotalPagarConsu);
MediaGeralCons = MediaGeralCons + TotalPagarConsu ;

se(CodTipoConsu == 1) então
escreva("Consumidor Tipo Residencial");
TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(CodTipoConsu == 2) então
escreva("Consumidor Tipo Comercial");
TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Comercial: ",TotalConsumoCom);
fimse

se(CodTipoConsu == 3) então
escreva("Consumidor Tipo Industrial");
TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
escreva("Total do consumo pelo Consumidor Residencial: ",TotalConsumoRes);
fimse

se(TotalPagarConsu > MaiorConsumo) então
    MaiorConsumo =  TotalPagarConsu;
fimse

se(TotalPagarConsu < MenorConsumo) então
    MenorConsumo =  TotalPagarConsu;
fimse

escreva("Digite o número do Consumidor:");
leia(NumConsumidor);

QtidadeConsumidores  = QtidadeConsumidores +1;


Enquanto2(NumConsumidor != 000);//flag número do consumidor = 000
//while()
MediaGeralCons=MediaGeralCons/QtidadeConsumidores; 
escreva("A Média Geral de Consumo:",MediaGeralCons);
escreva(" Menor Consumo:", MenorConsumo);
escreva(" Maior Consumo:", MaiorConsumo);

escreva("Deseja novo valor de Preço KWh <S> ou <N>");
leia(op);
op=maísculo(op);
Enquanto1(op != 'N');//geral - deseja continuar ou não
//while()
fimalgoritmo;



*/


#include<conio.h>
#include<stdio.h>
#include<iostream> //biblioteca que tem comandos C nativo e C++


//variáveis 

 float PrecoKWHConsumido; //fracionário
 int NumConsumidor; //inteiro //(flag == 0)bandeira de finalização
 float QtidadeKwhConsMes; //fracionário
 int CodTipoConsu; //inteiro (1-Residencial,2-Comercial,3-Industrial)
 float TotalPagarConsu; // fracionário
 float MaiorConsumo; //  fracionário;
 float MenorConsumo; // fracionário;
 float TotalConsumoRes; //  fracionário;
 float TotalConsumoCom;  // fracionário;
 float TotalConsumoInd; // fracionário;
 float MediaGeralCons; // fracionário;
 int QtidadeConsumidores; // inteiro;
 char op; // caracter
 
//entrada de dados


main(){ // Início da programação
	
	setlocale(LC_ALL,"portuguese"); // palavras com acentuaçõa 
	

	do{// faça até opção de sair  - Comando condicional para repetição
	
	system("cls");//limpa tela  clear screen
	
MaiorConsumo = 0;
MenorConsumo = 9999999;
TotalConsumoRes = 0;
TotalConsumoCom = 0;
TotalConsumoInd = 0;
MediaGeralCons = 0;
QtidadeConsumidores = 0;

	
	//declaraçõa tipos de varíaveis se inteira , fracionária ,caracteres
	
  printf("\n Digite o preço do KWh:");
  scanf("%f" ,&PrecoKWHConsumido);//0,53224

  do{
printf("\n Digite o número do Consumidor: Para Não Buscar Mais Informações de Consumidor Digitar 00 ");
scanf("%i" ,&NumConsumidor);

if(NumConsumidor != 0){

  
  printf(" \n Digite a quantidade de Kwh consumidos durante o mês:");
  scanf("%f" ,&QtidadeKwhConsMes);
  
  printf(" \n Digite Código do tipo de consumidor");
  printf("\n 1-Residencial");
  printf("\n 2-Comercial");
  printf("\n 3-Industrial");
  printf("\n Digite a Opção:");
  scanf("%i",&CodTipoConsu);
  
  
//processamento dos dados

TotalPagarConsu = PrecoKWHConsumido * QtidadeKwhConsMes;
printf("\n Total do consumo pelo Consumidor: %2.f",TotalPagarConsu);
MediaGeralCons = MediaGeralCons + TotalPagarConsu ;

if(CodTipoConsu == 1) {

printf("\n Consumidor Tipo Residencial");
TotalConsumoRes = TotalConsumoRes + TotalPagarConsu;
printf("\n Total do consumo pelo Consumidor Residencial: %.2f ",TotalConsumoRes);
}

if(CodTipoConsu == 2) {

printf("\n Consumidor Tipo Comercial");
TotalConsumoCom = TotalConsumoCom + TotalPagarConsu;
printf("\n Total do consumo pelo Consumidor Comercial: %.2f ",TotalConsumoCom);
}

if(CodTipoConsu == 3) {

printf("\n Consumidor Tipo Industrial");
TotalConsumoInd = TotalConsumoInd + TotalPagarConsu;
printf("\n Total do consumo pelo Consumidor Industrial: %.2f ",TotalConsumoInd);
}

if(TotalPagarConsu > MaiorConsumo) {

    MaiorConsumo =  TotalPagarConsu;
}

if(TotalPagarConsu < MenorConsumo) {

    MenorConsumo =  TotalPagarConsu;
}

QtidadeConsumidores  = QtidadeConsumidores +1;}


//Enquanto2(NumConsumidor != 000);//flag número do consumidor = 000
//while()
}while(NumConsumidor!= 0);


MediaGeralCons=MediaGeralCons/QtidadeConsumidores; 
printf("\n A Média Geral de Consumo: %.2f",MediaGeralCons);
printf(" \n Menor Consumo: %.2f", MenorConsumo);
printf("\n Maior Consumo: %.2f", MaiorConsumo);

printf(" \n \n "); 
fflush(stdin);//limpa buffer
printf(" \n Deseja novos valores <S> ou <N> "); 
scanf("%c",&op);//ler valores caracteres do teclado

op=toupper(op);
}while (op != 'N');
} // finaliza programa