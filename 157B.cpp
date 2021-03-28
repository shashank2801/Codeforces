#include<iostream>
#include<math.h>
#include<algorithm>

#define M_PI 3.1415926536

using namespace std;

int main(){
	int n;
	cin >> n;
	int A[n];
	
	for(int i=0;i<n;i++)
		cin >> A[i];
		
	sort(A,A+n);
		
	if(n==1){
		cout << M_PI*pow(A[0],2);
		return 0;
	}
	
	else if(n%2==0){
		int radius = 0;
		for(int i=n-1;i>=0;i--){
			if(i%2!=0)
				radius+= pow(A[i],2);
			else
				radius-=pow(A[i],2);
		}
		
		cout << M_PI*radius;
		return 0;
	}
	
	else{
		int radius = 0;
		for(int i=n-1;i>=0;i--){
			if(i%2==0)
				radius+= pow(A[i],2);
			else
				radius-=pow(A[i],2);
		}
		
		cout << M_PI*radius;
		return 0;	
	}	
}
