// Algorithm
// Step 1:Initialise an integer revNum to 0. This variable will store the reverse of the number.

// Step 2: Make a duplicate of the original number and store it in an integer dup for later comparison.

// Step 3: Run a while loop with the condition n>0 to reverse the number and at each iteration:

// Get the last digit of n by using the modulus operator % with 10 and store it in a temporary variable ld.
// Update the revNum by multiplying it by 10 and adding the last digit ld.
// Update n by integer division with 10 effectively removing the last digit.
// Step 4: After the loop, check if the original number dup is equal to the reversed number revNum.

// If they are equal, return true indicating the number is a palindrome.
// If they are not equal, return false indicating that the number is not a palindrome.

                            
// #include <iostream>
// using namespace std;

// // Function to check if a
// // given integer is a palindrome
// bool palindrome(int n)
// {
//     // Initialize a variable to
//     // store the reverse of the number
//     int revNum = 0;
//     // Create a duplicate variable to
//     // store the original number
//     int dup = n;
//     // Iterate through each digit of
//     // the number until it becomes 0
//     while (n > 0) {
//         // Extract the last
//         // digit of the number
//         int ld = n % 10;
//         // Build the reverse number
//         // by appending the last digit
//         revNum = (revNum * 10) + ld;
//         // Remove the last digit
//         // from the original number
//         n = n / 10;
//     }
//     // Check if the original number
//     // is equal to its reverse
//     if (dup == revNum) {
//         // If equal, return true
//         // indicating it's a palindrome
//         return true;
//     } else {
//         // If not equal, return false
//         // indicating it's not a palindrome
//         return false;
//     }
// }


// int main() {
//     int number = 4554;

//     if (palindrome(number)) {
//         cout << number << " is a palindrome." << endl;
//     } else {
//         cout << number << " is not a palindrome." << endl;
//     }

//     return 0;
// }
       

// // count of num problem (optimal approach)
// #include <iostream>
// #include <cmath>
// #include <algorithm>
// using namespace std;



// // Calculate the count of digits in 'n'
// // using logarithmic operation log10(n) + 1.
// int countDigits(int n){
//     // Initialize a variable 'cnt' to
//     // store the count of digits.
//     int cnt = (int)(log10(n)+1);

//     // The expression (int)(log10(n)+1)
//     // calculates the number of digits in 'n'
//     // and casts it to an integer.
    
//     // Adding 1 to the result accounts
//     // for the case when 'n' is a power of 10,
//     // ensuring that the count is correct.
   
//     // Finally, the result is cast
//     // to an integer to ensure it is rounded
//     // down to the nearest whole number.
    
//     // Return the count of digits in 'n'.
//     return cnt;
// }




// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     int digits = countDigits(N);
//     cout << "Number of Digits in N: "<< digits << endl;
//     return 0;
// }
     


#include <iostream>
#include <algorithm>

using namespace std;

int findGcd(int a, int b) {
    // Continue loop as long as both
    // a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b,
        // subtract b from a and update a
        if(a > b) {
             // Update a to the remainder
             // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else {
            // Update b to the remainder
            // of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}




int main() {
    int n1 = 20, n2 = 15;
    
    // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);

    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;

    return 0;
}



