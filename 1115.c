//ZOJ 1115 by JackChang
#include <iostream>
#include <string>
using namespace std;
int main(int argc, char *argv[])
{
	string s;
	int sum;
	while (cin >> s)
	{
		if (s == "0")		break;
		sum = 0;
		for (unsigned int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '1')			sum += 1;
			else if (s[i] == '2')	sum += 2;
			else if (s[i] == '3')	sum += 3;
			else if (s[i] == '4')	sum += 4;
			else if (s[i] == '5')	sum += 5;
			else if (s[i] == '6')	sum += 6;
			else if (s[i] == '7')	sum += 7;
			else if (s[i] == '8')	sum += 8;
			else if (s[i] == '9')	sum += 9;
		}
		while (sum >= 10)
			sum = sum / 10 + sum % 10;
		cout << sum << endl;
	}
	return 0;
}
