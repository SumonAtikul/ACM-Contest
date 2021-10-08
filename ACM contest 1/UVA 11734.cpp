#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    string s, t;
    cin >> tc;
    getline(cin, s); ///dump
    for(int i=1; i<=tc; i++){
        getline(cin, s);
        getline(cin, t);
        cout << "Case " << i << ":";
        if(s==t){
            cout << "Yes" << endl;
        }
        else{
            /*string::iterator*/ auto p = remove(s.begin(), s.end(), ' ');
            s.erease(p, s.end());
            if(s==t)cout << "Output Format Error" << endl;
            else cout << "Wrong Answer" << endl;
        }
    }
}
