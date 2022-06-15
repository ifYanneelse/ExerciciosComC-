// Ler 5 números e apresentá-los.

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int V[5], i;
	
	for (i=0; i<5; i++) // entrada de dados no vetor V com 5 posi��es
	{
		cout<<"Digite o "<<i+1<<"º valor: "; cin>>V[i];
	}
	
	cout<<"\n";
	for (i=0; i<5; i++) // apresentar todos os dados do vetor V
	{
		cout<<V[i]<<"\t";
	}
	
}
