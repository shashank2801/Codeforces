#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	string s1,s2,s3;
	cin >> s1 >> s2>> s3;
	s1 = s1+s2;
	sort(s1.begin(),s1.end());
	sort(s3.begin(),s3.end());
	if(s1.compare(s3) == 0)
	cout << "YES" << endl;
	else
	cout << "NO" << endl;
	
return 0;
	
}
