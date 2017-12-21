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
    void  concat (Logic obj1 , Logic obj2){
        

        int l1 = strlen(obj1.string);
        int l2 = strlen(obj2.string);

        for( i=0; i<l1;i++){
            string[i] = obj1.string[i];
        }

        for ( i = strlen(string),  j=0 ; i<(l1+l2) ; i++,j++ ){

            string[i] = obj2.string[j];
        }

        string[i] = '\0';
       // return result;
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
    
    Logic results;

    results.concat(eng,logic);
    results.display();
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
