// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1002];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  
  for (int i = n-1; i >= 0; i--)
  {
    int idx = i;
    for (int j = 0; j < i; j++)
    {
      if (arr[idx] < arr[j]) {idx = j; }
    }

    swap(arr[idx], arr[i]);
   
  }
   for (int q = 0; q < n; q++)
  {
    cout << arr[q] << " ";
  }
  

  
}