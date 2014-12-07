//cin.get() 一次读入一个字符
#include <iostream>
//#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
//	ifstream cin("cin.txt");
	char ch;
	int i = 1;
	int sum = 0;
	while(cin.get(ch))
	{
		if(ch == '#')	//END OF INPUT
			break;
		if(ch != '\n')	//NOT END OF LINE
		{
			if(ch != ' ')	//NOT SPACE
				sum = sum + i*(ch- 64);	//NOT SPACE
			i++;
		}
		if(ch == '\n')	//END OF LINE
		{
			cout << sum << endl;
			sum = 0;	//RESET SUM AND I
			i = 1;
		}
	}
	return 0;
}



//cin.getline()一次读入一行字符
#include <iostream>
//#include <fstream>

using namespace std;

int main(int argc, char *argv[])	//use for Zhuangbility
{
//	ifstream cin("cin.txt");
	char ch[256];
	int sum = 0;
	while(cin.getline(ch, 256))		//GET ONE LINE CHARS
	{
		if(ch[0] == '#')			//# FOR BREAK
			break;
		//FORM 1 TO 256 !MUST '\0' NOT '\N'!!!!!!!!!!!!!!!
		for(int i = 0; ch[i] != '\0' && i <= 256; ++i)	
			if(ch[i] != ' ')
				sum = sum + (i + 1) * (ch[i] - 64);
		cout << sum << endl;
		sum = 0;

	}
	return 0;
}

