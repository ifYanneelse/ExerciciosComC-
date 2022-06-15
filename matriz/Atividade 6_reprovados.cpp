/* 
Faça um programa para ler o nome e as duas notas de 5 alunos.

Faça para cada aluno:
- Calcule e mostre a média.

Faça após a entrada dos alunos:
- Apresente a relação de alunos contendo: nome, nota1, nota2 e a média;
- Apresente a relação de alunos que foram reprovados (média < 6) contendo: nome, nota1, nota2 e a média.
*/

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome[5];
	float nota1[5], nota2[5], media[5];
	int i;
	
	for (i=0; i<5; i++)
	{
		cout<<"Qual o seu nome: "; cin>>nome[i];
		cout<<"Digite a primeira nota: "; cin>>nota1[i];
		cout<<"Digite a segunda nota: "; cin>>nota2[i];
		
		media[i]=(nota1[i]+nota2[i])/2;
		
		cout<<nome[i]<< ", sua média é " <<media[i]<<"\n"<<endl;
	}
	
	cout<<"NOME\tNOTA1\tNOTA2\tMÉDIA"<<endl;
	for (i=0; i<5; i++)
	{
		cout<<nome[i]<<"\t"<<nota1[i]<<"\t"<<nota2[i]<<"\t"<<media[i]<<endl;
	}
	
	cout<<"\n"<<"NOME\tNOTA1\tNOTA2\tMÉDIA\t-alunos reprovados"<<endl;
	for (i=0; i<5; i++)
	{
		if (media[i]<6)
		{
			cout<<nome[i]<<"\t"<<nota1[i]<<"\t"<<nota2[i]<<"\t"<<media[i]<<endl;
		}
	}
	
	
}
	
