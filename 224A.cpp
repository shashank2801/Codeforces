#include<iostream>
#include<cmath>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b>> c;
	int x,y,z;
	x = sqrt((a*b)/c);
	y = sqrt((a*c)/b);
	z = sqrt((b*c)/a);
	int ans = 4*(x+y+z);
	//cout << x << y << z;
	cout << ans << endl;
return 0;
}
