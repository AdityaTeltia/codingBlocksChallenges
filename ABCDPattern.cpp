#include<iostream>
using namespace std;

void printABCDPattern(int n){
    for(int row=1;row<=n;row++){
         int nst=n-row+1;
         char alphabet='A';
         for(int cst=1;cst<=nst;cst++){
            cout<<alphabet;
            alphabet=alphabet+1;
         }
         cout<<endl;
    }

}

int main(){
    int n;
    cin>>n;
    printABCDPattern(n);


    return 0;
}

