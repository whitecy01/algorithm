// Authored by : whitecy
// Co-authored by : -

//한글 순서
//1. dist를 2개로 만들어서 벽을 안 깨고 다니는 것과 벽을 꺠고 다니는 것 체크할 수 있는 방법 
//2. 벽을 깨지 않든, 벽을 깨든 0이면 전부 다 갈 수 있어야 하고 한 번이라도 꺴으면 깨면 안 됨
#include <bits/stdc++.h>
using namespace std;

int n, m;
char board[1003][1003];
int dist[1003][1003][2];

int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,-1,1};


int dfs(){
  memset(dist, -1, sizeof(dist));
  dist[0][0][0] = dist[0][0][1] = 1;
  queue<tuple<int,int,int> > Q;
  Q.push({0,0,0});

  while (!Q.empty())
  {
    int x,y,broken;
    tie(x,y,broken) = Q.front(); Q.pop();
    if (x == n - 1 && y == m - 1) return dist[x][y][broken];
    int nextdist = dist[x][y][broken] + 1;
    for (int idx = 0; idx < 4; idx++)
    {
      int nx = x + dx[idx];
      int ny = y + dy[idx];
      if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
      if (board[nx][ny] == '0' && dist[nx][ny][broken] == -1 ){
        dist[nx][ny][broken] = nextdist;
        Q.push({nx, ny, broken});
      }
      if (!broken && board[nx][ny] == '1' && dist[nx][ny][1] == -1 ){
        dist[nx][ny][1] = nextdist;
        Q.push({nx, ny, 1});
      }
    }
  }
  return -1;
}



int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; i++) 
    for (int j = 0; j < m; j++)
      cin >> board[i][j];
  cout << dfs() << "\n";
    
}


































// ----------------

// #include <bits/stdc++.h>

// using namespace std;
// #define X first
// #define Y second

// // 방향 벡터 (우, 하, 좌, 상)
// int dx[4] = {0, 1, 0, -1};
// int dy[4] = {1, 0, -1, 0};

// char board[1000][1000]; // 지도 (벽 '1', 길 '0')
// int dist[1000][1000][2]; 
// // dist[x][y][0] : (x, y)까지 벽을 부수지 않고 도착하는 최단 거리
// // dist[x][y][1] : (x, y)까지 벽을 **한 개 부수고** 도착하는 최단 거리

// int n, m; // n: 세로(행), m: 가로(열)

// // OOB(Out of Bounds) 함수: 범위를 벗어나는지 확인
// bool OOB(int x, int y) {
//   return x < 0 || x >= n || y < 0 || y >= m;
// }

// // BFS(너비 우선 탐색) 수행
// int bfs() {
//   // 초기화: 방문하지 않은 곳을 -1로 설정
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j)
//       dist[i][j][0] = dist[i][j][1] = -1;

//   // 시작점 (0,0) 방문 처리 (벽을 부수지 않은 상태에서 시작)
//   dist[0][0][0] = dist[0][0][1] = 1; // 시작 지점이므로 거리 1

//   queue<tuple<int, int, int>> q;
//   q.push({0, 0, 0}); // {현재 x, 현재 y, 벽을 부쉈는지 여부(0: 부순적 없음, 1: 부숨)}

//   while (!q.empty()) {
//     int x, y, broken;
//     tie(x, y, broken) = q.front(); // 현재 위치와 벽 부순 여부
//     q.pop();

//     // 만약 도착 지점 (n-1, m-1)에 도달했다면 해당 거리 반환
//     if (x == n - 1 && y == m - 1) return dist[x][y][broken];

//     int nextdist = dist[x][y][broken] + 1; // 다음 위치까지의 거리 증가

//     // 4방향 탐색
//     for (int dir = 0; dir < 4; ++dir) {
//       int nx = x + dx[dir];
//       int ny = y + dy[dir];

//       // 1. 범위를 벗어나면 스킵
//       if (OOB(nx, ny)) continue;

//       // 2. (nx, ny)가 길('0')이고 방문한 적이 없다면 이동 가능
//       if (board[nx][ny] == '0' && dist[nx][ny][broken] == -1) {
//         dist[nx][ny][broken] = nextdist; // 거리 갱신
//         q.push({nx, ny, broken}); // 큐에 추가
//       }      

//       // 3. (nx, ny)가 벽('1')이고, 아직 벽을 부순 적이 없는 경우 (broken == 0)
//       if (!broken && board[nx][ny] == '1' && dist[nx][ny][1] == -1) {
//         dist[nx][ny][1] = nextdist; // 벽을 부순 상태에서 거리 갱신
//         q.push({nx, ny, 1}); // 벽을 부순 상태로 이동
//       }
//     }
//   }
//   return -1; // 도착점에 도달할 수 없을 경우 -1 반환
// }

// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);

//   cin >> n >> m; // 행과 열 입력
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j)
//       cin >> board[i][j]; // 지도 정보 입력

//   cout << bfs(); // BFS 실행 및 결과 출력
//   return 0;
// }

// ----------------

// #include <bits/stdc++.h>

// using namespace std;

// #define X first
// #define Y second

// // 방향 벡터 (우, 하, 좌, 상)
// int dx[4] = {0,1,0,-1};
// int dy[4] = {1,0,-1,0};

// char board[1000][1000]; // 지도 (벽 '1', 길 '0')
// int dist[1000][1000][2];
// // dist[x][y][0] : 벽을 하나도 부수지 않고 (x,y)까지 오는데 걸리는 비용
// // dist[x][y][1] : 벽을 하나만 부수고 (x,y)까지 오는데 걸리는 비용, (x,y)가 벽이라서 부수는 경우 포함

// int n, m;// n: 세로(행), m: 가로(열)

// // OOB(Out of Bounds) 함수: 범위를 벗어나는지 확인
// bool OOB(int x, int y){
//   return x < 0 || x >= n || y < 0 || y >= m;
// }

// // BFS(너비 우선 탐색) 수행
// int bfs() { 
//   // 초기화: 방문하지 않은 곳을 -1로 설정
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j)
//       dist[i][j][0] = dist[i][j][1] = -1;
  
//   // 시작점 (0,0) 방문 처리 (벽을 부수지 않은 상태에서 시작)
//   dist[0][0][0] = dist[0][0][1] = 1; // 시작 지점이므로 거리 1
//   queue<tuple<int, int, int>> q;
//   q.push({0,0,0}); // {현재 x, 현재 y, 벽을 부쉈는지 여부(0: 부순적 없음, 1: 부숨)}
 
//   while (!q.empty()) {
//     int x, y, broken;
//     tie(x, y, broken) = q.front();  // 현재 위치와 벽 부순 여부
//     q.pop();

//     // ✅ 현재까지의 dist 배열 출력 (벽을 안 부순 경우와 부순 경우를 분리)
//     cout << "==== Step: (" << x << ", " << y << ") broken: " << broken << " ====\n";
//     cout << "Without breaking:\n";
//     for (int i = 0; i < n; ++i) {
//       for (int j = 0; j < m; ++j) {
//         if (dist[i][j][0] == -1) cout << " - "; // 방문하지 않은 곳
//         else cout << setw(2) << dist[i][j][0] << " ";
//       }
//       cout << "\n";
//     }
//     cout << "With breaking:\n";
//     for (int i = 0; i < n; ++i) {
//       for (int j = 0; j < m; ++j) {
//         if (dist[i][j][1] == -1) cout << " - "; // 방문하지 않은 곳
//         else cout << setw(2) << dist[i][j][1] << " ";
//       }
//       cout << "\n";
//     }
//     cout << "====================\n";

//     if(x == n-1 && y == m-1) return dist[x][y][broken]; // 도착하면 종료

//     int nextdist = dist[x][y][broken] + 1;
//     for (int dir = 0; dir < 4; ++dir) {
//       int nx = x + dx[dir];
//       int ny = y + dy[dir];
//       if(OOB(nx, ny)) continue;      

//       // (nx, ny)로 벽 없이 이동하는 경우
//       if (board[nx][ny] == '0' && dist[nx][ny][broken] == -1) {
//         dist[nx][ny][broken] = nextdist;
//         cout << "Push -> nx : " << nx << " ny : " << ny << " broken : " << broken << "\n";
//         q.push({nx, ny, broken});
//       }      

//       // (nx, ny)를 부수는 경우 (아직 벽을 부수지 않은 상태여야 함)
//       if (!broken && board[nx][ny] == '1' && dist[nx][ny][1] == -1) {
//         dist[nx][ny][1] = nextdist;
//         cout << "Push broken -> nx : " << nx << " ny : " << ny << " broken : " << 1 << "\n";
//         q.push({nx, ny, 1});
//       }      
//     }
//   }
//   return -1;
// }

// int main(void) {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cin >> n >> m;
//   for (int i = 0; i < n; ++i)
//     for (int j = 0; j < m; ++j)
//       cin >> board[i][j];
//   cout << bfs() << "\n"; 
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       for (int k = 0; k < 1; k++)
//       {
//         cout << dist[i][j][k] << " ";
//       }
//       cout << "\n";
//     }
//     cout << "\n";
//   }
//   // cout << bfs();

//   return 0;
// }

