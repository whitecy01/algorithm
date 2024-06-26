#include <iostream>
#include <algorithm>

using namespace std;
int main(){
    int busket;
    int input;
    cin >> busket >> input;

    int arr[busket];

    for (int i = 0; i < busket; i++)
    {
        arr[i] = i + 1;
    }

    int a,b;
    for (int i = 0; i < input; i++)
    {
        cin >> a >> b;
        a = a -1;
        // b = b - 1;
        reverse(arr + a, arr + b);

    }

      for (int i = 0; i < busket; i++)
    {
        cout << arr[i] << " ";
    }
    
}