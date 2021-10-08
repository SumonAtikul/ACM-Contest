#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum=1;
    cin >> s;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            sum++;
        }
        ///cout << s[i] << endl;
    }
     cout << sum << endl;
}
