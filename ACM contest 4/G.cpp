#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, b, remainder;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        remainder=a%b;

        cout << remainder << endl;
    }
}
