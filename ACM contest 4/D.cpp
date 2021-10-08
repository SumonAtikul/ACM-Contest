#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, s=0;
        cin >> n;
        while(n>0){

        m=n%10;
        s=s+m;
        n=n/10;
        }
        cout << s << endl;
    }
}
