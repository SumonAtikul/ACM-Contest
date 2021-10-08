#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, a;
    cin >> t;
    while(t--)
    {
        cin >> a;
        if(a<10 || a<=0)
        {
            cout << "Thanks for helping Chef!" << endl;
        }
        else
            cout << "-1" << endl;
    }
}
