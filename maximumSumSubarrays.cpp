#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int cumSum[1000];
    int maximumSum=0;

    cin>>a[0];
    cumSum[0]=a[0];

    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i]=cumSum[i-1]+a[i];
    }
    int csum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            csum=cumSum[j]-cumSum[i-1];

            }
            if(csum>maximumSum){
                maximumSum=csum;
            }
        }

    cout<<"Maximum subarrays sum is : "<<maximumSum;

    return 0;
}
