/*
Faça um programa para gerar em um vetor a sequência de Fibonacci com N termos, 
onde N é lido no inicio do programa.
0, 1, 1, 2, 3, 5, 8, 13, 21, ......
*/

#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL, "portuguese");
	
	int N;
	cout<<"Digite a qtidade de termos da Seq. de Fibonacci a ser gerada: ";
	cin>>N;
	
	int Fib[N], i;
	
	Fib[0] = 0; Fib[1] = 1;
	
	for (i=2; i<N; i++)
	{
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	
	for (i=0; i<N; i++)
	{
		cout<<i+1<<": "<<Fib[i]<<endl;
	}
	
}
