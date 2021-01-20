#include<iostream>
#include<stack>

using namespace std;
                                                //empty() retorna 1 se pilha estiver vazia
                                                //0 se a pilha tiver pelo menos 1 elemento
int main()
{
	stack<int> x;
	x.push(1); // insere elemento no topo da pilha
	x.push(2);
	x.push(3);
	x.push(5);
	cout << "\nA qtd de elem da pilha e " << x.size(); // retorna a quantidade de elementos
	cout << "\nO elemento do topo de x e " << x.top(); // retorna o elemento do topo
	x.pop(); // remove o elemento do topo da pilha
	cout << "\nO elemento do topo da pilha e " << x.top();
	cout << "\nA qtd de ementos da pilha e " << x.size(); // retorna a quantidade de elementos
	cout << "\n";
	while(!x.empty())
	{
		cout << x.top() << "\n";
		x.pop();
	}
	return 0;	
}
