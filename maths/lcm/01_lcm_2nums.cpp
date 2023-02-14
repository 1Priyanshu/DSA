//LCM (Least Common Multiple) of two numbers is the smallest number
// which can be divided by both numbers

/*
   a x b = LCM(a, b) * GCD (a, b)

   LCM(a, b) = (a x b) / GCD(a, b)
*/

#include<iostream>
#include<algorithm>
using namespace std;



int main(){
    int a =24;
    int b =18;
    cout<<"gcd of a & b is: "<<__gcd(a,b)<<endl;
    cout<<"lcm of a & b is: "<<((a*b)/__gcd(a,b))<<endl;
    
}