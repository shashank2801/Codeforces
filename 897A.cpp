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
    int n,m;
    cin >> n >> m;
    string str;
    cin >> str;
    for(int i=0;i<m;i++){
        int l,r;
        char x,y;
        cin >> l >> r >> x >> y;
        for(int j=l-1;j<r;j++){
            if(str[j]==x)
                str[j] = y;           
        }
    }
    cout << str;
    return 0;
}