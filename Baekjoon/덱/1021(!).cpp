#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;


 int main(){
    int  n;
    int repeat;

    cin >> n >> repeat;

    deque<int> de;
    for (int i = 0; i < n; i++)
    {
        de.push_back(i + 1);
    }

    int num;
    int move = 0;
    int answer = 0;
    deque<int>::iterator it = de.begin(); 


    for (int i = 0; i < repeat; i++)
    {
        cin >> num;

        int idx = find(de.begin(), de.end(), num) - de.begin();
        
        int right = idx;
        int left = de.size() - idx;

        if (right < left){
            for (int i = 0; i < right; i++)
            {
                de.push_back(de.front());
                de.pop_front();
            }
            answer += right;
        }
        else
        {
            for (int i = 0; i < left; i++)
            {
                de.push_front(de.back());
                de.pop_back();
            }
            answer += left;
 
        }
        de.pop_front();

        // cout << answer << "\n";
        

    }
    cout << answer << "\n";
    
    
 }