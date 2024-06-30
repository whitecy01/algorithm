#include <iostream>
using namespace std;
int arr[8];
int input[8];
int main(){
    for (int i = 0; i < 8; i++)
    {
        arr[i] = i + 1;
    }


    int temp;
    for (int i = 0; i < 8; i++)
    {
        cin >> input[i];
    }

    if (input[0] == 1)
    {
        // cout << "here\n";
        for (int i = 0; i < 8; i++)
        {
            if (arr[i] != input[i])
            {
                cout << "mixed\n";
                return 0;
            }    
        }
        cout<<"ascending\n";
    }
    else if (input[0] == 8){

        int j = 0;
        for (int i = 7; i > -1; i--)
        {
            // cout << "arr[i] : " << arr[i] << " " << input[j] << "\n";
            if (arr[i] != input[j])
            {
                cout << "mixed\n";
                return 0;
            }   
            j++;
        }
        cout<<"descending\n";
    }
    else{

        // cout << "here3\n";
        cout << "mixed\n";
        return 0;
    }

    
}

//다른 사람 풀이
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int arr[8];
// 	int asc = 0;
// 	int dsc = 0;
// 	for (int i = 0; i < 8; i++)
// 	{
// 		cin >> arr[i];

// 		if (arr[i] == i + 1)
// 			asc += 1;
// 		else if (arr[i] == 8 - i)
// 			dsc += 1;
// 	}
// 	if (asc == 8)
// 		cout << "ascending";
// 	else if (dsc == 8)
// 		cout << "descending";
// 	else
// 		cout << "mixed";
// 	return 0;
// }

//https://lejent3.tistory.com/105