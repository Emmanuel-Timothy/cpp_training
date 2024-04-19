#include <iostream>

using namespace std;
//make a function
void sayHi(){
    cout<< "Hello User" << endl;
}
void call(string name,int age){
    cout << "Hello " << name << " you are " << age << " years old" << endl;
}
int main(){
    //call the function
    sayHi();
    //call the function + give the variable value
    call("Tom",16);
    call("Steeve", 38);
    call("Robert", 79);
}
