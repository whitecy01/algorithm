// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n;
//순서 왼쪽 대각선 부터 시계방향
// int dx[8] = {-2, -1, 1, 2, 2, 1, -1, -2};
// int dy[8] = {-1, 2, 2, -1, 1, 2, 2, 1}; -> 틀린 거

int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int board[305][305] = {0};


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int T;
    cin >> T;
    queue<pair<int,int> > Q;
    memset(board, -1, sizeof(board));
    int curNightX, curNightY;
    cin >> curNightX >> curNightY;
    board[curNightX][curNightY] = 0;
    Q.push({curNightX, curNightY});
    int moveNightX, moveNightY;
    cin >> moveNightX >> moveNightY;
    while (!Q.empty())
    {
      auto cur = Q.front(); Q.pop();
      for (int idx = 0; idx < 8; idx++)
      {
        int nx = cur.first + dx[idx];
        int ny = cur.second + dy[idx];
        if (nx < 0 || nx >= T || ny < 0 || ny >= T) continue;
        if (board[nx][ny] >= 0) continue;
        board[nx][ny] = board[cur.first][cur.second] + 1;
        Q.push({nx,ny});
      }
    }
    // for (int q = 0; q < 8; q++)
    // {
    //   for (int k = 0; k < 8; k++)
    //   {
    //     cout << board[q][k] << " ";
    //   }
    //   cout << "\n";
    // }

    cout << board[moveNightX][moveNightY] << "\n";
  }
}