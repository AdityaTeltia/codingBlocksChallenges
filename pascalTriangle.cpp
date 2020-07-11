#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp = n-1;
    int var=1;
    for(int row=1;row<=n;row++){
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst;cst++){
            if(cst%2==1){
                if(cst==1||cst==nst){
                    cout<<"1";
                }else{
                    var=var*(row-cst+1)/(cst-1);
                    cout<<var;
                }
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
        nst=nst+2;
        nsp--;
    }

}
