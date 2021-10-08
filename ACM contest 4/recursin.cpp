#include<stdio.h>
int fib(int n)
{
   if (n <= 1)
      return n;
   return fib(6*n-6);
  /// return fib(3(n-1))+fib(2(n-2))+(n-3);

}

int main ()
{
  int n;
  scanf("%d", &n);
  printf("%d", fib(n));
  getchar();
  return 0;
}
