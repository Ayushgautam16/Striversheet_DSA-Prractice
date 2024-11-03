// check wheather the number is amstrong or not
// like 231 == 2^3+6^3+1^3

#include<bits/stdc++.h>
using namespace std;
int Amstrong(){
    int n, temp, sum = 0, original;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    temp = n;
    while (temp!= 0) {
        sum += pow(temp % 10, 3);
        temp /= 10;
    }
    if (original == sum)
        return 1;
    else
        return 0;
}
int main()
{
    // if(Amstrong())
    //     cout << "The number is an Armstrong number.";
    // else
        // cout << "The number is not an Armstrong number.";
    // return 0;
}