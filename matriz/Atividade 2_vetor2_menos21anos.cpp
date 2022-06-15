/*
Ler o nome e a idade de 5 pessoas. Gerar:
1- A relação de todas as pessoas e suas idades;
2- A relação de todos as pessoas que tenham menos que 21 anos de idades.
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome[5];
	int idade[5], i;
	
	for (i=0; i<5; i++)
	{
		cout<<"Nome   : "; cin>>nome[i];
		cout<<"Idade  : "; cin>>idade[i];
		
	}
	
	cout<<"\n";
	cout<<"NOME\tIDADE"<<endl;
	for (i=0; i<5; i++)
	{
		cout<<nome[i]<<"\t"<<idade[i]<<endl;
		
	}
	
	cout<<"\n";
	cout<<"NOME\tIDADE\t- menor que 21 anos"<<endl;
	for (i=0; i<5; i++)
	{
		if (idade[i]<21)
		{
			cout<<nome[i]<<"\t"<<idade[i]<<endl;
		
		}
	}
	
	
}
