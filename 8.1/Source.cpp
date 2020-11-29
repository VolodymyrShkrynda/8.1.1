//Ітераційний

#include <iostream>
using namespace std;
int Count(char* str)
{
	int k = 0;
	for (int i = 0; i<100; i++)
		if (str[i] == '+'|| str[i] == '-'||str[i] == '=')
			k++;
			
	return k;

}

void Replacing(char* str)
{
	for (int i = 0; i < 100; i++)
		if (str[i] == '+' || str[i] == '-' || str[i] == '=')
			cout << "**";
		else
			cout << str[i];
}

int main()
{
	setlocale(LC_ALL, "Ukrainian");
	char str[100];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	cout << "Кiлькiсть потрiбних елементiв '-' '+' '='" << endl;
	cout << "k = " << Count(str) << endl;
	cout << "Змiнений рядок "<< endl;
	Replacing(str);
	cout << endl;

	
}
