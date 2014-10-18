/* 
 * File:   main.cpp
 * Author: Nuno Lemos
 *
 * Created on 17 de Outubro de 2014, 20:58
 */

#include <cstdlib>
#include "Armazem.h"

using namespace std;

/*
 * 
 */

Armazem *armazem = new Armazem();

char mostramenu()
{
	string input = "";

	cout << "\n -----------------------------------------------------------------------";
    cout << "\n \t\t APLICACAO PARA A GESTAO DE ARMAZENS";
    cout << "\n -----------------------------------------------------------------------\n";
    cout << "\n";
	cout << "************************** MENU **************************" << endl;
	cout << "\n 1 - Gerar Armazém" << endl;
	cout << "\n 2 - Listar Armazens" << endl;
	cout << "\n 3 - Listar Depósitos"<< endl;
	cout << "\n 4 - Listar Paletes."<< endl;
	cout << "\n 5 - Inserir Produto"<< endl;
	cout << "\n 6 - Armazenar Produto"<< endl;
	cout << "\n 7 - Expedir Produto"<< endl;
	cout << "\n 0 - Sair" << endl;
	cout << "\n" << endl;

	char opcao  = {0};
	while (true) {
		cout << "\nPor favor introduza a sua opção: ";
		getline(cin, input);
		if (input.length() == 1) {
			opcao = input[0];
			break;
		}
		cout << "\nCaracter invalido, por favor introduza outro valor." << endl;
	}
	return opcao;
}

void menu (Armazem& armazem)
  {
	  char opcao;
	  do {
		   
            opcao = mostramenu();
            switch (opcao) 
			{
                case '1':
			system("cls");
                        cout<<"Gerar Armazém\n\n"<<endl;
                        //armazem.gerarArmazem();
			cout << "\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
                case '2':
			system("cls");
			cout<<"Listar Armazém\n\n"<<endl;
			//armazem.listarArmazens();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
		case '3':
			system("cls");
			cout<<"Listar Depósitos\n\n"<<endl;
			//armazem.listarDepositos();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
		case '4':
			system("cls");
			cout<<"Listar Paletes\n\n"<<endl;
			//armazem.listarPaletes();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;			
		case '5':
			system("cls");
			cout<<"Inserir Produtos\n\n"<<endl;
			//armazem.inserirProdutos();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
		case '6':
			system("cls");
			cout<<"Armazenar Produto\n\n"<<endl;
			//armazem.armazenarProduto();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
		case '7':
			system("cls");
			cout<<"Expedir Produto\n\n"<<endl;
			//armazem.expedirProduto();
			cout<<"\n\n\nPrima enter para voltar ao menu..." << endl;
			cin.get();
                        break;
		
			}
	  } while (opcao != '0');
}


void main()
{
	Armazem armazem;
	menu(armazem);
	system("cls");
	cin.get();
}
