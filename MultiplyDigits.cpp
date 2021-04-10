// https://mycode.prepbytes.com/problems/recursion/MLOFDGT

#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

long long multiply(long long n) {
  if (n < 10){
    return n;
  }
  
  long long ans = multiply(n/10);
  
  long long ld = n % 10;
  return (ld%mod * ans%mod) % mod;
}

int main()
{
  int t;
  
  cin >> t;
  
  while (t-- > 0){
    long long n;
    cin >> n;
    
    cout << multiply(n) << endl;
  }
  return 0;
}
