//ZOJ 2932 by JackChang
#include <iostream>
#include <string>
#include <memory.h>
using namespace std;

int main(int argc, char *argv[])
{
	char st[80];
	string str;
	memset(st, '\0', sizeof(st));
	while(cin.getline(st, sizeof(st)) && st[0] != '#')
	{
		str = st;
		for(int i = 0; i < str.size(); ++i)
		{
			switch(str[i])
			{
			case ' ':
				cout << "%20";	break;
			case '!':
				cout << "%21";	break;
			case '$':
				cout << "%24";	break;
			case '%':
				cout << "%25";	break;
			case '(':
				cout << "%28";	break;
			case ')':
				cout << "%29";	break;
			case  '*':
				cout << "%2a";	break;
			default:
				cout << str[i];
			}
		}
		cout << endl;
		memset(st, '\0', sizeof(st));
	}
	return 0;
}
