#include<conio.h>
#include<stdio.h>
#include<iostream>

char Nome_Cliente[30];
char CPF[15];
int Fone;
int Percentual;
float Valor_Compra;
float Perc_Desconto;
float Valor_Total_Pago;

main(){

printf(" \n Digite o Nome do Cliente:");
scanf("%s",&Nome_Cliente);

printf(" \n Digite o CPF do Cliente:");
scanf("%s",&CPF)

printf(" \n Digite o Fone do Cliente:");
scanf("%i",&Fone);

printf(" \n Digite o da Valor_Compra do Cliente:");
scanf("%f",&Valor_Compra);

if(Valor_Compra <= 100,00 ) {
		Perc_Desconto = Valor_Compra * 0,1;  //10% desconto
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 10;
 }

if(Valor_Compra >= 101,00 && <= 150,00 ) {
		Perc_Desconto = Valor_Compra * 0,15;  //15% desconto
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 15;
 }

if(Valor_Compra >= 151,00 && <= 200,00) {
		Perc_Desconto = Valor_Compra * 0,20;  //20% desconto
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 20;
 }
if(Valor_Compra >= 201,00 && <= 300,00) {
		Perc_Desconto = Valor_Compra * 0,30;  //30% desconto
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 30;
 }

if(Valor_Compra >= 301,00 && <= 400,00) {
		Perc_Desconto = Valor_Compra * 0,40;  //40% desconto
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 40;
 }

if(Valor_Compra >= 401,00) {
		Perc_Desconto = Valor_Compra * 0,50;  //50% descontoS
		Valor_Total_Pago = Valor_Compra - Perc_Desconto;
		Percentual = 50;
}

printf("\n Nome do Cliente: %s",Nome_Cliente );
printf("\n CPF do Cliente: %s", CPF);
printf("\n Fone do Cliente: %i", Fone);
printf("\n Valor de Compra do Cliente: %.2f", Valor_Compra);
printf("\n Percentual de desconto do Cliente: %.2f", Perc_Desconto);
printf("\n Valor total pago pelo Cliente: %.2f", Valor_Total_Pago);
printf("\n \n");

system("pause");

}
