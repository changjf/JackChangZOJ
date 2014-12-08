//ZOJ 2947 by JackChang

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{

	int n = 0;
	cin >> n;
	for(int index = 0; index < n; ++index)
	{
		//Main Loop
		string str, astr1 = "", astr2 = "";
		int m;
		cin >> m;
		for(int i = 0; i < m; ++i)
		{
			cin >> str;
			astr1 += str[0];
		}
		int k;
		cin >> k;
		for(int j = 0; j < k; ++j)
		{
			cin >> str;
			astr2 += str[0];
		}

		if(astr1.compare(astr2) == 0)
			cout << "SAME" << endl;
		else
			cout << "DIFFERENT" << endl;
		astr1 = "";
		astr2 = "";
	}
	return 0;
}
