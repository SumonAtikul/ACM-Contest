#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t, b, c, sum;
  cin >> t;
  while(t--)
  {
    cin >> b;
    c=b%10;
    while(b>=10)
    {
      b=b/10;
    }
    sum = b+c;
    cout << sum << endl;
  }
}
