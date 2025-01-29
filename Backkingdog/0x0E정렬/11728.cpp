#include <iostream>
#include <vector>


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    vector <int> n_arr; 
    vector <int> m_arr;
    int n,m;

    cin >> n;
    cin >> m;

    int temp;
    for(int i = 0; i < n; i++){
        cin >> temp;
        n_arr.push_back(temp);
    }

    for(int i = 0; i < m; i++){
        cin >> temp;
        m_arr.push_back(temp);
    }

    vector <int> ans;
    for (int i = 0; i < n+m; i++)
    {

        if (!n_arr.empty()){
            if (!m_arr.empty() && n_arr.front() > m_arr.front()){
                ans.push_back(m_arr.front());
                m_arr.erase(m_arr.begin());
            }
            else 
            {
                ans.push_back(n_arr.front());
                n_arr.erase(n_arr.begin());       
            }
        }
        else if (!m_arr.empty()){
            ans.push_back(m_arr.front());
            m_arr.erase(m_arr.begin());    
        }
    }
    
    for (int a : ans)
    {
        cout << a << " ";
    }
    

}