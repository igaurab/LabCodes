#include <iostream>
using namespace std;

class Class2{
    private:
        int n1,n2;
    public:
	Class2(){
	n1=2;
	n2 =4;
	}
        friend int add(Class2 obj2);
        friend void multiply(Class1 obj1, Class2 obj2);
        friend void subtract(Class1 obj1, Class2 obj2);
};

class Class1{

    private:
        int n1,n2;
    public:
	
	Class1(){
	n1=1;
	n2 =3;
	}
        int add(Class2 obj2){
           return n1+n2+obj2.n1+obj2.n2; 
        }
    
        friend void multiply(Class1 obj1, Class2 obj2);
        friend void subtract(Class1 obj1, Class2 obj2);
};

void multiply(Class1 obj1, Class2 obj2){
   cout << obj1.n1*obj1.n2*obj2.n1*obj2.n2;
}

void subtract(Class1 obj1 , Class2 obj2){
    cout << obj1.n1-obj2.n2;
}

int main(){
    Class1 obj1;
    Class2 obj22;
    int sum;
    sum=obj1.add(obj22);
    cout << sum << endl;
    multiply(obj1,obj22);
    subtract(obj1,obj22);
return 0;
}
