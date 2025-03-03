#include <iostream>
#include <bits/stdc++.h>

using namespace std;

map<int, bool> Map;
int arr[500002];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        Map.insert({a, 1});
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin >> temp;
        if (Map[temp]) cout << 1 << " ";
        else cout << 0 << " ";
    }
    
    
}