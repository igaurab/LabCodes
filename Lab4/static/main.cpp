#include <iostream>
using namespace std;

class Static
{
private:
    static int countMe;

public:
 void staticFun(){

        countMe += 1 ;
        cout << countMe <<endl;
        cout << ".........." << endl;
    }

};

//We should define count me always outside the function, defining that the static member is not the memmber of a class.
int Static :: countMe;

int main()
{
    Static obj1,obj2;
    obj1.staticFun();
    obj2.staticFun();
    return 0;
}
