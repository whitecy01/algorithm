// #include <bits/stdc++.h>
#include <iostream>


using namespace std;
//   insert(3, 40, arr, len); // 10 20 30 40
void insert(int idx, int num, int arr[], int& len){
    //추가적인 메모리를 사용하지 않고 하는. ㅓㅂ
    for (int i = len; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = num;
    len++;
    
 
    // if (idx == len ){
    //     arr[idx] = num;
    //     int i = 0;
    //     while (arr[i])
    //     {
    //         i++;
    //     }
    //     len = i;
    //     return ;
    // }

    // int temp[len + 1];
    // temp[0] = num;
    // int j = 1;
    // int i = idx;
    // while (i < len)
    // {
    //     temp[j] = arr[i];
    //     j++;
    //     i++;
    // }

    // i = 0;
    // while (temp[i])
    // {
    //     arr[idx] = temp[i];
    //     idx++;
    //     i++; 
    // }

    
    // i = 0;
    // while (temp[i])
    // {
    //     i++;
    // }
    // len = i;
    
    
    // for(int i = 0; i < len+1; i++) cout << "arr[i] " << arr[i] << ' ';
    //     cout << "\n\n";

}


//   int arr[10] = {10, 50, 40, 30, 70, 20};
//   int len = 6;
//   erase(4, arr, len); // 10 50 40 30 20

void erase(int idx, int arr[], int& len){
    for (int i = idx; i < len - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    len--;
    
    
}

void printArr(int arr[], int& len){
  for(int i = 0; i < len; i++) cout << arr[i] << ' ';
  cout << "\n\n";
}

void insert_test(){
  cout << "***** insert_test *****\n";
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test(){
  cout << "***** erase_test *****\n";
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, len); // 10 40 30
  printArr(arr, len);
}

int main(void) {
  insert_test();
  erase_test();
}