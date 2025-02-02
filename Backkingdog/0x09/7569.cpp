#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[102][102][102]; // 3차원 공간
int check[102][102][102]; // 방문 여부 및 거리 저장
int m, n, h; // 가로(m), 세로(n), 높이(h)

// 6방향 이동 (상, 하, 좌, 우, 앞, 뒤)
int dx[6] = {1, -1, 0, 0, 0, 0};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n >> h;
  queue<tuple<int, int, int>> Q;

  for (int i = 0; i < h; i++) {
      for (int j = 0; j < n; j++) {
          for (int k = 0; k < m; k++) {
              cin >> board[i][j][k];
              if (board[i][j][k] == 1) {
                  Q.push({i, j, k});
              }
              if (board[i][j][k] == 0) {
                  check[i][j][k] = -1;
              }
          }
      }
  }
  while (!Q.empty()) {
      auto [cur_height, cur_x, cur_y] = Q.front();
      Q.pop();
      for (int dir = 0; dir < 6; dir++) { 
          int nx = cur_x + dx[dir];
          int ny = cur_y + dy[dir];
          int nz = cur_height + dz[dir];

          if (nx < 0 || ny < 0 || nz < 0 || nx >= n || ny >= m || nz >= h) continue;
          if (check[nz][nx][ny] >= 0) continue; 

          check[nz][nx][ny] = check[cur_height][cur_x][cur_y] + 1;
          Q.push({nz, nx, ny});
      }
  }

  // 결과 계산
  int ans = 0;
  for (int i = 0; i < h; i++) {
      for (int j = 0; j < n; j++) {
          for (int k = 0; k < m; k++) {
              if (check[i][j][k] == -1) {
                  cout << "-1\n"; 
                  return 0;
              }
              ans = max(ans, check[i][j][k]); 
          }
      }
  }
  
  cout << ans << "\n"; 

}


// // Authored by : whitecy
// // Co-authored by : -
// // http://boj.kr/****************
// #include <bits/stdc++.h>
// using namespace std;

// #define X first;
// #define Y second;

// int board[102][102][102];
// int check[102][102][102];
// int m,n,h;

// int dx[4] = {-1, 1, 0, 0};
// int dy[4] = {0, 0, -1, 1};
// int dz[3] = {0, 1, -1};


// int main(void){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
  
//   queue<pair<pair<int, int>, int>> Q;
//   cin >> m >> n >> h;

//   for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         cin >> board[i][j][k];
//         if (board[i][j][k] == 1) Q.push({{i,j}, k});
//         if (board[i][j][k] == 0) check[i][j][k] = -1;
//       }
//     }
//   }
//     cout << "\n";
//     for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         cout << board[i][j][k] << " ";
//       }
//       cout << "\n";
//     }
//     cout << "\n";
//   }
//     for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         cout << check[i][j][k] << " ";
//       }
//             cout << "\n";
//     }
//           cout << "\n";
//   }

//   while (!Q.empty())
//   {
//     auto cur = Q.front(); Q.pop();
//     auto cur_xy = cur.first;
//     int cur_x = cur_xy.first;
//     int cur_y = cur_xy.second;
//     int cur_height = cur.second;
//     for (int height = 0; height < 3; height++)
//     {
//       for (int idx = 0; idx < 4; idx++)
//       {
//         int nx = cur_x + dx[idx];
//         int ny = cur_y + dy[idx];
//         int nz = cur_height + dz[height];

//         if (nx < 0 || ny < 0|| nz < 0 || nx >= n || ny >= m || nz >= h) continue; //벽 밖에 나가는지 확인
//         if (check[nx][ny][nz] >= 0) continue;
//         check[nx][ny][nz] = check[cur_x][cur_y][cur_height] + 1;
//         Q.push({{nx,ny},nz});
//       }
//     }
//   }


//     cout << "------------------\n";
//     for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         cout << board[i][j][k] << " ";
//       }
//       cout << "\n";
//     }
//     cout << "\n";
//   }
//     for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         cout << check[i][j][k] << " ";
//       }
//             cout << "\n";
//     }
//           cout << "\n";
//   }


//   int ans = 0;
//   for (int i = 0; i < h; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       for (int k = 0; k < m; k++)
//       {
//         if (check[i][j][k] == -1){ cout << -1 << "\n"; return 0;}
//         ans = max(ans, check[i][j][k]);
//       }
//     }
//   }
//   cout << ans << "\n";


  

// }