#include <iostream>

using namespace std;

class Time{
    private:
        int h,m,s;
    public:
        Time(){
            h=0;
            m=0;
            s=0;
        }

        Time(int x, int y, int z)
        {
            h=x;
            m=y;
            s=z;
        }

        void addTime(Time t1, Time t2){
            s = t1.s + t2.s;
            if(s>60){
            m+=1;
            s-=60;
            }
            m += t1.m + t2.m;
            if(m>60){
            h+=1;
            m-=60;
            }
            h += t1.h + t2.h;  
        }
        void displayTime(){
            cout <<h <<"h"<< m <<"m"<< s <<"s" <<endl; 
        }
};

int main(){
    
    Time t11(12,34,56);
    Time t22(10,35,14);
    Time t3;
    t3.addTime(t11,t22);
    t3.displayTime(); 
    return 0;
}
