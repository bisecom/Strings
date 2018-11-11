
//Part of str copied to another str;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{

	int m, n;
	cout << "Lets create a str and pass part of sentence to another str..!" << endl;
	char init_str[256];
	char *p_init_str = init_str;
	puts("Input a sentance:");
	gets_s(init_str);
	cout << "Entered sentance to the first str:" << endl;
	for (int k = 0; k < strlen(init_str); k++)
	{
		cout << *(init_str + k) << " ";
	}
	cout << "\nInput m and n:" << endl;
	for (;;)
	{
		cout << "\nInput m:" << endl;
		cin >> m;
		cout << "\nInput n:" << endl;
		cin >> n;
		if (m == n || m>n)
		{
			cout << "Attn: m can not be equal or less then n!" << endl;
		}
		else break;
	}
	char *int_str_res = new char[n - m + 2];

	int counter = 0;
	for (int k = 0; k<(n - m + 1); k++, counter++)
	{
		*(int_str_res + k) = *(init_str + m - 1 + counter);
	}
	cout << "Entered sentance in the resulting str between m & n:" << endl;
	for (int k = 0; k<(n - m + 1); k++)
		cout << *(int_str_res + k) << " ";
	cout << endl;
	delete[] int_str_res;
	system("pause");
	return 0;
}
