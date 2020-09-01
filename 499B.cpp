#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	string x,y;
	cin >> n >> m;
	vector< pair<string,string> > A;
	vector<string> B;
	for(int i=0;i<m;i++){
		cin >> x >> y;
		A.push_back(make_pair(x,y));
	}
	
	for(int i=0;i<n;i++){
		cin >> x;
		B.push_back(x);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(B[i]==A[j].first){
				if(A[j].first.length()>A[j].second.length())
				cout << A[j].second << " ";
				else
				cout << A[j].first << " ";
			}
			else
			continue;
		}
	}
	
return 0;
}
