// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int arr[1000];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int x;
  cin >> x;
  
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == x)
      ans++;
  }
  cout << ans << "\n";
  
  
  
}