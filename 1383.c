//ZOJ 1383 by JackChang
//#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{
//	ifstream cin("cin.txt");
	vector <int> v;
	int n = 0, a = 0;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> a;
		v.clear();
		for(int j = a; j; j = j / 2)		//GET BINARY NUMBERS
			v.push_back(j % 2? 1: 0);	//PUSH IN VECTOR
		int p = 0;		//IS FIRST PRINT?
		for(int k = 0; k < v.size(); ++k)	//K IS THE POSITION OF '1'
		{
			if(v[k] == 1)
			{
				if(p == 0)
					cout << k;
				else 
					cout << ' ' << k;
				p = 1;
			}
		}
		cout << endl;
	}
	return 0;
}
