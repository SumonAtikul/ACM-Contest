#include<bits/stdc++.h>
using namespace std;

int main()
{
    ///freopen("in.txt", "r", stdin);
    int tc, total;
    string s, t;
    cin >> tc;
    cin.get(); ///dump-ignore the newline after tc
    while(tc--){
        getline(cin, s);
        istringstream token(s);
        total = 0;
        token >> t;
        while(token){
            total++;
            token >> t;
        }
        cout << total << endl;
    }
    return 0;
}
