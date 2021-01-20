#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main()
{
	queue<string> F1,copia;
	char x;
	string n,nc;
	do{
		cout << "\nDigite um nome qualquer: ";
		getline(cin,n);
		F1.push(n);
		cout << "\nDeseja outro? ";
		cin >> x;
		cin.ignore();
	}while(x=='s');
	do{
		copia=F1;
		cout << copia.back();
		cout << "\nDigite um nome que deseja consultar: ";
		getline(cin,nc);
		while(!copia.empty()){
			if(copia.front()==nc)
				cout << " Achei! "<< copia.front();
			copia.pop();
		}

		cout << "\nDeseja consultar outro? ";
		cin >> x;
		cin.ignore();
	}while(x=='s');
	cout << "\n\n";
	return 0;
}

