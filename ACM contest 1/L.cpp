#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, a, b, c, count=0;
    cin >> tc;
    for(int i=0; i<tc; i++){
        cin >> a >> b >> c;

    if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1) || (a==1&&b==1&&c==1)){
        count++;
    }
    }
    cout << count << endl;
    return 0;

}


