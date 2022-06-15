// entendo as variáveis globais

#include<iostream>
using namespace std;

int valor; 		// a vari�vel valor ser� GLOBAL

void teste1()
{
	int x=5;		// a vari�vel x ser� LOCAL no teste1
	cout<<"Este é o valor mostrado pelo void teste1: "<<valor<<endl;
	cout<<"O valor de X no teste1 é "<<x<<endl;
}

void teste2()
{
	int x=10;		// a vari�vel x ser� LOCAL no teste2
	cout<<"Este é o valor mostrado pelo void teste2: "<<valor<<endl;
	cout<<"O valor de X no teste2 é "<<x<<endl;
}


main()
{
	setlocale(LC_ALL,"portuguese");
	
	cout<<"Digite um valor: "; cin>>valor;	
	cout<<"Este é o valor "<<valor<<endl;
	teste1();
	teste2();
}
