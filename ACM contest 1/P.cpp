#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    {
        long long int sum = 0;
        for(int i=1; i<=w; i++)
        {
            sum += k * i;
        }
        if(sum >= n){
            cout << sum-n << endl;
        }
        else{
            cout << "0" << endl;
      }
    }
    return 0;
}
