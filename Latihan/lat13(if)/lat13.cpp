#include <iostream>

using namespace std;
//if and else if for certain condition
//else is for the rest(that doesn't match previous criteria)
//'&&' is 'and'
//'||' is 'or'
//'!' is to make the condition become NOT
int main(){

    bool isMale = false;
    bool isTall = false;
    if(isMale && isTall){//male and tall
        cout << "you are a tall male";
    }else if(isMale && !isTall){//male and not tall
        cout << "you are a short male";
    }else if(isTall && !isMale){//tall and not male
        cout << "you are a Tall female";
    }else if(!isTall && !isMale){//not tall and not male
        cout << "you are a short female";
    }else{
        cout << "HOW";
    }


}