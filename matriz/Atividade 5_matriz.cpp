/*
Ler duas matrizes A e B de números inteiros com N linhas e N colunas, 
onde N deve ser lido no início do programa.
Construir uma matriz C de mesma dimensão, sendo que C é formada pelo 
produto dos elementos da matriz A e B.
Apresentar a matriz C.
*/

#include<iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int N;
	cout<<"Qual a dimensão das matrizes? "; cin>>N;
	
	int A[N][N], B[N][N], C[N][N], l, c;
		
	cout<<endl<<"Entrada da Matriz A "<<endl;
	for(l=0; l<N; l++)
	{
		for(c=0; c<N; c++)
		{
			cout<<"Digite um valor para a posição ["<<l<<"]["<<c<<"]: "; 
			cin>>A[l][c];
		}
	}
	cout<<endl;
		
	cout<<"Entrada da Matriz B "<<endl;
	for(l=0; l<N; l++)
	{
		for(c=0; c<N; c++)
		{
			cout<<"Digite um valor para a posição ["<<l<<"]["<<c<<"]: "; 
			cin>>B[l][c];
		}
	}
	cout<<endl;
	
	cout<<"Resultado: Matriz C "<<endl;
	for(l=0; l<N; l++)
	{
		for(c=0; c<N; c++)
		{
			C[l][c] = A[l][c] * B[l][c];
			cout<<C[l][c]<<"\t";
		}
		cout<<endl;
	}
	cout<<endl;
}
