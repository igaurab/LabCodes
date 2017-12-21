#include <iostream>
using namespace std;

/*Pass By Pointer*/
float & returnLarger(float *temp1, float *temp2){
    
    if(*temp1 > *temp2 )
        return *temp1;
    
    return *temp2; 
}

/*Using Pass By Reference Instead of pass By Pointer. This acts as Overloaded function.*/
float & returnLarger(float &temp1, float &temp2){
    
    if(temp1 > temp2 )
        return temp1;
    
    return temp2; 
}

int main(){

    float temp1,temp2;

    cout << "Enter two Temperatures: " << endl;
    cin >> temp1 >> temp2;

    returnLarger(temp1, temp2) = 100;
    cout << "temp1: " << temp1 << endl << "temp2: " << temp2 <<endl;
    return 0;
    
}//Main Close
