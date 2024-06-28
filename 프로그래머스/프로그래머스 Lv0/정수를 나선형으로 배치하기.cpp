

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

bool desc(int a, int b){ 
  return a > b; 
} 

vector<vector<int> > solution(int n) 
{

    vector<vector<int> > answer;
    // int div = n * n;
    int first = 1;
    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            temp.push_back(first);
            first++;
        }
        answer.push_back(temp);
    }
    
    for (int i = 0; i < n; i++)
    {
         if(i == 0)
         {
            sort(answer[i].begin(), answer[i].end());
         }
         else
          {    
            sort(answer[i].begin(), answer[i].end(), desc);
         }
    }
    
    
    return answer;
}


int main()
{
    vector<vector<int> > a = solution(4);

    for (size_t i = 0; i < a.size(); i++)
    {
        for (size_t j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << ' ';
            /* code */
        }

        cout << endl;
        
    }
    

}