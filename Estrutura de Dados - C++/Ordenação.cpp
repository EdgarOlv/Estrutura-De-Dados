#include<iostream>

using namespace std;

int main()
{
	int data[5],temp;
	for(int a=0;a<5;a++)
	{
		cout << "\nDigite um numero inteiro: ";
		cin >> data[a];
	}
	cout << "\nEntrando na ordenacao... \n";
	for(int i=0; i<4;i++){
		for(int j=4;j>i;j--)
			if(data[j]<data[j-1])
			{	
				temp=data[j];
				data[j]=data[j-1];
				data[j-1]=temp;
			}
		}
			cout << "\nTerminou... ";
	for(int a=0;a<5;a++)
		cout << data[a] << " ";
	cout << "\n\n";
	return 0;	
}
