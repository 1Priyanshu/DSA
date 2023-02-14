//palindrome ie, same from both front & back

#include<iostream>
using namespace std;
#define optim() ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool checkPalindrome(string str){
    int len = str.length();
    for(int i=0; i<len/2; i++){
        if(str[i]!=str[len-i-1]){
            return false;
        }
    }
        return true;
}
int main(){
    optim();
    string str ="";
    cin>>str;
    if(checkPalindrome(str)) cout<<"number is palindrome"<<"\n";
    else cout<<"Not palindrome"<<"\n";
return 0;
}