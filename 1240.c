//ZOJ 1240 by JackChang
//#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[])	//ZHUANGBILITY
{
//	ifstream cin("cin.txt");
	
	int n;		//N CASES
	cin >> n;
	string str;
	for(int i = 0; i < n; ++i)	
	{
		cin >> str;
		for(int j = 0; j < str.length(); ++j)
		{
			if(str[j] != 'Z')	//IN THE LOOP AFTER 'Z' IS 'A'
				str[j] = str[j] + 1;
			else
				str[j] = 'A';	

		}
		cout << "String #" << i + 1 << endl << str <<
			endl << endl;
	}
	return 0;
}
