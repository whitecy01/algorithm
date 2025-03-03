#include <iostream>
#include <algorithm>

using namespace std;

int arr[5] = {2, 13, 6 ,4 , -2};
int n = 5;
int main(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (arr[j] > arr[j + 1]) swap(arr[j], arr[j + 1]);
        }
        
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }

}