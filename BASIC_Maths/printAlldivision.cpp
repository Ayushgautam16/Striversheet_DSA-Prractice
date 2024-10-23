// print all the divisors 
// #include<iostream>
// using namespace std;

// int divisors(int n){
//     int count = 0;
//     for(int i=1; i<=n; i++){
//         if(n%i == 0)
//             count++;
//     }
//     return count;
// }
// int main(){
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Number of divisors: " << divisors(num) << endl;

// return 0;
// }


#include<bits/stdc++.h>
using namespace std;
void printDivisors(int n){
    for(int i=1; i<=sqrt(n); i++){
        if(n%i == 0)
            cout << i << " ";
            if(i!= n/i){
                cout << n/i << " ";

            }

    }
    
    cout << endl;
}
int main(){

return 0;
}