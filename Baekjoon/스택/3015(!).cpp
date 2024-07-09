#include <iostream>
#include <stack>

using namespace std;
long long answer;

int main(){
    int n;
    cin >> n;

    stack<pair<int, int> > pa;

    int num;
    int cnt;
    for (int i = 0; i < n; i++)
    {
        cnt = 1;
        cin >> num;
        while (!pa.empty() && pa.top().first <= num)
        {
            // cout << "top() : " << pa.top() << " arr[i] : " <<  num << "\n"; 
            answer += pa.top().second;
            if (pa.top().first == num)
                cnt += pa.top().second;
            pa.pop();
        }
        if (!pa.empty())
            answer++;
        
        pa.push(make_pair(num, cnt));
    }
    cout << answer;

}