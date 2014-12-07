//ZOJ 2478 by JackChang

#include <iostream>
//#include <fstream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
//	ifstream cin("cin.txt");
	string s, t;
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> s;
		int c = 0;
		t = s[0];
		int temp = 0;
		for(int j = 0; j < s.size(); ++j)
		{
			if(s[j] == t[0])	//每个子串第一个字母是否和这个以及下一个相同
			{
				temp++;		    //相同则加一
				if(j == s.size() - 1)	//最后一个直接输出
				{
					if(temp == 1)
						cout << t[0];
					else
						cout << temp << t[0];
				}
			}
			else
			{
				if(temp == 1)	//仅出现一次
					cout << t[0];
				else
					cout << temp << t[0];
				t[0] = s[j];	//取下一个子串的首字符
				temp = 1;
				if(j == s.size() - 1)
				{
					if(temp == 1)
						cout << t[0];
					else
						cout << temp << t[0];
				}
			}
		}
		cout << endl;
		s = "";
	}
	return 0;
}
//此程序参考而来，应该可以做的更好
