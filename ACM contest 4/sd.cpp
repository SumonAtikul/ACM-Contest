#include<stdio.h>
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

#endif
int n, a[n+3], sum=0;
for(int i=0; i<n; i++)
{
    scanf("%d", &a[i]);
    if(a[i]>0)
    {
        sum+=a[i];
    }
}
    printf("%d\n", sum);
    return 0;
}
