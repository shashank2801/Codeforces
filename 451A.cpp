#include<iostream>

using namespace std;

int main(){
	int n,m,chances;
	cin >> n >> m;
	if(n==m)
	chances = n;
	else if(n>m)
	chances = m;
	else
	chances = n;
	
	if(chances%2==0)
	cout << "Malvika";
	else
	cout << "Akshat";
	
return 0;
}
