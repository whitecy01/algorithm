// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  if (n % 4 == 0 && (n % 400 == 0 || n % 100 != 0))
  {
      cout << "1\n";
  }
  else 
    cout << "0\n";
}