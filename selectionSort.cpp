#include<iostream>
using namespace std;

void selectionSort(int a[], int n){

    for(int i=0;i<n-1;i++){

        int minIndex = i;
        for(int j=i;j<=n-1;j++){
            if(a[j]<a[minIndex]){
                minIndex=j;
            }
        }
        swap(a[i],a[minIndex]);
    }

}


int main(){
    int n;
    cin>>n;

    int a[1000];

    int i;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    selectionSort(a,n);
    for(i=0;i<n;i++){
        cout<<a[i];
    }


    return 0;
}
