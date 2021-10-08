#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n,k,p;
    for(int i=1; i<=t; i++)
    {
        cin >> n >> k >> p;
        k=k+p;
        cout << "Case " <<i<<": "<<((k<=n)?k:(k-n))<<endl;
    }

}
