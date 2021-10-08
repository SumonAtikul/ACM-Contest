#include<iostream>
using namespace std;

// Function which return
//nth even fibonnaci number
long int evenFib(int n)
{
    if (n < 1)
    return n;
     ///break;
    if (n>1 && n == 1)
    return 0;

    // calculation of
    // Fn = 4*(Fn-1) + Fn-2
    return ((6 * evenFib(n-1)) +
             evenFib(n-2)) + evenFib(n-3) ;
}

// Driver Code
int main ()
{
    int n;
    scanf("%d", &n);
    cout << evenFib(n);
    return 0;
}
