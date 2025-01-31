#include <iostream>
using namespace std;
int arr[1001];

int main()
{
    int n;
    cin >> n;

    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    int ridx;
    for (int i = n - 1; i > 0; i--)
    {
        ridx = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[ridx] < arr[j]) {ridx = j;}
        }
        swap(arr[i], arr[ridx]);
    }
    

    for (int i = 0; i < n; i++) {cout << arr[i] << "\n";}
    
    

}