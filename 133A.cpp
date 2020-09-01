#include<iostream>
#include<string.h>
using namespace std;

int main(){
	string p;
	cin >> p;
	int flag = 0;
	for(int i=0;i<p.length();i++)
	{
		if(p.at(i) == 'H' || p.at(i)=='Q' || p.at(i) == '9')
		{
			flag=1;
			break;
		}
	}
	if(flag == 1)
	cout << "YES" << endl;
	else
	cout << "NO" << endl;
	
return 0;
}
