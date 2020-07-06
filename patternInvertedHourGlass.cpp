#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp=2*n-1;
    int nst1=1;
    int var1=n;
    for(int row=1;row<=2*n+1;row++){
        int var=n;
        for(int cst=1;cst<=nst1;cst++){
            if(nst1<=n+1){
                cout<<var;
                var--;
            }else{
                cout<<var;
                var++;
            }
        }
        for(int csp=1;csp<=nsp;csp++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst1;cst++){
            if(row==n+1&&cst==1){

            }else{
                if(nst1<=n+1){
                    cout<<var1;
                    var1++;

                }else{
                    cout<<var1;
                    var1--;

                }
            }
        }
        cout<<endl;
        if(row<=n){
            var1=var1-2;
            nst1++;
            nsp=nsp-2;
        }else{
            nst1--;
            nsp=nsp+2;
            var1=var1+2;
        }
    }


}
