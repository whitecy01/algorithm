// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n, money;
int arr[11];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> money;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    ans += money / arr[i];
    money %= arr[i];
  }
  
  cout << ans << "\n";
  
  
}