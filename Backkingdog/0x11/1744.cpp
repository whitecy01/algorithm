// // Authored by : whitecy
// // Co-authored by : -
// // http://boj.kr/****************
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> positive;  // 양수 저장
    vector<int> negative;  // 음수 저장
    int one_count = 0;     // 1의 개수
    int zero_count = 0;    // 0의 개수

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      if (x > 1) positive.push_back(x);
      else if (x == 1) one_count++;
      else if (x == 0) zero_count++;
      else negative.push_back(x);
    }
    sort(positive.begin(), positive.end(), greater<int>());
    sort(negative.begin(), negative.end());

    int result = 0;
    for (int i = 0; i + 1< (int) positive.size() ; i += 2)
    {
      result += positive[i] * positive[i + 1];
    }

    if (positive.size() % 2 == 1)
      result += positive.back();
    
    for (int i = 0; i + 1 <(int) negative.size(); i += 2) {
      result += negative[i] * negative[i + 1];
    }
    
    if (negative.size() % 2 == 1) {
        if (zero_count == 0) {
            result += negative.back();
        }
    }

    
    // 1의 개수는 모두 더해줌
    result += one_count;

    cout << result << '\n';
    return 0;
}


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int arr[60];

// int main(void){
//   int n;
//   int ans = 0;
//   cin >> n;

//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   sort(arr, arr+n);
//   int check = n / 2;
//   int idx = n - 1;
//   while (check)
//   {
//     int valid = min(arr[idx], arr[idx - 1]);
//     // if (valid < 0) ans = ans + arr[idx] * arr[idx - 1];
//     // else if (valid == 0)  ans = ans + (arr[idx] + arr[idx - 1]); -1 -2 1 2 3 4   --  (4 3) 2    -1 -2        1
//     if (valid > 0 )ans = ans + arr[idx] * arr[idx - 1];
//     else break;
//     idx -= 2;
//     check -= 1;
//   }
//   for (int i = 0; i < count; i++)
//   {
//     /* code */
//   }
  

//   if (1 == n / 2) ans = ans + arr[n - 1]; 
  
//   cout << ans << "\n";
  
// }