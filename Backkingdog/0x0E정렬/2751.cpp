#include <iostream>
using namespace std;
int arr[1000001];
int temp[1000001];

void merge(int sa, int en){

    int mid = (sa+en)/2;
    int rlidx = mid;
    int lidx = sa;
    for (int i = sa; i < en; i++)
    {
        if (rlidx == en) temp[i] = arr[lidx++];
        else if (lidx == mid) temp[i] = arr[rlidx++];
        else if (arr[lidx] <= arr[rlidx]) temp[i] = arr[lidx++];
        else temp[i] =arr[rlidx++];
    }
      for(int i = sa; i < en; i++) arr[i] = temp[i];

    
}

void mergesort(int sa, int en){
    if(sa + 1 == en) return;

    int mid = (sa + en) / 2;
    mergesort(sa, mid);
    mergesort(mid, en);
    merge(sa, en);

}

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
    
    mergesort(0, n);

    for (int i = 0; i < n; i++) {cout << arr[i] << "\n";}
}