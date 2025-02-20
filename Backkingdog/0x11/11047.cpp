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
  int count = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    count += money / arr[i];
    money = money % arr[i];
  }
  //풀이
  // 4200 / 50000 -> 0
  // 4200 % 50000 -> 4200
  // 4200 / 1000 -> 4
  // 4200 % 1000 -> 200 (남는 돈)
  cout << count << "\n";
}