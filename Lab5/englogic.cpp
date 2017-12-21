#include<iostream>
#include <string.h>
using namespace std;
int i = 0;
int j=0;
class Logic
{
    private:
    char string[40];
  
    public:
    Logic(char temp[]){
        strcpy(string,temp);
    }    
    Logic(){
   
    }
    //CONCAT FUNCTION
    Logic concat ( Logic obj2){
        
        Logic res;
        int l1 = strlen(string);
        int l2 = strlen(obj2.string);

        for( i=0; i<l1;i++){
            res.string[i] = string[i];
        }

        for ( i = l1,  j=0 ; i<(l1+l2) ; i++,j++ ){

           res.string[i] = obj2.string[j];
        }

        res.string[i] = '\0';
        return res;
    }
    //DISPLAY FUNCTION
    void display(){
        cout << string <<endl;
    }
};

int main(){
    char string1[20]="Engineers are ";
    char string2[20] = "Creatures of logic";
   //Initialization of strings of obj1 and obj2 
    Logic eng(string1);
    Logic logic(string2);
    Logic r;

    r=eng.concat(logic);
    r.display();
    return 0;
}
/*
 Here I faced a lot of error saying:
 error: no matching function for call to ‘Logic::Logic()’
     Logic results;
I didn't knew what the error was...
It was because it could not find my constructor Logic() when it tried to call the constructor for the results.
I then made a blank constructor, as in line 15. And the program worked.

Also we had many problems while passing the arguments and playing with it.

*/
