#include <iostream>
using namespace std;

main()
{
	setlocale(LC_ALL,"portuguese");
	
	string nome;
	int tipo, valor_acre;
	float area, custo;
	
	cout<<"Nome do Fazendeiro: "; cin>>nome;
	while (nome!="XXX" and nome!="xxx")
	{
	
	/*	
		do {
			cout<<"Tipo de Pulverização: ";cin>>tipo;
			if (tipo!=1 and tipo!=2 && tipo!=3 and tipo!=4)
				cout<<"Tipo inválido!!! Digite 1, 2, 3 ou 4."<<endl;
		} while (tipo!=1 and tipo!=2 && tipo!=3 and tipo!=4);
	*/	

		cout<<"Tipo de Pulverização | Digite 1, 2, 3 ou 4: ";cin>>tipo;
		while (tipo!=1 and tipo!=2 && tipo!=3 and tipo!=4)
		{
			cout<<"Tipo inválido!!! Digite 1, 2, 3 ou 4."<<endl;
			cout<<"Tipo de Pulverização | Digite 1, 2, 3 ou 4: ";cin>>tipo;
		}
			
		cout<<"Tamanho da área : ";cin>>area;
	
		if (tipo==1) valor_acre=50;
		else if (tipo==2) valor_acre=90;
		else if (tipo==3) valor_acre=120;
		else valor_acre=170;
	
		custo=valor_acre * area;
	
		cout<<"\nO fazendeiro "<<nome<<" terá um custo de R$"<<custo<<".\n"<<endl;
		
		cout<<endl<<"Nome do Fazendeiro: ";cin>>nome;
	}
		
}
