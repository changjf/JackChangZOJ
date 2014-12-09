//ZOJ 1251 by JackChang
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
	int n, cnt = 0;
	while (cin >> n && n)
	{
		cnt ++;
		vector<int > v;
		int hi = 0, sum = 0, average = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> hi;
			v.push_back(hi);
			sum += hi;
		}
		average = sum / n;
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (v[i] < average)
				count = count + (average - v[i]);
		}
		cout << "Set #" << cnt << endl;
		cout << "The minimum number of moves is " << count << "." << endl << endl;
	}
	return 0;
}
