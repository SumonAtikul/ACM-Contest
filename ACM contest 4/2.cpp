#include<stdio.h>
int main()
{
///𝒊𝒏𝒕 𝑎 = 0, 𝑏 = 100, 𝑐 = 0
    int a=0, b=100, c=0;
    while(a < 30 && b > 85)
    {
        scanf("%a %b", &a, &b);
        ///𝑐 = 𝑎 + +;
        c=a++;
        ///𝑏−= 𝑐;
        b-=c;
        ///𝒆𝒍𝒔𝒆 𝒊𝒇 (𝑏 % 3)
        if(b%3==1)
        {
            continue;
            ///𝑐 = 0;
            c=0;
        }
        ///𝑏 + +;
        b++;
    }
    ///𝑝𝑟𝑖𝑛𝑡𝑓("%4𝑑 %05𝑑 %𝑓1𝑛", 𝑎, 𝑏, 𝑐);
    printf("%d %d %f\n", a, b, c);
    ///𝑝𝑟𝑖𝑛𝑡𝑓("𝑆𝑢𝑐𝑐𝑒𝑠𝑠𝑓𝑢𝑙𝑙𝑦 𝐸𝑥𝑒𝑐𝑢𝑡𝑒𝑑 \\\! ");
    printf("Sucessfully executed \\\!");
    ///𝒓𝒆𝒕𝒖𝒓𝒏 0;
    return 0;
}
