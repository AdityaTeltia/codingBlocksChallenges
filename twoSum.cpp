#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the no. of elements in array : " ;
    cin>>n;

    int a[n];
    int key;
    cout<<"Enter your key : ";
    cin>>key;

    cout<<"Enter your array elements "<<endl;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i,j;

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==key){
                cout<<"First No. "<<a[i]<<" on index "<<i<<endl;
                cout<<"Second No. "<<a[j]<<" on index "<<j<<endl;
                break;
            }else{
                cout<<"The key cannot be found";
            }
        }
    }



    return 0;
}
