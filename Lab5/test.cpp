#include<iostream>
using namespace std;

class Test{
    private:
        int a=2;
    public:
        void add(/*Test n1,*/ Test n2){
           
           a =  a +n2.a;
           cout << a <<endl;
        }/*
        Test(int a){
            this->a = a;
            
        }*/

};

int main(){
    Test n1,n2;
    n1.add(n2);
    return 0;


}
