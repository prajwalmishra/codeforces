#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, count=0;
    cin >> T;
    while (T--)
    {
        int x1, x2, x3;
        cin >> x1 >> x2 >> x3;
        if (x1 + x2 + x3 >= 2)
        {
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}