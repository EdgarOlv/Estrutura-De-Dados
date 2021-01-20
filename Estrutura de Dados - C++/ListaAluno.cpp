#include<iostream>
#include<string>
#include<list>

using namespace std;

class Aluno
{
	private:
		string nome,ra,sem;
	public:
		void set_dados()
		{
			cout << "\nNome: ";
			getline(cin,nome);
			cout << "\nRa: ";
			getline(cin,ra);
			cout << "\nSemestre: ";
			getline(cin,sem);
		}
		void print_dados()
		{
			cout << "\nNome: " << nome;
			cout << "\nRa: " << ra;
			cout << "\nSemestre: " << sem;
			cout << "\n\n";
		}
		string ret_nome()
		{
			return nome;
		}
};
int main()
{
	list<Aluno> Escola;
	list<string> nomes;
	Aluno A;
	char d;
	do{
		A.set_dados();
		Escola.push_back(A);
		nomes.push_back(A.ret_nome());
		cout << "\nOutro? ";
		cin >> d;
		cin.ignore();
	}while(d=='s');
	nomes.sort(); // ordenação
	while(!nomes.empty())
	{
		if(Escola.front().ret_nome()==nomes.front())
		{
			Escola.front().print_dados();
			Escola.pop_front();
			nomes.pop_front();
		}
		else{
			Escola.push_back(Escola.front());
			Escola.pop_front();
		}
	}
	cout << "\n\n";
	return 0;
}
