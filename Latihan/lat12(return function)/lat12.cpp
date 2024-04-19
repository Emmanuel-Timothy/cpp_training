#include <iostream>

using namespace std;
//make a function
int cube(int num){
    //the operation inside function
    int result = num * num * num;
    //save the result value + end function
    return result;
}

int main(){
    //answer is function(x)
    int answer = cube(5);
    //print answer
    cout << answer;
}