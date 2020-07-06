#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=0;
    int b=1;
    int c=0;
    int nst=1;
    for(int row=1;row<=n;row++){
        for(int cst=1;cst<=nst;cst++){
            cout<<c<<"\t";
            a=b;
            b=c;
            c=a+b;
        }
        cout<<endl;

        nst++;
    }
    return 0;
}
