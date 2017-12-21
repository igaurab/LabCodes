#include <iostream>
using namespace std;

//Macros:
#define PI 3.14

class Angle
{
private:
    float degree,radian;
public:
    void setDegree();
    void convertToRadian();
    void display();
};

int main()
{
    Angle degreeConv;
    degreeConv.setDegree();
    degreeConv.convertToRadian();
    degreeConv.display();
    return 0;
}

void Angle::setDegree(){
    cout <<"Enter the Degree: "<<endl;
    cin >> degree ;
}

void Angle::convertToRadian(){
    radian = degree * (PI/180);
}

void Angle::display(){
    cout << degree << "Degree = " << radian << " radian " << endl;
}
