#include<iostream>
using namespace std;

void bubbleSort(int a[], int n){

    for(int itr = 1; itr<=n-1; itr++){
        for(int j=0;j<=n-itr-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

}




int main(){

    int n;
    cin>>n;
    int a[1000];
    int i;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    bubbleSort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}
