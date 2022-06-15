/*
Faça um programa que leia 3 números inteiros e os imprima em ordem crescente.
*/

#include<iostream>
using namespace std;
main()
{
	setlocale(LC_ALL,"portuguese");
	
	int N1, N2, N3;
	
	cout<<"Digite o primeiro número: ";
	cin>>N1;
	cout<<"Digite o segundo  número: ";
	cin>>N2;
	cout<<"Digite o terceiro número: ";
	cin>>N3;
	
	if (N1<N2 && N2<N3)
	{
		cout<<N1<<", "<<N2<<", "<<N3<<endl;
	}
	else 
	{
		if (N1<=N3 && N3<=N2)
			{
				cout<<N1<<","<<N3<<","<<N2<<endl;
			}
			else 
			{
				if (N2<=N1 && N1<=N3)
				{
					cout<<N2<<","<<N1<<","<<N3<<endl;
				}
					else 
					{
						if (N2<=N3 && N3<=N1)
						{
							cout<<N2<<","<<N3<<","<<N1<<endl;
						}
							else 
							{
								if (N3<=N1 && N1<=N2)
								{
									cout<<N3<<","<<N1<<","<<N2<<endl;
								}
									else 
									{
										if (N3<=N2 && N2<=N1)
										{
											cout<<N3<<","<<N2<<","<<N1<<endl;
										}
			
									}
							}
					}
			}		
	}

		
}


