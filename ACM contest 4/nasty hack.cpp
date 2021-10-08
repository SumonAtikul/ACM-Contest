#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, c;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c;
        if(a==(b-c))
        {
            cout << "does not matter" << endl;
        }
        else if(a>(b-c))
        {
            cout << "do not advertise" << endl;
        }
        else
        {
            cout << "advertise" << endl;
        }
    }
}
