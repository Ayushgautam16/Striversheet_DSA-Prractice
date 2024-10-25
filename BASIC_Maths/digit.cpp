// prog to print last digit number

// #include<iostream>
// using namespace std;
// int main(){
//     int n, lg;
//     cout<<"Enter the number of elements: "<<endl;
//     cin>>n;
//     while (n>0)
//     {
//         lg =n%10;
//         n =n/10;
//     }
//     cout<<"The last digit of the number is: "<<lg<<endl;
//     return 0;


// return 0;
// }


// program to print count of digits 
#include<iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while (n!= 0) {
        n /= 10;
        ++count;
    }
    return count;
}



// int main(){
    // int num;
    // cout << "Enter a number: ";
    // cin >> num;
    // cout << "Number of digits: " << countDigit(num) << endl;
    // return 0;
    // optimal solution for qustion using logrithmic  log10(n)
    // also the time complexity of the question
// }



