#include<iostream>
using namespace std;

class Array
{
    private:
        int *arr,size;
        int i;
    public:
        Array(){
            cin >>size;
            arr = new int [size];
        }

        ~Array(){
            delete [] arr;

        }
        void setArray();
        void displayArray();
        void edit();
        void deleteArray(); 
};

int main(){
    Array arr1;
    arr1.setArray();
    arr1.displayArray();
    arr1.edit(1,23);
    arr1.displayArray();
    arr1.deleteArray(1);
    arr1.displayArray
    return 0;
}

void Array :: setArray(){
    for(i=0;i<size;i++){
        cin >> arr[i];
    }
}

void Array :: displayArray(){
    for (i=0;i<size;i++){
        cout << arr[i];
    }
}
void Array :: edit(int position,int number){
    for (i = 0; i<size;i++){
        if(i==position+1){
            arr[i]=number;
        }
    }

}
void Array :: deleteArray(){
    for(i=0;i<size;i++){
       if(i == location-1 ){
                for(i= location-1 ; i< size;i++){
                   arr[i] = arr[i+1];

                }
            }
        }
    }
}
