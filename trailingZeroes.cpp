#include<iostream>
using namespace std;

int findZeroes(int n){
    int ans = 0;
    for(int D = 5;n/D>=1;D=D*5){
        ans+=n/D;
    }
    return ans;
}

int main(){
    long long int n;
    cin>>n;
    int var = findZeroes(n);
    int var4 = findZeroes(n+1);
    int var3 = findZeroes(n+2);
    int var2 = findZeroes(n+3);
    int var1 = findZeroes(n+4);

    cout<<var<<endl;
    cout<<var1<<endl;
    cout<<var2<<endl;
    cout<<var3<<endl;
    cout<<var4<<endl;
}
