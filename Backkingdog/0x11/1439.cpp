// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string s;

  cin >> s;
  int cnt[2] = {0,0};
  cnt[s[0] - '0']++;
  for (int i = 0; i < s.size(); i++)
  {
    if (s[i-1] != s[i]) cnt[s[i] - '0']++;
  }
  cout << min(cnt[0], cnt[1]) << "\n";
}