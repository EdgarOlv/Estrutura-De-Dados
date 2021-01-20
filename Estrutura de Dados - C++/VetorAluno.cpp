#include<iostream>
#include<vector>
#include<string>

using namespace std;

class Aluno
{
	private:
		string nome,ra,semestre;
	public:
		~Aluno()
		{
		}
		void set_dados()
		{
			cout << "\nNome do aluno: ";
			getline(cin,nome);
			cout << "\nRA do aluno: ";
			getline(cin,ra);
			cout << "\nSemestre do aluno: ";
			getline(cin,semestre);
		}
		void print_dados()
		{
			cout << "\nNome do aluno: "<< nome;
			cout << "\nRA do aluno: "<< ra;
			cout << "\nSemestre do aluno: "<< semestre;
			cout << "\n\n";
		}
		string ret_nome()
		{
			return nome;
		}
		string ret_ra()
		{
			return ra;
		}
		string ret_semestre()
		{
			return semestre;
		}
};
int main()
{
    vector<Aluno> X;
    Aluno A;
    string nomex,rax,semestrex;
    char d,resp;
    int op;
    do{
        cout << "\n==========Sistema de controle==========\n\n";
		cout << "\t\t<1> Cadastro\n";
		cout << "\t\t<2> Listagem\n";
		cout << "\t\t    Listagem por:\n";
		cout << "\t\t<3> Aluno\n";
		cout << "\t\t<4> RA\n";
		cout << "\t\t<5> Semestre\n\n";
		cout << "Selecao: ";
        cin >> op;
        cin.ignore();
        switch(op)
        {
		case 1:
	                do{
				A.set_dados();
				X.push_back(A);
				cout << "\nInserir outro?(s/n)";
				cin >> resp;
				cin.ignore();
              	 	}while(resp=='s');
		break;
		case 2:
	                for(int a=0;a<X.size();a++)
                    	X.at(a).print_dados();      
		break;    

		case 3:
			cout << "\nNome para pesquisar: ";
			getline(cin,nomex);
	                for(int a=0;a<X.size();a++){
				if(X.at(a).ret_nome()==nomex)
				X.at(a).print_dados();
			}	
		break;

		case 4:
	                cout << "\nRA para pesquisar: ";
			getline(cin,rax);
	                for(int a=0;a<X.size();a++){
				if(X.at(a).ret_ra()==rax)
				X.at(a).print_dados();
			}	
             
		break;

		case 5:
	                cout << "\nSemestre para pesquisar: ";
			getline(cin,semestrex);
	                for(int a=0;a<X.size();a++){
				if(X.at(a).ret_semestre()==semestrex)
				X.at(a).print_dados();
			}	
             
		break;
        }
        cout << "\nVoltar ao menu?(s/n) ";
        cin >> d;
    }while(d=='s');
    return 0;
}
