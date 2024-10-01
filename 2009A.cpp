#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

  int t;
  cin >> t;

  while (t--)
  {

    int a, b;

    cin >> a >> b;

    int res;

    if (b <= a)
    {
      res = 0;
    }

    else
    {
      res = b - a;
    }

    cout << res<<endl;
  }

  return 0;
}
