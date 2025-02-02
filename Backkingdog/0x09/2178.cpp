// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************

#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102];
int dist[102][102];
int n, m;
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};

int main(){
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> board[i];
  }
  for (int i = 0; i < n; i++)
  {
    fill(dist[i], dist[i] + m, -1);
  }
  

  queue<pair<int,int>> Q;
  dist[0][0] = 0;
  Q.push({0,0});

  while (!Q.empty())
  {
    auto cur = Q.front();
    Q.pop();
    for (int idx = 0; idx < 4; idx++)
    {
      int nx = cur.X + dx[idx];
      int ny = cur.Y + dy[idx];
      if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (dist[nx][ny] >= 0 || board[nx][ny] != '1') continue;
      dist[nx][ny] = dist[cur.X][cur.Y] + 1;
      Q.push({nx,ny});
    }
  }
  cout << dist[n-1][m-1]+1;
}
