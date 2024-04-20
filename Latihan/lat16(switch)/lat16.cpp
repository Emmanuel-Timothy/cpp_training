#include <iostream>

using namespace std;
//similar to if else, but more efficient for large number of cases, use if else for boolean,loop and use switch for cases
string getDayOfWeek(int daynum){
    string dayname;
    switch(daynum){
        case 0:
        dayname = "Sunday" ;
            break;
            case 1:
        dayname = "Monday" ;
            break;
            case 2:
        dayname = "Tuesday" ;
            break;
            case 3:
        dayname = "Wednesday" ;
            break;
            case 4:
        dayname = "Thursday" ;
            break;
            case 5:
        dayname = "Friday" ;
            break;
            case 6:
        dayname = "Saturday" ;
            break;
            default:
        dayname = "You live in mars or somehthing?" ;
    }
    
    return dayname;
}

int main(){
    cout << getDayOfWeek(1);
    return 0;
}