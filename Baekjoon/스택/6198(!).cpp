#include <iostream>
#include <stack>
#include <vector>

using namespace std;


int main(){

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    stack<long long> pa;
    vector<long long> vec;

    int height;
    for (int i = 0; i < n; i++)
    {
        cin >> height;
        vec.push_back(height);
    }
    
    long long answer = 0;
    for (int i = 0; i < n; i++)
    {
        while (!pa.empty() && pa.top() <= vec[i])
        {
            pa.pop();
        }
        answer += pa.size();
        pa.push(vec[i]);
    }
    cout << answer << "\n";
        

}