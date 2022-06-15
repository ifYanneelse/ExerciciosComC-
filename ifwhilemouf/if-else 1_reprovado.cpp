/* 
Fazer um programa para ler o nome do aluno e suas duas notas.
Calcule e mostre a média e informe a situação do aluno: 
- Aprovado: para média >= 6
- Em recuperação: para média < 6 e >= 4
- Reprovado: para média < 4
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome;
	float n1, n2, media;
	
	cout<<"Nome do aluno: "; cin>>nome;
	cout<<"Nota 1 : "; cin>>n1;
	cout<<"Nota 2 : "; cin>>n2;
	media = (n1+n2) / 2;		
	if (media>=6)
	{
		cout<<nome<<" está APROVADA(O) com a média "<<media<<endl;
	}
	else if (media>=4)
	{
		cout<<nome<<" está EM RECUPERAÇÃO com a média "<<media<<endl;
	}
	else
	{
		cout<<nome<<" está REPROVADA(O) com a média "<<media<<endl;
	}
	
}
