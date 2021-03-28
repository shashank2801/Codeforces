#include <iostream>
using namespace std;
 
int main()
{
    int m, s, t, i;
    cin >> m >> s;
    string a, b;
 
    if (s == 0)
    {
        cout << (m == 1 ? "0 0" : "-1 -1") << endl;
        return 0;
    }
 
    for (i = 0; i < m; i++)
    {
        t = min(s, 9);
        b += t + '0';
        s -= t;
    }
    a = '0';
    cout << a << endl;
    
return 0;
}
