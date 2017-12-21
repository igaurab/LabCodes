/*
Gaurab Panthee
C++ Lab
073/BCT/14

This Program Demonstrates the use of Function Overloading.
We are going to overload a function that converts inches to feet and vice versa. 
    1.With no arguments
    2.One argument
    3.Two argument
*/

#include <iostream>
using namespace std;

// 1.
void convert(){
    float inch,feet;
    cout << "Enter Inch: ";
    cin >>inch;
    feet = 0.083*inch;
    cout << endl;
    cout << inch <<"Inch = " << feet <<" feet." <<endl;
}

// 2.
void convert(float feet){
    float inch;
    inch = 12*feet;
    cout << endl;
    cout << feet <<"Feet = " << inch <<" inch." <<endl;

}

// 3.
void convert(float &feet, float &inch){
    float Feet,Inch;
    Feet = 0.083*inch;
    Inch = 12*feet;
    cout << endl;
    cout << feet <<"Feet = " << Inch <<" inch." <<endl;
    cout << inch <<"Inch = " << Feet <<" feet." <<endl;

}

int main(){

    float inch, feet;

    while(true){
        cout << endl;
        cout << "1.Convert Inch To Feet." <<endl;
        cout << "2.Convert Feet To Inch." <<endl;
        cout << "3.Convert Both Feet To Inch and Inch to Feet." <<endl;
        cout << "Press any other keys to exit"<<endl;
        
        int userInput;
        cin >> userInput;
   
        switch(userInput){
            case 1:
                convert();
                break;
            case 2:
                cout << "Enter Feet: " ;
                cin >> feet;
                convert(feet);
                break;
            case 3:
                cout << "Enter Feet: " ;
                cin >> feet ;
                cout << "Enter Inches: ";
                cin >>inch ;
                convert(feet, inch);
                break;
            default:
                exit(0);   
        }//Switch Close
    }//While Close. Exits out of loop when userInput is other than 1 2 or 3.

    return 0;
}//Main Close.