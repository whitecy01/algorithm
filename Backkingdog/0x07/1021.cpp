// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  deque<int> D;
  for (int i = 1; i <= n; i++)
  {
    D.push_back(i);
  }
  deque<int>::iterator it = D.begin(); 
  int ans = 0;
  for (int i = 0; i < m; i++)
  {
    int num;
    cin >> num;
    int idx = find(D.begin(), D.end(), num) - D.begin();
    // cout << "num : " << num << " idx : " << idx << "\n"; 

    int left = idx;
    int right = n - idx;
    // cout << "left : " << left << " right : " << right << "\n"; 

    if (left < right){
      ans += left;
      while (left--)
      {
        D.push_back(D.front());
        D.pop_front();
      }
      D.pop_front();
      n--;
    }
    else {
      ans += right;
      while (right--)
      {
        D.push_front(D.back());
        D.pop_back();
      }
      D.pop_front();
      n--;
    }
  }
  cout << ans << "\n";
  
}