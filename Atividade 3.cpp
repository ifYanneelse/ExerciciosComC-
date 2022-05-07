/*
Faça um programa para receber o nome de N pessoas, 
onde N deve ser lido no início do programa. 
Depois, organize a relação de modo que fique ordenada alfabeticamente.
*/

#include<iostream>

using namespace std;
main()
{

	setlocale(LC_ALL, "portuguese");
	int N, i, j;
	cout<<"Digite o número de pessoas desejado: ";cin>>N;

	string nome[N], nomeaux;
	
	// entrada	 	   
	for (i=0; i<N; i++)
	{
		cout<<"Nome da "<<i+1<<"º pessoa: ";cin>>nome[i];
	}

	// processo de classifica��o: m�todo da bolha
	for (j=0; j<N-1; j++)
	{
		for (i=0; i<N-1-j; i++)
		{
	 		if ( nome[i] > nome[ i+1] )
     		  {
     		  	nomeaux = nome[i];
				nome[i] = nome[i+1];
				nome[i+1] = nomeaux;
	  		 }
	   }
	}

	// sa�da
	cout<<endl<<"Relação ordenada: "<<endl;
	for (i=0;i<N;i++)
	{
	 cout<<i+1<<" - "<<nome[i]<<endl;
	}
	
}


