#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, c;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        int d = a+b+c;
        if(d == 180 && a >= 1 && b >= 1 && c >= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
