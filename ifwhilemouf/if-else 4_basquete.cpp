/*
Faça um programa para ler a altura de um determinado atleta de basquete e imprima sua categoria conforme
tabela abaixo:
Altura 					Categoria
>= 1.95 				Ótima
< 1.95 - >= 1.85 		Boa
< 1.85 - >= 1.75 		Regular
< 1.75 					Insuficiente

e acrescente uma estrutura de repetição a seu critério.
Obs: Para este caso você pode considerar:
- um número de atletas fixo; ou
- solicitar a quantidade de atletas no início do programa; ou
- a cada atleta processado, pergunta se deseja continuar ou não.
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	float N1;
	char continuar='s';

do
{
	
	cout<<"\n"<<"Digite a sua altura (ex.: 1.92): ";
	cin>>N1;
		
	if (N1>=1.95)
	{
		cout<<"> Categoria: Ótima. "<<"\n"<<endl;
	}
	else 
	{
		if (N1<1.95 && N1>= 1.85)
			{
				cout<<"> Categoria: Boa. "<<"\n"<<endl;
			}
		
	if (N1< 1.85 && N1>= 1.75)
	{
		cout<<"> Categoria: Regular. "<<"\n"<<endl;
	}
	else 
	{
		if (N1<1.75)
			{
				cout<<"> Categoria: Insuficiente. "<<"\n"<<endl;
			}
	}
}

	cout<<"Deseja continuar? (s ou n) "<<endl;
	cin>>continuar;

}
	while ((continuar == 's') || (continuar == 'S'));
		
}
