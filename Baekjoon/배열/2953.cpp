#include <iostream>
using namespace std;
int arr[5][4];

int main(){
    int temp;
    int max;
    int index = 0;
    max = 0;
    temp = 0;
    for (int i = 0; i < 5; i++)
    {
        temp = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
        
        for (int q = 0; q < 4; q++)
        {
            temp += arr[i][q];
        }
        if (temp >= max)
        {
            max = temp;
            index = i + 1;
        }
    }
    cout << index << " " << max;
}