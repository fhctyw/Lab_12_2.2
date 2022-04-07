#include <iostream>
#include <Windows.h>
#include "String.h"
using namespace std;


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	String s1;
	String s2;
	cin >> s1 >> s2;

	cout << s1 << " + " << s2 << " = " << s1 + s2 << endl;
	cout << s1 << " - " << s2 << " = " << s1 - s2 << endl;
	cout << s1 << " * " << s2 << " = " << s1 * s2 << endl;
	
	return 0l;
}