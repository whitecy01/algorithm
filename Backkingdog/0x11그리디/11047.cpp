#include <iostream>

using namespace std;

int n, k;
int a[15];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int ans = 0;
  cin >> n >> k;
  for(int i = 0; i < n; i++) cin >> a[i];
  for(int i = n-1; i >= 0; i--){
    ans += k / a[i];
    // k %= a[i];
    cout << "k % a[i] : " << k % a[i] << " k / a[i] : " << k / a[i] << "\n";
    k = k % a[i];
    cout << "k : " << k << " a[i] : " << a[i] << "\n";
  }
  cout << ans;
}

// - 내가 푼 거 
// using namespace std;

// int money[11];

// int main(){
//     int n;
//     int sum;

//     cin >> n >> sum;
//     int temp; 
//     for (int i = 0; i < n; i++){ cin >> temp; money[i] = temp;}
//     int idx = n - 1;
//     int count = 0;
//     while (1)
//     {
//         if (sum == 0) break;
//         if (money[idx] > sum){
//             idx--;
//         }
//         else {sum = sum - money[idx]; count++;}
//     }
//     cout << count;
    
    
// }