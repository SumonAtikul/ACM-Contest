#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if(a < 126)
    {
        cout << 4;
    }
    if(125<a && a<212)
    {
        cout << 6;
    }
    if(211<a && a<215)
    {
        cout << 8;
    }
}
