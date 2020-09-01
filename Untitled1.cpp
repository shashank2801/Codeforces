#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	char ch = 'A';
	for(int i=1;i<=5;i++)
		{
			for(int j = 1;j<=(2*n+1);j++)
				{
				if(j<i)
				cout << " ";
				else if(j==i || j==(2*n+1)){
				cout << ch;
			}
			
				else if(j <=(n+i) && j>=6)
				cout << "#";
				else
				cout << "*";	
				}
			ch++;
			cout << endl;
		}
return 0;
}
