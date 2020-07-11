#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int maximumSum=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int csum=0;

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            csum=0;
            for(int k=i;k<=j;k++){
                csum=csum+a[k];
            }
            if(csum>maximumSum){
                maximumSum=csum;
            }
        }
    }
    cout<<maximumSum;

    return 0;
}
