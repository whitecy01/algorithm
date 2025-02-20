// Authored by : whitecy
// Co-authored by : -

#include <bits/stdc++.h>
using namespace std;

int n, m;
long long arr[1000002];

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  for (int i = 0; i < m; i++)
  {
    swap(arr[0], *min_element(arr, arr+n));
    swap(arr[1], *min_element(arr + 1, arr+n));
    long long temp = arr[0] + arr[1];
    arr[0] = temp;
    arr[1] = temp;
  }
  long long sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += arr[i];
  }

  cout << sum << "\n";
  
  
  
  
}