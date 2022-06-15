/*
Validação de dados
Faça um programa para ler o sexo (que deve M ou F) e mostre a escolha
*/

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	char sexo;
	
	do
	{
		cout<<"Digite o sexo (M ou F): "; cin>>sexo;
		sexo=toupper(sexo); // converte a caracter para maiúsculo. Nota: tolower
		if (sexo!='M' and sexo !='F') // para emitir uma mensagem
		{
			cout<<"Sexo inválido!!! Digite M ou F."<<endl;
		}
	} while (sexo!='M' and sexo !='F');
	
	if(sexo=='M')
	{
		cout<<sexo<<" = Masculino";
	}
	else
	{
		cout<<sexo<<" = Feminino";
	}
	
}
