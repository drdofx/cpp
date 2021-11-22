#include <bits/stdc++.h>

using namespace std;

bool divSum(int n)
{
  if(n == 1)
    return 1;

  int result = 1;

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

    cout << n << " = " << result << endl;
  }
  return false;
}
int main() {
  int count = 0;
  vector<int> a = {2, 3, 4, 6};
  for (int i=0; i<a.size(); i++) {
    if (divSum(a[i]) == false) {
      count++;
    }
  }
  // Your code starts here.
  cout << "res " << count << endl;

  return 0;
}
