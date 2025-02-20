// Authored by : whitecy
// Co-authored by : -

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int T;
int n;
int lis[1000002];
int max_price;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        memset(lis, 0, sizeof(lis));
        max_price = 0;

        cin >> n;
        for (int j = 0; j < n; j++) { cin >> lis[j]; } 
        max_price = lis[n - 1];
        long long ans = 0;
        for (int idx = n - 2; idx >= 0; idx--)
        {
            if (max_price <= lis[idx]){
                max_price = lis[idx];
            }
            else {
                int temp = max_price - lis[idx];
                ans += temp;
            }
        }
        cout << ans << "\n";
    }
    


}