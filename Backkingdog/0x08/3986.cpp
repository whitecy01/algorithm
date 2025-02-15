// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

string str[102];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> str[i];
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    stack<char> sta;
    for (int j = 0; j < str[i].size(); j++)
    {
      if (sta.empty()){
        sta.push(str[i][j]);
      }
      else {
        if (str[i][j] == sta.top()){
          sta.pop();
        }
        else{
          sta.push(str[i][j]);
        }
      }
    }
    if (sta.empty()) ans++;
  }
  cout << ans << "\n";
  
  
  
}