#include<iostream>

using namespace std;

int main(){
	int n,a,b,flag=0;
	cin >> n >> a;
	int A[a],C[n+1]={};
	for(int i=1;i<=a;i++){
	cin >> A[i];
	C[A[i]]++;
	}
	
	cin >> b;
	int B[b];
	for(int i=1;i<=b;i++){
	cin >> B[i];
	C[B[i]]++;
	}
	
	for(int i=1;i<=n;i++){
	if(C[i] == 0)
	flag=1;
	}
	
	if(flag==1)
	cout << "Oh, my keyboard!" << endl;
	else
	cout << "I become the guy." << endl;
	
return 0;
	
}
