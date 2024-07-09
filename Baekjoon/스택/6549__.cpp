#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
    int num;
    while (true)
    {
        cin >> num;
        if (num == 0)
            break;
        stack<int> pa;
        long long max = -1;
        int arr[num];
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
    
        for (int i = 0; i < num; i++)
        {
            // cout << "here\n";
            while (!pa.empty() && arr[pa.top()] > arr[i])
            {
                long long answer = arr[pa.top()];
                int l = i; 
                cout << "Up l : " << l << " pa.top() : " << pa.top() << "\n";        
                pa.pop();

                if (!pa.empty())
                {
                    cout << "here\n";
                    l = i - pa.top() - 1;
                }
                cout << "Down l : " << l << "\n";    
                if (max < l * answer)
                {
                    max = l * answer;
                         cout << " max : " << max << "\n";  
                }
            }
        
            pa.push(i); 
        }

        // for (auto i  : max)
        // {
        //     cout << i << " ";
        // }
        // int size = pa.size();
        // for (int i = 0; i < size; i++)
        // {
        //     cout << pa.top() << "\n";
        //     pa.pop();
        // }
        
        
    

        // for (int i = 0; i < num; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        
    
        
        
    }
    

}

//https://gabjuho.tistory.com/entry/%EB%B0%B1%EC%A4%80-6549%EB%B2%88-%ED%9E%88%EC%8A%A4%ED%86%A0%EA%B7%B8%EB%9E%A8%EC%97%90%EC%84%9C-%EA%B0%80%EC%9E%A5-%ED%81%B0-%EC%A7%81%EC%82%AC%EA%B0%81%ED%98%95-C