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
    int n;
    cin >> n;
    string str;
    cin >> str;
    int s=0,f=0;
    for(int i=1;i<n;i++){
        if(str[i-1]==str[i])
            continue;
        else if(str[i-1] =='F' && str[i] =='S'){
            // cout << "s";
            s++;
        }
        else{
            // cout << "f";
            f++;
        }
    }
    // cout << f << " " << n << "\n";
    if(f>s)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}