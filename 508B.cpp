#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n(s.length() - 1), ind(n); //ind is equal to n
    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            ind = i; 
            if (s[n] > s[i]) // agar last digit bdi hai to bina soche exchange krdenge..agar koi b nhi milega to last wale even se change kr denge.
                break;
        }
        
    if (n == ind) //agar koi b nhi milega yaa fir koi change nhi krna hoga to -1 hi rh jayega
        cout << -1 << endl;
    else
    {
        swap(s[ind], s[n]);
        cout << s << endl;
    }

    return 0;
}
