#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int a=0, b=0;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;

        cout << __gcd(a,b) << " " << (a*b)/__gcd(a,b) << endl;
    }
}
