#include<bits/stdc++.h>

using namespace std;

bool divSum(int n)
{
  if(n == 1)
    return 1;

  int result = 0;

  for (int i = 2; i <= sqrt(n); i++)
  {
    if (n % i == 0)
    {
        if (i == (n / i))
            result += i;
        else
            result += (i + n/i);
    }
    if (result == n) {
      return true;
    }
  }
  return false;
}

int solution(vector<int> a) {
  int count = 0;
  for (int i=0; i<a.size(); i++) {
    if (divSum(a[i]) == false) {
      count++;
    }
  }
  // Your code starts here.
  return count;
}
