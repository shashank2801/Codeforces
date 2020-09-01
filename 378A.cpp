#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,countA=0,countB=0,draw=0;
	cin >> a >> b;
	for(int i=1;i<7;i++){
		if(abs(i-a)>abs(i-b))
		countB++;
		else if(abs(i-a)<abs(i-b))
		countA++;
		else
		draw++;
	}
	
	cout << countA << " " << draw << " " << countB;
return 0;
}
