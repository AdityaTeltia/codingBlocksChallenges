#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int row=1;row<=n;row++){
        int var=row;
        for(int csp=1;csp<=nsp;csp++){
            cout<<" "<<"\t";
        }
        for(int cst=1;cst<=nst;cst++){
                if(cst<nst/2){
                    cout<<var<<"\t";
                    var++;
                }else{
                    cout<<var<<"\t";
                    var--;
                }
        }
        cout<<endl;
        nst=nst+2;
        nsp--;
    }


}
