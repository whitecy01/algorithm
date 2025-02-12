// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int w,h;
int T;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> T;
  for (int i = 0; i < T; i++)
  {
    cin >> w >> h;
    string board[1002];
    int fire[1002][1002]; // 불이 옮겨 붙는 거
    int hero[1002][1002]; // 주인공 경로
    queue<pair<int,int> > Q_fire;// BFS Q
    queue<pair<int,int> > Q_hero;// BFS Q
    for (int j = 0; j < h; j++) { fill(fire[j], fire[j] + w, -1); } // 초기화
    for (int j = 0; j < h; j++) { fill(hero[j], hero[j] + w, -1); } // 초기화 
    for (int q = 0; q < h; q++) { cin >> board[q]; }
    for (int o = 0; o < h; o++)
    {
      for (int p = 0; p < w; p++)
      {
        if (board[o][p] == '*') {fire[o][p] = 0; Q_fire.push({o,p});} //불 위치 넣어주기
        if (board[o][p] == '@') {hero[o][p] = 0; Q_hero.push({o,p});} // 주인공 위치 넣어주기
      }
    }
    while (!Q_fire.empty())
    {
      auto cur = Q_fire.front(); Q_fire.pop();
      // cout << "cur.first : " << cur.first << " cur.second : " << cur.second << "\n";
      for (int idx = 0; idx < 4; idx++)
      {
        int nx = cur.first + dx[idx];
        int ny = cur.second + dy[idx];
        // cout << "nx : " << nx << " ny : " << ny << "\n";
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) { continue;}
        if (fire[nx][ny] >= 0 || board[nx][ny] == '#') {continue;}
        fire[nx][ny] = fire[cur.first][cur.second] + 1;

        Q_fire.push({nx,ny});
      }
    }
    bool check = false;
    int escape = 0 ;
    while (!Q_hero.empty())
    {
      auto cur = Q_hero.front(); Q_hero.pop();
      // cout << "cur.first : " << cur.first << " cur.second : " << cur.second << "\n";
      for (int idx = 0; idx < 4; idx++)
      {
        int nx = cur.first + dx[idx];
        int ny = cur.second + dy[idx];
        // cout << "nx : " << nx << " ny : " << ny << "\n";
        if (nx < 0 || nx >= h || ny < 0 || ny >= w) { escape = hero[cur.first][cur.second] + 1; check = true; break;}
        if (hero[nx][ny] >= 0 || board[nx][ny] == '#' || board[nx][ny] == '*') {continue;}
        if (fire[nx][ny] >= 0 && fire[nx][ny] <= hero[cur.first][cur.second] + 1) continue;  //불이 먼저 온 경우, 불과 동시에 도착한 경우을 차단 하는 거임
        hero[nx][ny] = hero[cur.first][cur.second] + 1;
        Q_hero.push({nx,ny});
      }
      if (check == true)
        break;
    }

    // for (int q = 0; q < h; q++)
    // {
    //   for (int k = 0; k < w; k++)
    //   {
    //     cout << fire[q][k] << "  ";
    //   }
    //   cout << "\n";
    // }    
    // cout << "\n";
    // for (int q = 0; q < h; q++)
    // {
    //   for (int k = 0; k < w; k++)
    //   {
    //     cout << hero[q][k] << "  ";
    //   }
    //   cout << "\n";
    // }   

    if (check == false){
      cout << "IMPOSSIBLE\n";
    }
    else {
      cout << escape << "\n";
    }
  }
}
