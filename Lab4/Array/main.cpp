#include <iostream>

using namespace std;
class Array{

private:
    int *num , size, i=0;
public:
    Array(){
	cin >> size;
	num = new int [size];
	}
    void initialize(){
        for(i=0;i<size;i++){
            cin >> num[i];
        }
    }

    void removeV(int location){
        for(i=0;i<size;i++){
            if(i == location-1 ){

                for(i= location-1 ; i<7;i++){
                    num[i] = num[i+1];

                }
            }
        }
    }

    int get(int location){
        return num[location];
    }

    void assignV(int value,int location){

         for(i=0;i<size;i++){
            if(i == location ){
                    num[i] = value;
                for(i= location+1 ; i<7;i++){
                    num[i] = num[i+1];
                }
            }
        }
    }
/*NULL*/
    void display(){
	cout << "\n\n\n" ;
        for(i=0;i<size;i++){

            cout <<  num[i];
	    cout <<endl;
        }
    }
};
int main()
{
    Array a;
    a.initialize();
    a.removeV(2);
    a.display();
    a.assignV(23,3);
    a.display();
    a.get(2);
    return 0;
}
