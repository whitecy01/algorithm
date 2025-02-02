#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용
int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} }; // 1이 파란 칸, 0이 빨간 칸에 대응
bool vis[502][502]; // 해당 칸을 방문했는지 여부를 저장
int n = 7, m = 10; // n = 행의 수, m = 열의 수
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  queue<pair<int,int>> Q;
  vis[0][0] = 1;
  Q.push({0,0});

  while (!Q.empty())
  {
    pair<int, int> cur = Q.front(); Q.pop();
    cout << " (" << cur.X << "," << cur.Y << ") -> ";
    for (int i = 0; i < 4; i++)
    {
        int nx = cur.X + dx[i];
        int ny = cur.Y + dy[i];
        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;//벽을 탈출하는지
        if (vis[nx][ny] || board[nx][ny] != 1) continue; //이미 갔던 곳인지 그리고 벽이 아닌지
        vis[nx][ny] = 1;
        Q.push({nx,ny});
    }

  }
  

  


}