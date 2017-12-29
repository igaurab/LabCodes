#include<iostream>
#include <string.h>
using namespace std;

class Length
{
    private:
       int m,c;
    public:
    	void setValue (int m, int c){
    		this->m = m;
    		this->c = c;
    	}
    	void display(){
    		cout << m <<endl;
    		cout << c <<endl;

    	}
        bool operator == (Length obj){
        	int value = strcmp(,obj.a);
        	if(value == 0){
        		return true;
        	}
        	return false;
        }
        bool operator >= (Length obj){
        	int value = strcmp(a,obj.a);
        	if(value > 1){
        		return true;
        	}
        	return false;
        }
        bool operator <= ( Length hobj){
        	int value = strcmp(a,obj.a);
        	if(value < 1){
        		return true;
        	}
        	return false;
        }
};

int main(){
	Length a,b;
	a.setValue(10,20);
	b.setValue(10,20);
	if(a == b){
		cout << "Equal" << endl;
	}
	if(a>=b){
		cout << " A>B " <<endl;
	}
	if(a<=b){
		cout << " A<B " <<endl;
	}
}
