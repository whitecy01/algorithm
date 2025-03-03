#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
int n,m;
int arr[502][502];
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};
int view[502][502];


int main(){
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    int allcount = 0;
    int subanscount = 0;
    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){
            if (arr[i][j] == 1 && view[i][j] == 0){            
                queue<pair<int,int>> Q;
                int subcount = 0;
                Q.push({i,j});
                view[i][j] = 1;
                allcount++;
                while(!Q.empty()){
                    auto cur = Q.front(); Q.pop();
                    subcount++;
                    for(int idx = 0; idx < 4; idx++){
                        int y = cur.first + dx[idx];
                        int x = cur.second + dy[idx];
                        if (y < 0 || y >= n || x < 0 || x >= m) continue;
                        if (view[y][x] != 0 || arr[y][x] != 1) continue;
                        Q.push({y,x});
                        view[y][x] = 1;
                    }
                }
                subanscount = max(subanscount, subcount);
            }
        }
    }

    cout << allcount << "\n";
    cout << subanscount  << "\n";
}