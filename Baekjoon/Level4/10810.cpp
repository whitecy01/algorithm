#include <iostream>
using namespace std;

int main(){
    int busket, input;

    cin >> busket >> input;

    int arr[busket];
    for (int i = 0; i < busket; i++)
    {
        arr[i] = 0;
    }
    
    
    // for (int p = 0; p < busket; p++)
    // {
    //     cout << arr[p] << " ";
    // }

    int i,j,k;
    for (int z = 0; z < input; z++)
    {
        cin >> i >> j >> k;
        // cout << "i : " << i << "  j : " << j << "  k : " << k << "\n";
        for (int q = i - 1; q <= j - 1; q++)
        {
            arr[q] = k;
        }
        // cout << "here : ";
        // for (int i = 0; i < busket; i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << "\n";

        
    }

    for (int i = 0; i < busket; i++)
    {
        cout << arr[i] << " ";
    }
    
    

}