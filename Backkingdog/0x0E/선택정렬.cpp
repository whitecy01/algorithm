#include <iostream>
#include <vector>
using namespace std;


void printArray(vector<int> &arr){
    for (int num : arr){
        cout << num << " ";
    }
    cout << endl;
}

void selectionSort(vector<int> &arr){
    int mix = 0;

    int n = arr.size();
    for (int i = n - 1; -1 < i; i--)
    {
        mix = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[mix]) mix = j;
        }
        swap(arr[i], arr[mix]);
    }
}


// 메인 함수
int main() {
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(3);
    arr.push_back(8);
    arr.push_back(4);
    arr.push_back(2);


    cout << "정렬 전: ";
    printArray(arr);

    selectionSort(arr);

    cout << "정렬 후: ";
    printArray(arr);

    return 0;
}