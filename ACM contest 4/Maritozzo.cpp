#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    //int d;
    cin >> a>>b>>c>>d;
    for(int i=0;i<=d.length(); i++)
   {
        if(d[i]=='1')
            cout<<a;
        if(d[i]=='2')
            cout<<b;
        if(d[i]=='3')
            cout<<c;
    }
}
