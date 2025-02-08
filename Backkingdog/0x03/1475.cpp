// Authored by : whitecy
// Co-authored by : -
// http://boj.kr/****************
#include <bits/stdc++.h>
using namespace std;

int arr[10];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  fill(arr, arr + 9, 0);
  while (n)
  {
    int temp = n % 10;
    arr[temp]++;
    n = n / 10;
  }

  int temp2 = 0;
  int temp = (arr[6] + arr[9] + 1) / 2;
  arr[6] = arr[9] = temp;
  //   for (int i = 0; i < 10; i++)
  // {
  //   cout << arr[i] << " ";
  // }
  // cout << "\n";
  for (int i = 0; i < 10; i++)
  {
    temp2 = max(temp2, arr[i]);
  }
  cout << temp2 << "\n";
  
  
  
}