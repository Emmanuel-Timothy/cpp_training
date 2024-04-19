#include <iostream>

using namespace std;
//mad libs kind of game
int main(){
    string name,object;
    int number;
    cout << "enter a name: ";
    cin >> name;
    cout << "enter a number: ";
    cin >> number;
    cout << "enter an object: ";
    cin >> object;
    cout << name << " had " << number << " " << object;
}