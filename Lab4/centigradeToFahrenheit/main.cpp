#include <iostream>

using namespace std;

class centi{

private:
    float centigrade;
public:
    centi (float degree);
    float convert();

};

class fahren
{

private:
    float fah;
public:
    fahren(float degree);
    float convert();

};


int main()
{
    cout << "1. F to C " << endl;
    cout << "2. C to F " << endl;

    int userInput;
    float temp,result;
    cin >> userInput;

        if(userInput == 1){
            cout << "Enter F: " ;
            cin >> temp ;
            fahren f (temp);
            result = f.convert();
            cout << result <<endl;
        }


        else{
            cout << "Enter C: " ;
            cin >> temp;
            centi c(temp);
            result = c.convert();
            cout << result <<endl;
        }



    return 0;
}

centi :: centi(float degree){
    centigrade = degree;
}

fahren :: fahren(float degree){
    fah = degree;
}

float centi :: convert(){
        return (((9.0/5)*centigrade) + 32);
}

float fahren :: convert(){
    return (5.0/9)*(fah - 32);
}

