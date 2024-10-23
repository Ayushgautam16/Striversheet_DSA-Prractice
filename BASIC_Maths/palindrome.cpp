// print palindrome number

#include <iostream>
using namespace std;
int palindrome(int num) {

    int rev = 0, temp = num;
    while (temp!= 0) {
        rev = (rev * 10) + (temp % 10);
        temp = temp / 10;
    }
    return rev;

}
int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == palindrome(num)) {
        cout << num << " is a palindrome number." << endl;
    } else {
        cout << num << " is not a palindrome number." << endl;
    
    return 0;
}
}
