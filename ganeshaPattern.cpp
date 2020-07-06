#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=n;
    int row=1;
    for(row;row<=n;row++){
        if(row<=n/2+1){
            for(int cst=1;cst<=nst;cst++){
                if(cst!=1){
                    if(row<=n/2&&cst<=nst/2){
                        cout<<" ";
                    }else if(row!=1&&cst>nst/2+1 && row<=n/2){
                        cout<<" ";
                    }else{
                        cout<<"*";
                    }
                }else{
                    cout<<"*";
                }
            }
        }else{
            for(int cst=1;cst<=nst;cst++){
                if(cst==nst||cst==nst/2+1){
                    cout<<"*";
                }else if(row==n&&cst<=nst/2){
                    cout<<"*";
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

}





