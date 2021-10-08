#include<bits/stdc++.h>

using namespace std;


int fib(int n)
{

    if (n < 0)

        return n;
    if(n>0)
        n==1;

    return 3*fib(n-1) + 2*fib(n-2) + (n-1);
}
int main ()
{

    int n;
    scanf("%d", &n);

    cout << fib(n);

    getchar();

    return 0;
}
