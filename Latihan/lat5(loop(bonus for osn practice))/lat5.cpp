#include <iostream>

using namespace std;
//loop
int main(){
    int n = 10;
    int x = 0;
    //only execute if i is under 10, if not add 1 to i
    for (int i = 0; i <= 10; i++){
        x = x+2*i;
        cout << x << endl;
    }
}