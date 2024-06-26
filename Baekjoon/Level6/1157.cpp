
//이 문제 어려웠음
#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    string str;
    cin >> str;

    int arr[26], duplication = 0;

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); i++)
    {
        arr[i] = 0;
    }


 // 각 문자의 빈도 계산
    for(int i=0;i< str.length() ;i++)
    {
        if(str[i]<97) arr[str[i] - 65]++; //대문자
        else arr[str[i] - 97]++; //소문자

    }

    int max = 0, max_indx=0;
;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            max_indx = i;
        }
    }

        //가장 많이 사용된 알파벳이 여러개인가?
    for(int i=0;i<26;i++) {
        if(max==arr[i]) duplication++;
    }
    //여러개라면 ? 출력, 아니라면 대문자로 출력
    if(duplication>1) cout << "?";
    else cout << (char)(max_indx+65) << "\n";
    
   
    
}



//  O(n^2) 시간 복잡도를 가지는 중첩된 루프
// int main(){
//     string str;
//     cin >> str;

//     int count;
//     int temp_count;
//     int duplication_count;
//     char answer;

//     count = -1;
//     duplication_count =1;

//     if (str.length() == 1)
//     {
//         cout << static_cast<char>(toupper(str[0])) << "\n";
//         return 0;
//     }

//     int i = 0;
//     while (str[i])
//     {
//         temp_count = 0;

//         int j = i + 1;
//         if (toupper(str[i]) == toupper(answer))
//         {
//             i++;
//             continue;
//         }
//         while (str[j])
//         {
//             if (toupper(str[i]) == toupper(str[j]))
//             {
//                 temp_count++;
//             }
//             j++;
//         }

//         if (temp_count > count)
//         {
//             count = temp_count;
//             //   cout << "if : " <<temp_count << "h : " << count << "\n";
//             answer = str[i];
//         }
//         else if (temp_count == count)
//         {
//                     //  cout << temp_count << "h : " << count << "\n";
//             duplication_count++;
//             if (duplication_count >= 2) {cout << "?\n"; return 0;};
//         }
//         i++;
//     }

//         cout << static_cast<char>(toupper(answer)) << "\n";

    
// }