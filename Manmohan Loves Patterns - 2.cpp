#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    for(int row=1;row<=n;row++){
        for(int cst=1;cst<=nst;cst++){
                if(row==1){
                    cout<<"1";
                }else{
                    if(cst==1||cst==nst){
                        cout<<row-1;
                    }else{
                        cout<<"0";
                    }
                }
        }
        cout<<endl;
        nst++;
    }
}
