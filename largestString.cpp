#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int n;
    cin>>n;

    char a[1000];
    char largest[1000];

    int len=0;
    int largestLength=0;

    cin.get();

    for(int i=0;i<n;i++){
        cin.getline(a,1000);

        len=strlen(a);

        if(len>largestLength){

            largestLength=len;
            strcpy(largest,a);

        }


    }
    cout<<largest<<" "<<largestLength<<endl;

    return 0;
}
