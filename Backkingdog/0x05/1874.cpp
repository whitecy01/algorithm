// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n;
int nums[100003];
int arr[100003];
stack<int> sta;
vector<char> ans;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 1; i <= n; i++) { nums[i] = i; }
  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];
  }
  // for (int i = 1; i <= n; i++)
  // {
  //   cout << nums[i] << " ";
  // }
  // cout << "\n";
  // for (int i = 1; i <= n; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  
  int idx = 1;
  // int temp = 2;
  for (int i = 1; i <= n; i++)
  {
    // cout << "arr[i] : " << arr[i] << " \n";
    // cout << "nums[i] : " << nums[i] << " \n";
    while (arr[i] >= nums[idx] && idx <= n)
    {
      // cout << "nums[idx] : " << nums[idx] << " +\n"; 
      sta.push(nums[idx]);

      // cout << "+\n";
      ans.push_back('+');
      idx++;
      // cout << "+\n";

    }
    // cout << "\n";
    while (!sta.empty() && sta.top() == arr[i])
    {
      sta.pop();
      ans.push_back('-');
      // cout << "-\n";
    }
    // temp--;
    // if (temp == 0)break;
  }

  if (!sta.empty()) cout << "NO\n";
  else {
    for (auto s : ans)
    {
      cout << s << "\n";
    }
    
  }
}