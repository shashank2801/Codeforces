#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	pair<int,int> a[n];
	int count[4]={0,0,0,0};
	 for(int i=0;i<n;i++){
	 	cin >> a[i].first;
	 	a[i].second = i+1;
	 }
	 
	 sort(a,a+n);
	 
	 for(int i=0;i<n;i++)
	 count[a[i].first]++;
	 
	 sort(count,count+4);
	// cout << count[1] << count[2] << count[3] << endl;
	 if(count[1]==0 || count[2]==0 || count[3]==0)
	 {
	 	cout << 0 << endl;
	 	return 0;
	 }
	 else{
	 cout << count[1] << endl;
	 
	 while(count[1]--){
	 	for(int i=0;i<n;i++){
	 		if(a[i].first==1)
	 		{
	 			cout << a[i].second << " ";
	 			a[i].first = 0;
	 			break;
			 }
		}
		for(int i=0;i<n;i++){
	 		if(a[i].first==2)
	 		{
	 			cout << a[i].second << " ";
	 			a[i].first = 0;
	 			break;
			 }
		}
			 
		for(int i=0;i<n;i++){
	 		if(a[i].first==3)
	 		{
	 			cout << a[i].second;
	 			a[i].first = 0;
	 			break;
			 }
		}
		cout << endl;
		
		 }
	}
	 	
return 0;
}
