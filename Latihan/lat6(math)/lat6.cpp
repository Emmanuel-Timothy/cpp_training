#include <iostream>
#include <cmath>

using namespace std;
//math(USE PEMDAS)
int main(){
    //addition
    cout << 1+1 << endl;
    //substraction
    cout << 10-2 << endl;
    //multiplicatiom
    cout << 5*2 << endl;
    //division
    cout << 20/4 << endl;
    //modulus(remainder)
    cout << 9%6 << endl;
    //multiply then add
    cout << 1+5*2 << endl;
    //bracet then outside bracet
    cout << (1+5)*2 << endl;
    //will end up as float/double
    int num0 = 1;
    float num1 = 2.5f;
    cout << num0 + num1 << endl;
    //integer will result in integer
    cout << 5/4 << endl;
    //float/double will result in float/double
    cout << 5.0/4.0f << endl;
    //first number to the power of second number
    cout << pow(2,5) << endl;
    //round the number
    cout << round(10.3) << endl;
    cout << round(6.9) << endl;
    //round up
    cout << ceil(2.1) << endl;
    //round down
    cout << floor(1.9) << endl;
    //return the biggest value
    cout << fmax(1, 10) << endl;
    //return the smallest number
    cout << fmin(1, 10) << endl;
}