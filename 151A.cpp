#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n,k,l,c,d,p,cd,np,nl;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	cd = c*d;
	int first = (k*l)/nl;
	//cout << first << endl;
	int second = p/np;
	//cout << second << endl;
	int ans = min(first,min(second,cd))/n;
	cout << ans << endl;
	
return 0;
}
