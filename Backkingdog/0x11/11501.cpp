#include <iostream>

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
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> lis[j];
        }
        long long ans = 0;
        int max_price = lis[n - 1]; // ✅ 마지막 날의 주가를 max_price로 초기화
        //값 계산
        for (int k = n - 2; k >= 0; k--)
        {
            if (max_price > lis[k]){
                int temp = max_price - lis[k];
                ans += temp;
            } 
            else max_price = lis[k];
        }
   
        cout << ans << "\n";
    }
    


}