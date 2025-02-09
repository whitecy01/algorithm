// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int arr[102];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++){ cin >> arr[i]; }
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i + 1] <= arr[i]){
      int temp = arr[i] - arr[i + 1] + 1;
      ans += temp;
      arr[i] = arr[i] - temp;
    }
  }
  cout << ans << "\n";
  
    
}