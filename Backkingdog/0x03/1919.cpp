#include <bits/stdc++.h>
using namespace std;

int arr[26] = {0};
int brr[26] = {0};

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  string a,b;
  cin >> a >> b;
  for (int i = 0; i < a.size(); i++)
  {
    arr[a[i] - 'a']++; 
  }
  for (int i = 0; i < b.size(); i++)
  {
    brr[b[i] - 'a']++; 
  }
  int ans = 0;
  for (int i = 0; i < 26; i++)
  {
    int temp = 0;
    if (arr[i] > brr[i]){
      temp = arr[i] - brr[i];
      // cout << "first i : " << i << "\n";
    }
    else if (arr[i] < brr[i]){
      temp = brr[i] - arr[i];
      // cout << "seocnd i : " << i << "\n";
    }
    ans += temp;
  }
  cout << ans << "\n";
  
  
}