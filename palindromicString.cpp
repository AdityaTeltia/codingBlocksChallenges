#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[]){

    int start=0;
    int last=strlen(a)-1;

    while(start<last){
        if(a[start]!=a[last]){
            return false;
        }else{
            start++;
            last--;
        }
    }
    return true;
}





int main(){

    char a[1000];
    cin.getline(a,1000);

    if(isPalindrome(a)){
        cout<<"It is a Palindrome";
    }else{
        cout<<"Not a Palindrome";
    }



    return 0;
}
