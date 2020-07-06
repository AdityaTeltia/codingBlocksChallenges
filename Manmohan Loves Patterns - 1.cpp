#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    for(int row=1;row<=n;row++){
        for(int cst=1;cst<=nst;cst++){
            if(cst==row||cst==1||row%2!=0){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<endl;
            nst++;
    }



}
