#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long int n,m,a,l,w;
	cin>>n>>m>>a;
	//row
	if(n%a==0)
	l = n/a;
	else
	l = n/a + 1;
	
	if(m%a==0)
	w = m/a;
	else
	w = m/a + 1;
	
	
//	if(l%a!=0)
//	l++;
//	if(w%a!=0)
//	w++;
//	
	cout << l*w << endl;

return 0;
}
