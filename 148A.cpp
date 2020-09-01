#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int k,l,m,n,d,i,j,x,count=0,flag;
	cin >> k >> l>> m>> n>> d;
	
	if(k>d && l>d && m>d && n>d)
	cout << 0 << endl;
	
	else if(k== 1 || l==1 || m==1 || n==1)
	cout << d << endl;
	
	
	else
	{
	int min = std::min(k,std::min(l,std::min(m,n)));
	count = count + min-1;
	 for(i=min;i<=d;i++)
	 {
	 if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
		count++;
	 }
	 //cout << count << endl;
	cout << d-count << endl;
	}
return 0;
}
