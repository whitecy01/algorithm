// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int n;
int arr[100005];
bool occur[2000002];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
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
    if (x - arr[i] > 0 && occur[x - arr[i]]) ans++;
    occur[arr[i]] = true;
  }
  
  
  cout << ans << "\n";  
  
}