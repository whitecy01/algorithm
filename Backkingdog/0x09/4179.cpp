// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int R,C;

int fire[1002][1002];
string board[1002];
int moveboard[1002][1002];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> R>>C;
  queue<pair<int,int>> fireQ;
  queue<pair<int,int>> moveQ;

  for (int i = 0; i < R; i++)
  {
    cin >> board[i];
    for (int j = 0; j < C; j++)
    {
      if (board[i][j] == '.') {fire[i][j] = -1; moveboard[i][j] = -1;}
      if (board[i][j] == 'F') {fireQ.push({i,j});}
      if (board[i][j] == 'J') {moveQ.push({i,j}); }
    }
  }
  // cout << "\n";
  // for (int i = 0; i < R; i++)
  // {
  //   for (int j = 0; j < C; j++)
  //   {
  //     cout << fire[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  // for (int i = 0; i < R; i++)
  // {
  //   for (int j = 0; j < C; j++)
  //   {
  //     cout << moveboard[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  //불 먼저 BFS
  while (!fireQ.empty())
  {
    auto cur = fireQ.front(); fireQ.pop();
    for (int i = 0; i < 4; i++)
    {
      int nx = cur.first + dx[i];
      int ny = cur.second + dy[i];
      if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
      if (fire[nx][ny] >= 0) continue;
      fire[nx][ny] = fire[cur.first][cur.second] + 1;
      fireQ.push({nx,ny});
    }
  }

  //이제 지훈이 도망치는 길 
  //   cout << "\n";
  // for (int i = 0; i < R; i++)
  // {
  //   for (int j = 0; j < C; j++)
  //   {
  //     cout << fire[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  while (!moveQ.empty())
  {
    auto cur = moveQ.front(); moveQ.pop();
    for (int i = 0; i < 4; i++)
    {
      int nx = cur.first + dx[i];
      int ny = cur.second + dy[i];

      if (nx < 0 || nx >= R || ny < 0 || ny >= C) {
        //       cout << "\n";
        // for (int i = 0; i < R; i++)
        // {
        //   for (int j = 0; j < C; j++)
        //   {
        //     cout << moveboard[i][j] << " ";
        //   }
        //   cout << "\n";
        // }


          cout << moveboard[cur.first][cur.second] + 1 << "\n";
          return 0;
      }
      if (moveboard[nx][ny] >= 0) continue;
      int temp = moveboard[cur.first][cur.second] + 1;
      if (fire[nx][ny] >= 0 && fire[nx][ny] <= temp) {continue; }
      moveboard[nx][ny] = temp;
      moveQ.push({nx,ny});
    }
  }
  cout << "IMPOSSIBLE\n";
  // int ans = 0;
  // for (int i = 0; i < R; i++)
  // {
  //   for (int j = 0; j < C; j++)
  //   {
  //     ans = max(ans, moveboard[i][j]);
  //   }
  // }

  //     cout << "\n";
  // for (int i = 0; i < R; i++)
  // {
  //   for (int j = 0; j < C; j++)
  //   {
  //     cout << moveboard[i][j] << " ";
  //   }
  //   cout << "\n";
  // }
  // cout << ans << "\n";
  
}