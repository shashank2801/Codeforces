#include<iostream>

using namespace std;

int main(){
	long int n,m;
	cin >> n >> m;
	
	
	int len = m+n;
	int arr[n+m] = {0};
	
//	for(int i=0;i<m+n;i++)
//		cout << arr[i];
//		
//	cout << "\n";
	
	if(m<2 || m/n > 3){
		cout << -1 << "\n";
		return 0;
	}
	
	//cout << "yaha aagye";
	arr[0] = 1;
	arr[m+n-1] = 1;
	m-=2;
//	
//		for(int i=0;i<len;i++)
//		cout << arr[i];
//		
//	cout << "\n";
	
	
	
	int counter = 1;
	for(long int i=1;i<len-1;i++){
		if(counter<2 && m!=0){
			//cout << i << " " << counter << "\n";
			arr[i] = 1;
			counter++;
			m--;
			continue;
		}
		
		if(counter == 2 || (counter<2 && m==0)){
			counter=0;
			n--;
			continue;
		}
	}
	
	for(int i=0;i<len;i++)
		cout << arr[i];
		

return 0;
	
}
