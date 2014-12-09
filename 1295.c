//ZOJ 1295 by JackChang
#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{
	string str;
	char cstr[80];
	int n;
	cin >> n;
	getchar();
	for (int i = 0; i < n; ++i)
	{
		cin.getline(cstr, sizeof(cstr));
		str = cstr;
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
	return 0;
	
}
