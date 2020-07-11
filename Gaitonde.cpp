#include<iostream>
using namespace std;


int main(){

    int a[7]={100,0,0,30,0,40};
    int sum=0;

    for(int i=0;i<sizeof(a)/sizeof(int);i++){
        sum = sum + a[i];

    }
    int i,j;
    for( i=0;i<sizeof(a)/sizeof(int);i++){
        for( j=i+1;j<sizeof(a)/sizeof(int);j++){
            if(a[i]+a[j]==sum-100){
                break;
            }
        }
        if(a[i]+a[j]==sum-100){
                break;
        }
    }
    for(int m = 0;m<sizeof(a)/sizeof(int);m++){
        if(m==i||m==j){
            cout<<a[m]<<"  ";
        }else{

        }
    }

    return 0;
}
