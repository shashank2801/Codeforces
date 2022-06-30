#include<bits/stdc++.h>


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MP make_pair
#define PB push_back


using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<bool> vb;
typedef pair<int,int> pi;
typedef vector<pair<int,int>> vpi;


int main(){
fastio
    int l;
    cin >> l;
    string str;
    cin >> str;
    int z=0,n=0;
    for(int i=0;i<l;i++){
        if(str[i]=='z')
            z++;
        else if(str[i]=='n')
            n++;
        else
            continue;
    }
    while(n--)
        cout << "1 ";
    while(z--)
        cout << "0 ";
    return 0;
}