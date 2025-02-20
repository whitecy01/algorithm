#include <iostream>
#include <algorithm>

using namespace std;

int n;
int w[100005];

int main(void){
    cin >> n;
    
    for (int i = 0; i < n; i++){cin >> w[i];}
    sort(w, w+n);
    int min_height = 0;
    for (int i = 1; i <= n; i++)
    {
        min_height = max(min_height, w[n - i] * i);
    }
    cout << min_height << "\n";   
    
}