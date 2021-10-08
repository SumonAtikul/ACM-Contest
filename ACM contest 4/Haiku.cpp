#include<bits/stdc++.h>
using namespace std;
int main()
{
    string c;
    cin>>c;
    for(int i=0; i<c.length(); i++)
    {
        if(c[i]!=',')
        {
            cout<<c[i];
        }
        else
        {
            cout<<" ";
        }
    }
}
