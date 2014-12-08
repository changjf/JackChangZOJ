//这道题并没有AC，这只是一个思路，以后有想法了就继续做完
//设定0为街道，1围墙，2为碉堡
#include <iostream>
using namespace std;

//globals
int map[4][4];
int n, res;

bool judge(const int &x, const int &y)
{
	int i;
	if(map[x][y])	return false;
	//up
	for(i = x - 1; i >= 0; --i)
	{
		if(map[i][y] == 2)	return false;
		if(map[i][y] == 1)	break;
	}
	//down
	for(i = x + 1; i <= n; ++i)
	{
		if(map[i][y] == 2)	return false;
		if(map[i][y] == 1)	break;
	}
	//left
	for(i = y - 1; i >= 0; --i)
	{
		if(map[x][i] == 2)	return false;
		if(map[x][i] == 1)	break;
	}
	//right
	for(i = y + 1; i <= n; ++i)
	{
		if(map[x][i] == 2)	return false;
		if(map[x][i] == 1)	break;
	}
	return true;
}
//这道题并没有AC，这只是一个思路，以后有想法了就继续做完
void DFS(int depth)
{
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			if(judge(i, j))
			{
				map[i][j] = 2;
				DFS(depth + 1);
				map[i][j] = 0;
			}
		}
	}
	res = res > depth ? res : depth;
}


//这道题并没有AC，这只是一个思路，以后有想法了就继续做完

int main(int argc, char *argv[])
{
	while((cin >> n) && n)
	{
		for(int ii = 0; ii < n; ++ii)
		{
			for(int jj = 0; jj < n; ++jj)
			{
				cin >> map[ii][jj];
			}
		}
		DFS(0);
	}
	cout << res << endl;
	return 0;
}
//这道题并没有AC，这只是一个思路，以后有想法了就继续做完
