// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n;
string board[102];
int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  
  for (int i = 0; i < n; i++) { cin >> board[i]; }
  
  int views[102][102] = {0};
  
  int noans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((board[i][j] == 'R' || board[i][j] == 'B'|| board[i][j] == 'G') && views[i][j] != 1){
        char boardchar = board[i][j];
        queue<pair<int,int> > Q;
        views[i][j] = 1;
        Q.push({i,j});
        noans++;
        while (!Q.empty())
        {
          auto cur = Q.front(); Q.pop();
          for (int idx = 0; idx < 4; idx++)
          { 
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (views[nx][ny] != 0 || boardchar != board[nx][ny]) continue;
            views[nx][ny] = 1;
            Q.push({nx,ny});
          }
        }
      } 
    }   
  }
  cout << noans << " ";

  int ans = 0;
  memset(views, 0, sizeof(views));  // 전체를 0으로 초기화

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if ((board[i][j] == 'R' || board[i][j] == 'G'|| board[i][j] == 'B') && views[i][j] != 1){
        char boardchar = board[i][j];
        queue<pair<int,int> > Q;
        views[i][j] = 1;
        Q.push({i,j});
        ans++;
        while (!Q.empty())
        {
          auto cur = Q.front(); Q.pop();
          for (int idx = 0; idx < 4; idx++)
          { 
            int nx = cur.first + dx[idx];
            int ny = cur.second + dy[idx];
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (views[nx][ny] != 0) continue;
            if (boardchar == 'R' || boardchar == 'G'){
              if (board[nx][ny] == 'B') continue;
            }
            else if (boardchar == 'B'){ if(board[nx][ny] != 'B') continue; }
            views[nx][ny] = 1;
            Q.push({nx,ny});
          }
        }
      } 
    }   
  }
  cout << ans << " ";
}