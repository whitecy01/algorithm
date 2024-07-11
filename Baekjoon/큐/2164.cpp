#include <iostream>
#include <queue>

using namespace std;

int main(){
    queue<int> qu;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        qu.push(i);
    }

    while (qu.size() != 1)
    {
        if (!qu.empty())
        {
            qu.pop();
            if (!qu.empty())
            {
                int num = qu.front();
                qu.pop();
                qu.push(num);
            }
        }
    }
    cout << qu.front() << "\n";
    
    
}