#include <iostream>
#include <algorithm>
using namespace std;

int n;
int s[10002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n; for (int i = 0; i < n; i++){ cin >> s[i];}

    sort(s, s+n);
    int ans = 0;
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        temp = s[i] + temp;
        ans += temp;
    }
    cout << ans << "\n";
 
}