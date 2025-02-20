// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

long long PDW(int a, int b, int m){
  if (b == 1) return a % m;
  long long val = PDW(a, b/2, m);
  val = val * val % m;
  if (b % 2 == 0) return val;
  return val * a % m;
}


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a,b,m;
  cin >> a >> b >> m;
  long long ans = PDW(a,b,m);
  cout << ans << "\n";
}