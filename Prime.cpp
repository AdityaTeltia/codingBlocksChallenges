#include<iostream>
using namespace std;
bool isPrime(int n){
    for (int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
void printPrimes(int N){
   for(int i=2;i<=N;i++){
     if(isPrime(i)){
        cout<<i<<" isPrime "<<endl;
     }
   }

}
void printPrimes(string s ){
    cout<<"ssdasds"<<endl;
    cout<<s<<endl;
}
int main(){
    int n;
    cin>>n;
    printPrimes("c");
    return 0;
}
