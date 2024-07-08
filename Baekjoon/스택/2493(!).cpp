#include <stack>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(0);

    int n;
    cin >> n;

    

    stack<pair<int, int> > pa;
    

    int height;
    for (int i = 0; i < n; i++)
    {
        cin >> height;
        while (pa.empty() == 0)
        {
            if (height < pa.top().second){
                cout << pa.top().first << " ";
                break ;
            }
            
            pa.pop();
        }

        if (pa.empty() == 1){
            cout << "0 ";
        }

        pa.push(make_pair(i + 1, height));
    }
    
}