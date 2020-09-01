#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	string str1,str2,str3;
	cin >> str1 >> str3;
//	int i,j;
//	for(i=0;i<str1.length();i++)
//	str2[i] = str1[str1.length()-1-i];

	reverse(str1.begin(),str1.end());
	
	int x = str3.compare(str1);
	if(x==0)
	cout << "YES";
	else
	cout << "NO";
}
