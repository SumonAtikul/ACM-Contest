#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int a[t+3];
    for(int i=0; i<t; i++)
    {
        cin >> a[i];
        cout << a[0]+a[i-1] << endl;
    }
    ///cout << a[0]+a[i-1] << endl;
}
