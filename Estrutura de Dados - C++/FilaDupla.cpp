#include <iostream>
#include <string>
#include <deque>
using namespace std;
class Paciente
{
	private:
		string nome, enfermidade;
		int idade;
	public:
		Paciente()
		{
			idade=0;
		}
		~Paciente()
		{
		}
		void set_dados()
		{
			cout<<"\nInsira o nome do Paciente: ";
			getline(cin,nome);
			cout<<"\Insira a enfermidade do Paciente: ";
			getline(cin,enfermidade);
			cout<<"\nInsira a idade do Paciente: ";
			cin>>idade;
			cin.ignore();
		}
		void print_dados()
		{
			 cout<<"\nNome: " << nome;
			 cout<<"\nEnfermidade: " << enfermidade;
			 cout<<"\nIdade: " << idade;
			 cout<<"\n";
		}
		int ret_idade()
		{
			return idade;
		}
};
int main ()
 {
 	deque<Paciente> Atende, Aguarde;
 	Paciente Temp;
 	char r;
 	do{
 		Temp.set_dados();
 		if(Temp.ret_idade()<65)
 			Atende.push_back(Temp);
 		else
 			Aguarde.push_back(Temp);
 		cout<<"\nDeseja realizar outro cadastro?";
 		cin>>r;
 	}while(r=='s');
 	while(!Aguarde.empty())
 	{
 		Atende.push_front(Aguarde.back());
 		Aguarde.pop_back();
 	}
 	while(!Atende.empty())
 	{
 		Atende.front().print_dados();
 		Atende.pop_front();
 	}
 	return 0;
 }
