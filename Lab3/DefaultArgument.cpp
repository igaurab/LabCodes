/*
Gaurab Panthee
073/BCT/14

This Program Demonstrates the use of Default Arguments.

*/

#include <iostream>
using namespace std;

//Default Arguments Supplied
void printChar(char c = '#' , int number = 5){
    int i=0;
    for (i=0;i<number;i++){
        cout << c ;
    }
    cout << endl;
}

int main(){

    //With No Arguments Supplied
    printChar();

    //With given Character
    printChar('&');

    //Both Arguments Given
    printChar('*',10);

}//Main Close
