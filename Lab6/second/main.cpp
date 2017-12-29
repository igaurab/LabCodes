#include<iostream>
#include <string.h>
using namespace std;

class String
{
    private:
        char a[20];
    public:
    	void setValue (char temp[]){
    		strcpy(a,temp);
    	}
    	void display(){
    		cout << a <<endl;
    	}
        bool operator == (String obj){
        	int value = strcmp(a,obj.a);
        	if(value == 0){
        		return true;
        	}
        	return false;
        }
        bool operator > (String obj){
        	int value = strcmp(a,obj.a);
        	if(value > 1){
        		return true;
        	}
        	return false;
        }
        bool operator < (String obj){
        	int value = strcmp(a,obj.a);
        	if(value < 1){
        		return true;
        	}
        	return false;
        }
};

int main(){
	String a , b ;
	char s[10] = "Hello";
	char d[10] = "Hello";
	a.setValue(s);
	b.setValue(d);
	if(a == b){
		cout << "Equal" << endl;
	}
	if(a>b){
		cout << " A>B " <<endl;
	}
	if(a<b){
		cout << " A<B " <<endl;
	}
}
