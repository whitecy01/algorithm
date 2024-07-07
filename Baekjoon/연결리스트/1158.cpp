#include <iostream>
#include <list>
using namespace std;

int main(){
    int n, k;
    list<int> lst;
    list<int>::iterator iter = lst.begin();
    cin >> n >> k;
    for (size_t i = 1; i <= n; i++)
    {
        lst.push_back(i);
    }
    cout << "<";
    while (lst.size() > 1)
    {
        for (int i = 0; i < k - 1; i++)
        {
            int tmp = lst.front();
            lst.pop_front();
            lst.push_back(tmp);
        }
        cout << lst.front() << ", ";
        lst.pop_front();
    }
    cout<< lst.front() << ">";
}