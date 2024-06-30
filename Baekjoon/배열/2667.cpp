#include <iostream>
#include <vector>

using namespace std;


int main(){

    int n;
    int count = 0;

    cin >> n;
    // n = n + 1;

    // cout <<"here\n";
    int arr[n + 1][n + 1];
    
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;  // Read the entire line as a string

        for (int j = 0; j < n; j++) {
            arr[i][j] = line[j] - '0';  // Convert character to integer
        }
    }
    cout << "here\n";

    vector<int> vec;

    int home = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 1)
            {
                cout<< " i : " << i << " j : " << j << "\n";
                count++;
                home = 0;
                // cout << "here\n";
                int x = i;
                int y = j;
                while (true)
                {
                    if (arr[x][y + 1] == 1)// 오른쪽
                    {
                        home++;
                        arr[x][y] = 0;
                        y = y + 1;
                    }
                    else if (arr[x][y - 1] == 1) // 왼쪽
                    {
                        home++;
                        arr[x][y] = 0;
                        y = y - 1;
                    }
                    else if (arr[x + 1][y] == 1) //위
                    {
                        home++;
                        arr[x][y] = 0;
                        x = x + 1;
                    }
                    else if (arr[x - 1][y] == 1) // 아래
                    {
                        home++;
                        arr[x][y] = 0;
                        x = x - 1;
                    }
                    else
                    {
                        vec.push_back(home);
                        break;
                    }
                }
            }
        }
    }
    
    cout << count << "\n";
    for (auto a : vec)
    {
        cout << a << "\n";
    }
    


}