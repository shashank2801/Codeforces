#include<iostream>

using namespace std;

int main(){
	long long n,m,k_min,k_max;
	cin>> n>> m;
		k_max = (n-m+1)*(n-m)/2; //maximum ke lie jitne m hai usse ek kam wale ko 1-1 dedenge aur aakhiri wale ka nc2 nikaal lenge
		
		if(n%m==0)
		k_min = (n/m*(n/m-1))/2 * m; // ye divide horhe hai... to ek ka bnayenge aur fir m se multiply
		
		else{
		long long x = n/m;
		k_min = (x*(x-1))/2 * (m-(n%m));
        k_min +=(((x+1)*x)/2)*(n%m);
    	}
	
	cout << k_min << " " << k_max;
	
return 0;
}
