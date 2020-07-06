#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    int nsp=n-1;
    for(int row=1;row<=n;row++){
        int var=2;
        for(int cst=1;cst<=nst;cst++){
            if(cst==1){
                cout<<"1"<<"\t";
            }else if(cst==row){
                if(cst<=n-1){
                    cout<<row<<"\t";
                }
            }else{
                cout<<var<<"\t";
                 var++;
            }
        }
        for(int csp=2;csp<=nsp;csp++){
            cout<<" "<<"\t";
        }
         for(int csp=1;csp<=nsp;csp++){
            cout<<" "<<"\t";
        }
        for(int cst=1;cst<=nst;cst++){
            if(cst==row){
                cout<<"1"<<"\t";
            }else if(cst==1){
                cout<<row<<"\t";
            }else{
                 var--;
                cout<<var<<"\t";
            }
        }
        cout<<endl;
        nst++;
        nsp--;
    }

}
