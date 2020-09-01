#include<iostream>
using namespace std;

int main(){
	int n,A[100001],m,x,y;
	long long int Vasya(0),Petya(0);
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> x;
		A[x] = i;
	}
	cin >> m;
	while(m--)
	{
		cin >> y;
		Vasya = Vasya + A[y];
		Petya = Petya + (n + 1 - A[y]);
	}
	cout << Vasya << " " << Petya << endl;
	
return 0;
}
