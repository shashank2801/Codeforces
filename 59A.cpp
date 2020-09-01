#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int main(){
	string str; 
	getline(cin, str);
	int small=0,capital=0;
	for(int i=0;i<str.length();i++)
	{
		if(str.at(i) >= 97 && str.at(i)<=122)
		small++;
		if(str.at(i)>=65 && str.at(i)<= 90)
		capital++;
	}
	if(small>capital || small == capital)
	transform(str.begin(), str.end(), str.begin(), ::tolower);
	else
	transform(str.begin(), str.end(), str.begin(), ::toupper);
	
	cout<<str<<endl;
	
	return 0;
	
}
