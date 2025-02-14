// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;

  cin >> n;
  stack<int> sta;
  for (int i = 0; i < n; i++)
  {
    int temp;
    cin >> temp;
    if (temp == 0 && !sta.empty()){
      sta.pop();
    }
    else sta.push(temp);
  }    
  int sum = 0;
  while (!sta.empty())
  {
    sum += sta.top();
    sta.pop();
  }
  cout << sum << "\n";
  
  
}