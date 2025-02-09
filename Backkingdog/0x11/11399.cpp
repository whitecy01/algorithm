#include <iostream>
#include <algorithm>
using namespace std;

int n;
int s[10002];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n; for (int i = 0; i < n; i++){ cin >> s[i];}

    sort(s, s+n);
    int sum = 0;
    int temp = 0;
    for (int i = 0; i < n; i++){sum = sum + s[i]; temp += sum;}
    cout << temp <<  "\n";
    
}