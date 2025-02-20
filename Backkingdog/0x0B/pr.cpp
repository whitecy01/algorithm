// Authored by : whitecy
// Co-authored by : -
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll POW(ll a, ll b, ll m){
  if(b==1) {return a % m;}
  ll val = POW(a, b/2, m);
  cout << "val : " << val << "\n";
  val = val * val % m;

  if(b%2 == 0) return val;
  return val * a % m;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b,c;
  cout << 2 % 3 << "\n";
  cin >> a >> b >> c;
  cout << POW(a,b,c);
}