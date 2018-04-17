#include<iostream>
using namespace std;
void print();
class QuickUnion{
private:
    int* id;
    int N;
public:
    QuickUnion(int N) {
        this->N=N;
        id = new int[N];
        for(int i=0;i<N;i++) {
           id[i]=i; 
        }
    }

    void _union(int p, int q) {
        int rootp = root(p);
        int rootq = root(q);
        
       //If a element is root --> i=id[i]
        
        id[rootq] = rootp;
    }

    int root(int n) {
        while(id[n]!=n){
            n=id[n];
        }
        return n;
    }
    
    bool connected(int p, int q) {
        if (root(p) == root(q)) return true;    
    }
    
    void displayArray(){
        for(int i=0;i<N;i++){
            cout<<id[i];
        }
    }
};

int main(){
    cout<<"Implementation of Quick Union using Binary Tree\n";
    print();
    
    cout<<"Enter Number of Objects. ";
    int n;
    cin>>n;

    QuickUnion obj(n);
    int input;
    do {
        print();
        cout<<"MENU";
        print();
        cout<<"1.Union"<<endl;
        cout<<"2.Connected"<<endl;
        cout<<"3.Display Array"<<endl;
        cout<<"4.Exit"<<endl;
        cin>>input;        
        if(input==1){ 
            cout<<"Enter Two Objects: ";
            int p,q;
            cin>>p>>q;
            obj._union(p,q); 
            cout<<endl;
        }   
        if(input==2){ 
            cout<<"Enter Two Objects: ";
            int p,q;
            cin>>p>>q;
            cout<<obj.connected(p,q);
            cout<<endl;
       }
        if(input==3){ obj.displayArray();}
    }while(input!=4);
    return 0;
}

void print(){
    cout << "............................................\n"<<endl;
}
