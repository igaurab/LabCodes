#include<iostream>
using namespace std;
//Function Decleration
class Uniary;
void operator ++(Uniary &obj);

class Uniary
{
private:
	int a;
public:
	friend void operator ++(Uniary &obj);
	friend void operator ++(Uniary &obj, int);
	void display(){
		cout << a <<endl;
	}
	Uniary() {
		a =5;
	}
};

int main(){
	Uniary num;
	num++;
	num.display();
	++num;
	num.display();
}
void operator ++ (Uniary& obj){
	obj.a +=1;
}
void operator ++ (Uniary& obj, int){
	obj.a+=1;
}
