#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  if (n >= 90 && n <= 100) cout << "A\n";
  else if (n >= 80 && n <= 89) cout << "B\n";
  else if (n >= 70 && n <= 79) cout << "C\n";
  else if (n >= 60 && n <= 69) cout << "D\n";
  else cout << "F\n";
}