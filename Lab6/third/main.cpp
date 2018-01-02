/*
An Example of Class To Class Type Conversion:
@DC --> Type conversion is done through Constructor in Destination Class
and through Operator Overloading in the Source class
Syntax:
ConstructorName(Class_Type_to_be_converted obj){
	//Statements
}
obj1 = obj2
D       S
D-Destination Class
S-Source Class
Remember D comes Before S

*/
#include<iostream>
#include<cmath>
//Defining Macros for PI and DEGREE to convert the radian to Degree.
#define PI 3.14159
#define DEGREE 180/PI

using namespace std;
class Rectangle{
	private:
		int x,y;
	public:
	/*Since we cannot access the value of x and y in the constructor we make
	functions to access their values, Since we do not make Constructor friend function
	
	*/
		int returnX(){
			return x;
		}
		int returnY(){
			return y;
		}
		void setXY();
		void displayRect();
		
};

class Polar{
	private:
		float r,angle;
	public:
		Polar(Rectangle temp){
			r = sqrt(pow(temp.returnX(),2)+pow(temp.returnY(),2));
			angle = atan(temp.returnY()/temp.returnX()) * DEGREE;
			//atan calculates Tan Inverse
		}
		Polar(){}
		void displayPolar();
		
};


int main(){
	Polar polar;
	Rectangle rect;
	rect.setXY();
	polar = rect;
	rect.displayRect();
	cout << "Equivalece in Polar Form is:"<<endl;
	polar.displayPolar();
	return 0;
}

void Polar::displayPolar(){
	cout << "r: " << r <<endl;
	cout <<"Angle: " << angle <<endl;
}

void Rectangle :: setXY(){
	cout << "Enter X and Y co-ordinates" << endl;
	cin>>x>>y;
}

void Rectangle::displayRect(){
	cout <<"X: "<< x <<endl;
	cout <<"Y: "<< y <<endl;
}