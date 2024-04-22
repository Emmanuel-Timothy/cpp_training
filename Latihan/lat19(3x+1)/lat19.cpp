#include<iostream>
#include <windows.h>

using namespace std;

int main(){
    int num;
    int turu = 1;
    cout << "Enter a number: ";
    cin >> num;
    while(num != 1){// check if num == 1
        if(num % 2 == 0){// if the number is even, it is divided by 2 and will result in 0. If it is odd, it will not be divided by 2 and will not be 0.
            num = num / 2;//even, if the number is even, divide by 2.
            Sleep(turu);
        }
        else{
            num = num * 3 + 1;//odd, if the number is odd, it is multiplied by 3 and 1 is added to it.
            Sleep(turu);
        }
        cout << num << ", ";
    }
    return 0;
}