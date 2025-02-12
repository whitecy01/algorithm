// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n;

int dp[100];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  dp[1] = 1;
  dp[2] = 2;
  dp[3] = 4;
  cin >> n;
  for (int i = 4; i < 12; i++)
  {
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3]; 
  }
  int temp;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    cout << dp[temp] << "\n"; 
  }
  
}