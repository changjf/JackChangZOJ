//ZOJ 2886 by JackChang
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
	int n = 0;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		string str;
		cin >> str;
		char ch = str[0];
		int cnt = 0;
		for(int j = 0; j < str.size(); ++j)
		{
			if(ch == str[j])
			{
				cnt++;
				if(j == str.size() - 1)
					cout << cnt << str[j];
			}
			else
			{
				cout << cnt << ch;
				ch = str[j];
				cnt = 1;
				if(j == str.size() - 1)
				{
					cout << cnt << ch;
				}
			}
		}
		cout << endl;
	}
	return 0;
}
