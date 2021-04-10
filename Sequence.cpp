// https://mycode.prepbytes.com/problems/recursion/SEQUENCE

#include <bits/stdc++.h>
using namespace std;

long long int mod = 1e9+7;

long long sumTillN(long n){
  if (n==1){
    return 1;
  }
  
  long long ans=0;
  
  if (n%2==0)
    ans = sumTillN(n/2);
  else
    ans = sumTillN((3%mod * n%mod)%mod + 1);
    
  return (n%mod + ans%mod) % mod;
}

int main()
{
  int t; 
  cin >> t;
  
  while (t--){
    long n;
    cin >> n;
    cout << sumTillN(n) << endl;
  }
  
  return 0;
}
