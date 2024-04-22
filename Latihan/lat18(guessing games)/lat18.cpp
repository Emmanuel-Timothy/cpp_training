#include<iostream>
#include<cstdlib>

using namespace std;

int main(){
    int secret = rand() % 10 + 1;// pick a random number between 1 and 10 and store it in secret, how it works is that it picks a random number between 0 and 9 and adds 1 to it, the mod 10 makes it so that it only picks numbers between 0 and 9
    int guess;
    int guessC = 0;
    int guessL = 3;
    bool OFG = false;


    while(secret != guess && !OFG){//check if secret is not equal to guess and if OFG is false
        if(guessC < guessL){
            cout << "Enter guess: ";
            cin >> guess;
            guessC++;// add 1 to guess count
        }else{
            OFG = true;
        }
    }
    if(OFG){
        cout << "You lose";
    }else{
        cout << "You win";
    }
    

    }
