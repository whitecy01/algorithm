#include <iostream>
#include <stack>
using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    stack<int> sta;

    int n;
    cin >> n;

    string str;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "push")
        {
            cin >> num;
            sta.push(num);
            // cout << num;
        }
        else if(str == "top"){
            if (sta.empty() == 0)
            {

                cout << sta.top() << "\n";
            }
            else
                cout<<"-1\n";
            
        }
        else if(str == "size")
        {
            cout << sta.size() << "\n";
        }
        else if (str == "empty")
        {
            if (sta.empty() == 0)
            {
                cout << "0" << "\n";
            }
            else
                cout << "1\n";       
        }
        else if (str == "pop"){
            if (sta.empty() == 0)
            {
                cout << sta.top() << "\n";
                sta.pop();
            }
            else
                cout << "-1\n";        
            }
    }
    
}