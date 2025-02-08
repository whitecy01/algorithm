#include <bits/stdc++.h>

using namespace std;

int arr[10];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b,c;

  cin >> a >> b >> c;
  long long answer = a * b * c;
  // cout << "answer : " << answer << "\n";
  fill(arr, arr+10, 0);
  while (answer){
    int temp = answer % 10;
    // cout <<  "temp : "  << temp << "\n";
    arr[temp]++;
    answer = answer / 10;
  }
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << '\n';
  }
  
  
}