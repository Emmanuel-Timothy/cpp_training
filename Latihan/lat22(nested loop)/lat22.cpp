#include<iostream>

using namespace std;

int main(){

    int numberGrid[3][2] = {// this is 2d arrays, so basically a 2d array is an array of arrays, you can theoritacaly do it infintely, so there could be 1000 layer of array
        {1,2},{3,4},{5,6}
    };
    for(int i = 0; i < 3; i++){// this is a loop that is going to run 3 times
        for(int j = 0; j < 2; j++){// nested loop is a loop that is inside another loop, so this will run in total of 6 times
            cout << numberGrid[i][j];
        }
        cout << endl;
    }
    return 0;
}