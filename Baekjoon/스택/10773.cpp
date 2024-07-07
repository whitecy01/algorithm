#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin >> n;

    int num;
    stack<int> sta;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (num != 0){
            sta.push(num);
        }
        else {
            if (sta.empty() == 0){
                sta.pop();
            }
        }
    }
    
        int answer = 0;
        int roop = sta.size();
        for (int i = 0; i < roop; i++)
        {
            answer += sta.top();
            sta.pop();
        }
        cout << answer << "\n";
    // }

    
    
    
}