#include<iostream>
using namespace std;

class B;
class A{
private:
    float a,b;
public:
    A(){}
    A(float a, float b);
    friend A multiply(A temp_a,B temp_b);
    friend A divide(A temp_a,B temp_b);
    A add(B b);
    void display();
    
    
};
class B{
private:
    float a,b;
public:
    B(){}
    B(float a, float b);

    friend A multiply(A temp_a,B temp_b);
    friend A divide(A temp_a,B temp_b);
    friend A A :: add(B temp_b);
};

int main(){
    A a(1,2),temp;
    B b(2,4);
    
cout <<"Addition"<<endl;
    temp=a.add(b);
    temp.display();

    cout<<"Multiplication"<<endl;
    temp=multiply(a,b);
    temp.display();

    cout<<"Division"<<endl;
    temp=divide(a,b);
    temp.display();

    return 0;
}

A multiply(A temp_a,B temp_b){
    A temp;
    temp.a = temp_a.a*temp_b.a;
    temp.b = temp_a.b *temp_b.b;

    return temp;
}
A divide(A temp_a,B temp_b){
    A temp;
    temp.a = temp_a.a/temp_b.a;
    temp.b = temp_a.b /temp_b.b;

    return temp;
}

A A :: add(B temp_b){
    A sum ;
    sum.a = a+temp_b.a;
    sum.b = b+temp_b.b;
    return sum;
}

void A::display(){
    cout<<"a: " <<a<<endl;
    cout<<"b: " <<b<<endl;
}

A::A(float a, float b){
    this->a = a;
    this->b = b;
}


B::B(float a, float b){
    this->a = a;
    this->b = b;
}