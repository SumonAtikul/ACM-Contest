#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double b,c;
        cin >> b >> c;
        if(b>1000)
            printf("%.6lf\n",(0.9*b*c));

        else
           printf("%.6lf\n",b*c);
    }
}

