#include<iostream>
using namespace std;
int main(){
    int n ;
    int key;
    cin>>n;
    int a[1000];
    int i;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<" Enter the element you want to search : ";
    cin>>key;
    for(i=0;i<=n-1;i++){
        if(a[i]==key){
            cout<<key<<" is present on "<<i<<" index";
            break;
        }
    }
    if(i==n){
            cout<<key<<"  is not present";
        }
    return 0;
}
