#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, k, a, c=0;
    cin >> t >> k;
    while(t--)
    {
        cin >> a;
        if(a%k==0){
            c++;
        }
        ///cout << c << endl;
    }
    cout << c << endl;
}
