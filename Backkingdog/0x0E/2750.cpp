// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int arr[1002];
int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = n - 1; i > 0; i--)
  {
    int midx = 0;
    for (int j = 1; j <= i; j++)
    {
      if (arr[midx] < arr[j]) midx = j;
    }
    swap(arr[i], arr[midx]);
    
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << '\n';
  }

  // 이렇게 해도 됨 
  // for (int i = n - 1; i > 0; i--)
  // {
  //   swap(*max_element(arr, arr + 1 + i), arr[i]);
  // }
  
}