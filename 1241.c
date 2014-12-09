//ZOJ 1241 by JackChang
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

//未知的那个边，case if a < 0，unknown = 'a' else if b < 0 unknown = 'b' else unknown = 'c'
//char getunknown(vector<int > v);
//if (c < a || c < b) && a != -1 :		cout << "Impossable" << endl;
//else c = sqrt(a ^ 2 + b ^ 2)
//
//
int main(int argc, char *argv[])
{
	cout.precision(3);
	vector<int > v;
	int a, b, c, n = 0;
	while (cin >> a >> b >> c)
	{
		n++;
		if (a == 0 && b == 0 && c == 0)		break;
		if (a == -1)
		{
			if (c * c - b * b <= 0)
			{
				cout << "Triangle #" << n << endl;
				cout << "Impossible." << endl << endl;
			}
			else
			{
				cout << "Triangle #" << n << endl;
				cout << "a = " << fixed << pow(c * c - b * b, .5) << endl << endl;
			}
		}
		else if (b == -1)
		{
			if (c * c - a * a <= 0)
			{
				cout << "Triangle #" << n << endl;
				cout << "Impossible." << endl << endl;
			}
			else
			{
				cout << "Triangle #" << n << endl;
				cout << "b = " << fixed << pow(c * c - a * a, .5) << endl << endl;
			}
		}
		else if (c == -1)
		{
			cout << "Triangle #" << n << endl;
			cout << "c = " << fixed << pow(a * a +  b* b, .5) << endl << endl;
		}
	}
	return 0;
}
