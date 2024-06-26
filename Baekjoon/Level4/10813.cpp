#include <iostream>
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

    

    int location1, location2;
    int temp;
    for (int i = 0; i < input; i++)
    {
        cin >> location1 >> location2;
        location1 = location1 - 1;
        location2 = location2 - 1;
        temp = arr[location1];
        arr[location1] = arr[location2];
        arr[location2] = temp;
    }

    for (int i = 0; i < busket; i++)
    {
        cout << arr[i] << " "; 
    }
    
    


}