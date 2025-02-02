// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int n,m;
int board[1002][1002];
int bits[1002][1002];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  queue<pair<int,int>> Q;
  cin >> m >> n;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> board[i][j];
      if (board[i][j] == 1) {Q.push({i,j});}
      if (board[i][j] == 0) {bits[i][j] = -1;}
    }
  }
  // cout << "---------------\n";
  // for (int i = 0; i < n; i++){ for (int j = 0; j < m; j++) { cout << board[i][j] << " "; } cout << "\n"; }
  // for (int i = 0; i < n; i++){ for (int j = 0; j < m; j++) { cout << bits[i][j] << " "; } cout << "\n"; }
  // cout << "\n📌 Queue 상태 출력:\n";
  // while (!Q.empty()) {
  //     pair<int, int> cur = Q.front();
  //     Q.pop();
  //     cout << "(" << cur.first << ", " << cur.second << ") ";
  // }
  // cout << "\n";
  
  while (!Q.empty())
  {
    auto a = Q.front(); Q.pop();
    // cout << " (" << a.first << ","<<a.second<<") -> ";
    for (int idx = 0; idx < 4; idx++)
    {
      int nx = a.first + dx[idx];
      int ny = a.second + dy[idx];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (bits[nx][ny] >= 0 ) continue;
      bits[nx][ny] = bits[a.first][a.second] + 1;
      Q.push({nx, ny});
    }
  }
  // for (int i = 0; i < n; i++){ for (int j = 0; j < m; j++) { cout << board[i][j] << " "; } cout << "\n"; }
  //   cout << "---------------\n";
  // for (int i = 0; i < n; i++){ for (int j = 0; j < m; j++) { cout << bits[i][j] << " "; } cout << "\n"; }
  int ans = -1;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (bits[i][j] == -1)
      {
        cout << -1 << "\n";
        return 0;
      }
      ans = max(ans, bits[i][j]); 
      // cout << "ans : " << ans << "\n";
    }
  }
  cout << ans << "\n";

  
  
}