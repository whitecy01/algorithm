// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int dx[6] = {0, 0, 1, -1, 0, 0};
int dy[6] = {0, 0, 0, 0, -1, 1};
int dz[6] = {1, -1, 0, 0, 0, 0};

int L,R,C; // L : 빌딩의 층 수, R 빌딩의 행, C 빌딩의 열


int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  while (1)
  {
    cin >> L >> R >> C;
    if (L == 0 && R == 0 && C == 0)
      break ;
    char board[31][31][31];
    int dist[31][31][31];
    memset(dist, -1, sizeof(dist));
    queue<tuple<int,int,int>> Q;
    for(int i = 0; i < L; i++){
      for(int j = 0; j < R; j++){
        for(int k = 0; k < C; k++){
          cin >> board[i][j][k];
          if(board[i][j][k] == 'S'){
            Q.push({i,j,k});
            dist[i][j][k] = 0;
          }
          else if(board[i][j][k] == '.') dist[i][j][k] = -1;
        }
      }
    }
    int ans = -1;
    while (!Q.empty())
    {
      auto cur = Q.front(); Q.pop();
      int z = get<0>(cur);
      int y = get<1>(cur);
      int x = get<2>(cur);
      // cout << "z : " << z << " y : " << y << " x : " << x << "\n";
      for (int idx = 0; idx < 6; idx++)
      {
        int nz = z + dz[idx];
        int ny = y + dy[idx];
        int nx = x + dx[idx];
        
        
        if (nz < 0 || ny < 0 || nx < 0 || nz >= L || ny >= R || nx >= C) continue;
        // cout << "nz : " << nz << " ny : " << ny << " nx : " << nx << "\n";
        if (board[nz][ny][nx] == 'E') { ans = dist[z][y][x] + 1; break; }
        if (dist[nz][ny][nx] != -1 || board[nz][ny][nx] == '#') continue;

        dist[nz][ny][nx] = dist[z][y][x] + 1;

        Q.push({nz,ny,nx});
      }
      if (ans != -1)
        break;
    }

    // for(int i = 0; i < L; i++){
    //   for(int j = 0; j < R; j++){
    //     for(int k = 0; k < C; k++){
    //       cout << dist[i][j][k] << " ";
    //     }
    //     cout << "\n";
    //   }
    //   cout << "\n";
    // }
    // cout << board[0][3][3] << "\n";
    if (ans != -1){
      cout << "Escaped in " << ans << " minute(s).\n";
    }
    else{ cout << "Trapped!\n";}

  }
}