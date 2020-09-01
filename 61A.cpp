#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string s1,s2;
	cin >> s1 >> s2;
	for(int i=0;i<s1.length();i++)
	{
		if(s1.at(i) == s2.at(i))
		cout << 0;
		else
		cout << 1;
	}
	
	return 0;
}
