#include <queue>
#include <iostream>

using namespace std;

int main(){
    queue<int> pa;

    pa.push(1);
    pa.push(2);

    cout << pa.back() << "\n";
}