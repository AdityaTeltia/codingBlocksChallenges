#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=1;
    for(int row=1;row<=n;row++){
        for(int cst=1;cst<=nst;cst++){
            if(cst==1||cst==nst){
                cout<<row<<"\t";
            }else{
                cout<<"0"<<"\t";
            }
        }
        cout<<endl;
        nst++;
    }
}
