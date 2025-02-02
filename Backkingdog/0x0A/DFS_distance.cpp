#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second // pair에서 first, second를 줄여서 쓰기 위해서 사용

int board[502][502] = {
    {1,1,1,0,1,0,0,0,0,0},
    {1,0,1,0,1,0,0,0,0,0},
    {1,1,1,0,1,0,0,0,0,0},
    {1,1,0,0,1,0,0,0,0,0},
    {0,1,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0} 
}; // 1이 이동 가능, 0이 이동 불가능

int dist[502][502]; // 거리 저장 배열
int n = 7, m = 10; // 행과 열의 크기
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    stack<pair<int,int>> Q;
    for (int i = 0; i < n; i++)
        fill(dist[i], dist[i] + m, -1); // 거리 배열 초기화 (-1: 방문하지 않음)
    
    dist[0][0] = 0; // 시작점의 거리 0
    Q.push({0,0}); // 시작점 삽입
    
    while(!Q.empty()){
        pair<int,int> cur = Q.top(); Q.pop();
        for(int dir = 0; dir < 4; dir++){ // 상하좌우 탐색
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 벗어나면 패스
            if(dist[nx][ny] != -1 || board[nx][ny] != 1) continue; // 이미 방문했거나 이동 불가능한 칸
            
            dist[nx][ny] = dist[cur.X][cur.Y] + 1; // 현재 거리에서 +1
            Q.push({nx,ny});
        }
    }
    
    // 결과 출력 (거리 배열)
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// int board[502][502] = {
//     {1,1,1,0,1,0,0,0,0,0},
//     {1,0,1,0,1,0,0,0,0,0},
//     {1,1,1,0,1,0,0,0,0,0},
//     {1,1,0,0,1,0,0,0,0,0},
//     {0,1,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0},
//     {0,0,0,0,0,0,0,0,0,0} 
// }; // 1이 이동 가능, 0이 이동 불가능

// int dist[502][502]; // 거리 저장 배열
// int n = 7, m = 10; // 행과 열의 크기
// int dx[4] = {1,0,-1,0};
// int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미

// int main(void){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
    
//     queue<pair<int,int>> Q;
//     for (int i = 0; i < n; i++)
//         fill(dist[i], dist[i] + m, -1); // 거리 배열 초기화 (-1: 방문하지 않음)
    
//     dist[0][0] = 0; // 시작점의 거리 0
//     Q.push({0,0}); // 시작점 삽입
    
//     while(!Q.empty()){
//         pair<int,int> cur = Q.front(); Q.pop();
//         for(int dir = 0; dir < 4; dir++){ // 상하좌우 탐색
//             int nx = cur.X + dx[dir];
//             int ny = cur.Y + dy[dir];
//             if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 벗어나면 패스
//             if(dist[nx][ny] != -1 || board[nx][ny] != 1) continue; // 이미 방문했거나 이동 불가능한 칸
            
//             dist[nx][ny] = dist[cur.X][cur.Y] + 1; // 현재 거리에서 +1
//             Q.push({nx,ny});
//         }
//     }
    
//     // 결과 출력 (거리 배열)
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j < m; j++){
//             cout << dist[i][j] << " ";
//         }
//         cout << "\n";
//     }
//     return 0;
// }