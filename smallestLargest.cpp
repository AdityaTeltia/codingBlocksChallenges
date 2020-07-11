#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int largest=INT_MIN;
    int smallest=INT_MAX;
    for(int i=0;i<=n;i++){
        largest=max(largest,a[i]);
        smallest=min(smallest,a[i]);
    }
    cout<<largest<<" LARGE"<<endl;
    cout<<smallest<<" SMALL"<<endl;
    return 0;
}
