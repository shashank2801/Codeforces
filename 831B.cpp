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
    string a,b,c;
    cin >> a >> b >> c;
    int len = a.length();
    map<char,char> m;
    for(int i=0;i<len;i++)
        m[a[i]] = b[i];
    
    int n= c.length();
    for(int i=0;i<n;i++){
        if(isdigit(c[i]))
            cout << c[i];
        else{
            auto itr = m.find(tolower(c[i]));
            if(isupper(c[i]))
                cout << (char) toupper(itr->second);
            else
                cout << itr->second;
        }
    }
    return 0;
}