#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nsp1=n-1;
    int nst=1;
    int nsp2=0;
    for(int row=1;row<=n;row++){
        int var2=1;
        int var3=1;
        int var=row;
        int var1=n-row+1;
        for(int csp1=1;csp1<=nsp1;csp1++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst;cst++){
            if(row<=n/2+1){
                cout<<var;
                var--;
            }else{
                cout<<var1;
                var1--;
            }
        }
        for(int csp2=1;csp2<=nsp2;csp2++){
            cout<<" ";
        }
        for(int cst=1;cst<=nst;cst++){
            if(nst==1||nst==n){
                continue;
            }else{
                if(row<=n/2+1){
                    cout<<var2;
                    var2++;
                }else{
                    cout<<var3;
                    var3++;
                }
            }
        }
        cout<<endl;
        if(row<n/2+1){
            nst++;
            nsp1=nsp1-2;
            nsp2=nsp2+2;
        }else{
            nst--;
            nsp1=nsp1+2;
            nsp2=nsp2-2;
        }

    }
    return 0;




}
