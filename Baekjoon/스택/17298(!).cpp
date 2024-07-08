#include <stack>
#include <iostream>
#include <vector>
using namespace std;

int arr[1000001];
int answer[1000001];


//인덱스를 통해서 비교를 한다.
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int num;
    stack<int> pa;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        arr[i] = num;
    }

    for (int i = 0; i < n; i++)
    {
        while (!pa.empty() && arr[pa.top()] < arr[i])
        {
            answer[pa.top()] = arr[i];
            pa.pop();
        }
        pa.push(i);     
    }

    while (!pa.empty())
    {
        answer[pa.top()] = -1;
        pa.pop();
    }

    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << " ";
    }
    
    
    
    
    
    
        
}