#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,n;
	cin >> s >> n;
	int flag=1;
	pair<int,int> a[1000];
	for(int i=0;i<n;i++)
		cin >> a[i].first >> a[i].second;
		
	sort(a,a+n);
	
		for(int i=0;i<n;i++)
		{
			if(s<=a[i].first)
			{
				flag=0;
				break;
			}
			else
			{
				s+= a[i].second;
			}
		
			
		}		
		
	if(flag==1)
	cout << "YES" << endl;
	else 
	cout << "NO" << endl; 
	
return 0;
}
