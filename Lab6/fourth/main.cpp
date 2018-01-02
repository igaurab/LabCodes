#include<iostream>
using namespace std;
class Distance{
    private:
        int l; //l-->length
    public:
        void SetLength();
        void display();
        //Overloading Relational Operators
        bool operator == (Distance temp);
        bool operator > (Distance temp);
        bool operator < (Distance temp);

};
int main(){
    Distance l1,l2; 
    l1.SetLength();
    l2.SetLength();
    /*cout << "l1 = " << l1.display() << endl;
    cout << "l2 = " << l2.display() << endl;
    When I run this code I get a lot of errors I dont even Understand...
    */
    if(l1==l2){
        cout << "l1=l2"<<endl;
    }
    if(l1>l2){
        cout << "l1>l2"<<endl;
    }
    if(l1<l2){
        cout << "l1<l2"<<endl;
    }
    return 0;
}
void Distance::SetLength(){
    cin>>l;
}
void Distance::display(){
    cout<< l <<endl;
}
bool Distance::operator==(Distance temp){
    if (l==temp.l){
        return true;
    }
    return false;
}

bool Distance::operator>(Distance temp){
    if (l>temp.l){
        return true;
    }
    return false;
}

bool Distance::operator<(Distance temp){
    if (l<temp.l){
        return true;
    }
    return false;
}