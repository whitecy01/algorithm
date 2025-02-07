// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int n[10002];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int m, x;
  cin >> m >> x;
  for (int i = 0; i < m; i++)
  {
    cin >> n[i];
  }
  for (int i = 0; i < m; i++)
  {
    if (x > n[i])
      cout << n[i] << " ";
  }
  
  
  
}