#include<iostream>
using namespace std;
class Tax
{
    private:
        float no_pax,tra_rate;
    public:
      Tax(Tax &copy){
      no_pax = copy.no_pax;
      tra_rate = copy.no_pax;
      }
      Tax(float pax , float rate){
      no_pax = pax;
      tra_rate = rate;
      }
      Tax(){}

      float total(){
        if(no_pax >10){
            return 0.9 *no_pax*tra_rate;
        }
        return no_pax*tra_rate; 
      }

       
};
int main(){
    Tax obj1(12,5);
    Tax obj2(obj1); 
    float sum = obj2.total();
    cout << sum << endl;
return 0;
}
