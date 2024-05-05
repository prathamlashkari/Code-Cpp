#include <bits/stdc++.h>
using namespace std;

int longest(vector<int> arr, int n)
{
  vector<int> dp(n, 1), hash(n), temp;
  int maxi = 1, lastind = 0;
  for (int i = 0; i < n; i++)
  {
    hash[i] = i;
    for (int prev = 0; prev < i; prev++)
    {
      if (arr[i] > arr[prev] && 1 + dp[prev] > dp[i])
      {
        dp[i] = 1 + dp[prev];
        hash[i] = prev;
      }
    }
    if (dp[i] > maxi)
    {
      maxi = max(dp[i], maxi);
      lastind = i;
    }
  }
  temp.push_back(arr[lastind]);
  while (hash[lastind] != lastind)
  {
    int ind = hash[lastind];
    temp.push_back(arr[ind]);
    lastind = ind;
  }
  reverse(temp.begin(), temp.end());
  for (int p : temp)
  {
    cout << p << " ";
  }
  cout << endl;

  return maxi;
}
int main()
{
  int n = 6;
  vector<int> lis;

  lis.push_back(5);
  lis.push_back(4);
  lis.push_back(11);
  lis.push_back(1);
  lis.push_back(16);
  lis.push_back(8);

  cout << longest(lis, n) << endl;
  return 0;
}