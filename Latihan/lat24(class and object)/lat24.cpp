#include<iostream>

using namespace std;
// a class and a object is related, object is an instance of a class so it have the same properties as the class but different,so all the object have same variable but different value, same same but different
class Book{// make a class
    public:
        string title;
        string author;
        int pages;
};

int main(){
    Book book1;//make the object
    book1.title = "Le petit prince";
    book1.author = "Antoine de Saint-Exupéry";
    book1.pages = 96;
    Book book2;//make the object
    book2.title = "Harry potter";
    book2.author = "JK Rowling";
    book2.pages = 69;
    
    cout << book1.pages << endl;
    cout << book1.author << endl;
    cout << book1.title << endl;
    cout << book2.pages << endl;
    cout << book2.author << endl;
    cout << book2.title << endl;
    return 0;
}