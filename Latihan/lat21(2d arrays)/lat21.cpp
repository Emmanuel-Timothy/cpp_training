#include<iostream>

using namespace std;

int main(){

    int numberGrid[3][2] = {// this is 2d arrays, so basically a 2d array is an array of arrays, you can theoritacaly do it infintely, so there could be 1000 layer of array
        {1,2},{3,4},{5,6}
    };
    cout << numberGrid[0][1];

    return 0;
}