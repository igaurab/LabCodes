#include<iostream>
using namespace std;

int main(){
    int N;//Number of Neurons
    int *w,*b,*output; //Array for Bias and Weight.
    int startX,endX ;
    
    cout << "Enter Number of Hidden Layers" << endl;
    cin >> N;

    cout << "Enter Starting Value of X and Ending Value of X" <<endl;
    cin >> startX>>endX;

    w = new int [N];
    b = new int [N];
    output = new int[endX-startX];
    
    //Loop Variables:
    int i,j,k;
    int sum;
  
    //Bias and Weight Input For Each Neuron of Hidden Layer
    for(i=0;i<N;i++){
        cout << "Bias and Weight for " << i+1 << " Neuron: ";
        cin >> w[i] >> b[i];
    }

   /* 
    //output the bias and weight for Debug
    for(i=0;i<N;i++){
        cout << "Bias and Weight for " << i+1 << "Neuron: ";
        cout << w[i] << b[i] <<endl;
    } */ 

    
    //Running through Neurons
    for(i=startX ; i<= endX ; i++ ){
        sum = i;
        for(j=0;j<N;j++){
            sum = sum*w[j] + b[j];
        }
        output[i] = sum;
    }

    //Displaying the Ouptut
    /*  
        for(i=0;i<(endX-startX); i++){
        cout << output[i];
    } */


    //Result
    //Spam if Output is Odd 
    //Non spam if Output is even
    
    int e=0,o=0; //Counts even and odd Output
    
    for(i=0;i<(endX-startX); i++){
        if(output[i]%2==0){
            e++;
        }
        o++;
    }
    cout << e << " " << o <<endl;

    return 0;
}