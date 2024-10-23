// checking the gcd and hcf of the number greatest dommon division

#include<iostream>
using namespace std;

int GCD(int n){
    if(n == 0)
        return 0;
    else
        return GCD(n%10, n/10);
}
int main(){


return 0;
}