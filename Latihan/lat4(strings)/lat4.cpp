#include <iostream>

using namespace std;
//playing with string
int main(){
    //the string
    string text = "The quick brown fox jumps over the lazy dog";
    //find the length of the string
    cout << text.length() << endl;
    //find the 24(25) letter from the string
    cout << text[24] << endl;
    //replace the 40th(41th) from the string with B
    text[40] = 'B';
    //show the edited string 
    cout << text << endl;
    //find in which letter the word fox come after the 0th letter
    cout << text.find("fox", 0) << endl;
    //grab 3 word starting from the 40th(41th) letter
    cout << text.substr(40,3);
}