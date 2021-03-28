#include<bits/stdc++.h>

using namespace std;

int main(){
	int p,q,l,r;
	cin >> p >> q >> l >> r;
	vector<pair<int,int> > A,B;
	int x,y;
	for(int i=0;i<p;i++){
		cin >> x >> y;
		A.push_back(make_pair(x,y));
	}
	
	for(int i=0;i<q;i++){
		cin >> x >> y;
		B.push_back(make_pair(x,y));
	}
	
	int count = 0;
	for(int t=l;t<=r;t++){
		for(int j=0;j<q;j++){
			for(int k=0;k<p;k++){
				int flag = 0;
				for(int m=A[k].first;m<=A[k].second;m++){
//					cout << m << " " << B[j].first + i << " " << B[j].second + i << "\n";
					if((B[j].first + i == m || B[j].second + i == m) && flag==0){
						count++;
						flag=1;
					}
				}
//				cout << B[j].first + i << " " <<  B[j].second + i << "\n" << A[k].first << " "  << A[k].second << "\n";
//				if(B[j].first + i == A[k].first || B[j].second+i == A[k].second || B[j].first + i == A[k].second || B[j].second+i == A[k].first){
//					count++;
//					cout << "Yes   " << count << "\n";
//				}
//				
//				else
//					cout << "\n";
			}
		}
	}
	
	cout << count << "\n";
	return 0;
}
