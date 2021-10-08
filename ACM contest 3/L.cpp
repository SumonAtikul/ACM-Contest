#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    char ch1[105], ch2[105];
    scanf("%d\n", &tc);
    for(int i=1; i<=tc; i++)
    {
        gets(ch1);
        gets(ch2);
        if(0==strcmp(ch1, ch2))
        {
            printf("Case %d: Yes\n", i);
        }
        else if(1==strcmp(ch1, ch2));
        {
            printf("Case %d: Wrong Answer\n", i);
        }
        if(ch1==" " || ch2==" ")
        {
            printf("Case %d: Output Format Error\n", i);
        }
    }
}
