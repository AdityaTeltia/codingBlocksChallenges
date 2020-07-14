#include<iostream>
#include<climits>
using namespace std;

void maximum(int arr[],int n){
    int maxim=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxim){
                maxim=arr[i];
            }
        }
        cout<<"maximum-value : "<<maxim;
}




int main(){

    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    maximum(a,n);

    return 0;
}
