#include<iostream>
using namespace std;

void quadrado()
{    
    int lado, area;
    system("cls");
    cout<<"CÁLCULO DO QUADRADO"<<endl<<endl;
    cout<<"Digite o lado do quadrado: "; cin>>lado;
    area = lado * lado;
    cout<<"A área do quadrado é "<<area<<endl<<endl;
    system("pause");
}

void triangulo()
{    
    int base, altura, area;
    system("cls");
    cout<<"CÁLCULO DO TRIÂNGULO"<<endl<<endl;
    cout<<"Digite a base do triângulo  : "; cin>>base;
    cout<<"Digite a altura do triângulo: "; cin>>altura;
    area = (base * altura)/2;
    cout<<"A área do triângulo é "<<area<<endl<<endl;
    system("pause");
}

void circunferencia()
{    
    int raio;
	float area;
    system("cls");
    cout<<"CÁLCULO DA CIRCUNFERÊNCIA"<<endl<<endl;
    cout<<"Digite o raio da circunferência : "; cin>>raio;
    area = 3.14 * raio * raio; // 3.14 * pow(raio,2);
    cout<<"A área da circunferência é "<<area<<endl<<endl;
    system("pause");
}

void tela_abertura()
{
	system("cls");
	cout<<"GEOMETRIA PLANA"<<endl<<endl;
	cout<<"MENU PRINCIPAL"<<endl<<endl;
	cout<<"1-Quadrado"<<endl;
	cout<<"2-Triângulo"<<endl;
	cout<<"3-Circunferência"<<endl;
	cout<<"4-Sair"<<endl<<endl;
}

main()
{
	setlocale(LC_ALL,"portuguese");
	
	int op;
	
	do 
	{
		do {
			tela_abertura();
			cout<<"OPÇÃO => "; cin>>op;
			if (op<1 or op>4)
			{	cout<<"Opção inválida!!!"<<endl;
				system("pause");	
			}
		} while (op<1 or op>4);

		if (op==1) quadrado();				// chama o Quadrado
		else if (op==2) triangulo();		// chama o Tri�ngulo
		else if (op==3) circunferencia();	// chama a Circunfer�ncia
		else  cout<<"O programa será finalizado!"<<endl;
			
	} while (op!=4);
	
}



