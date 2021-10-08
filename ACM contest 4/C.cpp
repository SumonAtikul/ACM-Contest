#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long int f=1;
        if(n<0)
            break;
        else
        for(int i=1; i<=n; ++i){
            f*=i;
        }
        cout << f << endl;
    }
}
