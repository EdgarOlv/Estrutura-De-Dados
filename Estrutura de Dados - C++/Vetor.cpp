#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> v1,v2;
	v1.push_back(2);
	v1.push_back(4);
	v1.push_back(6);
	v1.push_back(8);
	for(int a=0;a<v1.size();a++)
		cout << v1.at(a) << " ";
	v1.insert(v1.begin()+3,10);					 // adiciona o item 10 na 3 terceira posição contando do 0
	cout << "\n\n";
	for(int a=0;a<v1.size();a++)
		cout << v1.at(a) << " ";
	cout << "\n\n";
	v1.erase(v1.begin()+1);	 					 // apaga o item 1 contando inicialmente do 0
	for(int a=0;a<v1.size();a++)
		cout << v1.at(a) << " ";
	cout << "\n\n=======================\n\n";
	v2.push_back(100);  					   	 // inserindo 100 no vetor v2
	v1.swap(v2);								 //trocando conteudo de v1 e v2
	for(int a=0;a<v1.size();a++)
		cout << v1.at(a) << " ";
	cout << "\n";
	for(int a=0;a<v2.size();a++)
		cout << v2.at(a) << " ";
	v1.clear();		 							 // apagando todo conteudo de v1
	cout << "\n----------------\n";
	v2[1]=20;       							 // inserindo 20 na posição 1 do vetor v2
	for(int a=0;a<v1.size();a++)
		cout << v1.at(a) << " ";
	cout << "\n";
	for(int a=0;a<v2.size();a++)
		cout << v2.at(a) << " ";	
	return 0;
}
