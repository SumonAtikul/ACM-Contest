#include<stdio.h>
int main()
{
    int a=0, b=100, c=0;
	while(a<30 && b>85)
	{
        c=a++;
		b-=c;
		if(b%3)
		{
			c=0;
			continue;
		}
		    b++;
	}
	printf("%d %d %d\n", a,b,c);
	printf("successfully executed");
}
