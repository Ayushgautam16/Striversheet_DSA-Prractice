// The modulus operator % computes the remainder when a number is divided by another number. When we perform N % 10 we get the last digit of the number N.

// Eg. N = 7789, then N%10 results in 9 which is the last digit.

// After extracting the last digit we need to remove the last digit as well which can be done via division operator.

// Eg. N = 7789 then N/10 results in 778, removing the last digit.

// Together with these operators we can effectively extract digits from right to left by repeatedly taking the last digit using % and then removing it using / until the number has been broken down into individual digits and only 0 is left.


// Algorithm
// Step 1:Initialise an empty vector ans to store the extracted digits.

// Step 2: While N is greater than 0, execute the following:

// Get the last digit of the N by taking N%10 and store it in a variable lastDigit.
// Add lastDigit to the ans vector.
// Update N by removing its last digit by performing a modulo 10 (%10) operation on it.
// Step 3: Reverse the vector ans as the digits have been added from right to left and we need to return them in the order left to right.

// Step 4: Return the ans vector.

                            
#include <iostream>
#include <vector>
#include <algorithm>
// using namespace std;


// // Function to extract individual digits
// // of a number and store them in a vector
// vector<int> extractDigits(int N) {
//     // Initialize an empty
//     // vector to store the digits
//     vector<int> ans;  
    
//     // Loop to extract digits
//     // until N becomes 0
//     while(N > 0){
//         // Extract the last digit of N
//         int lastDigit = N % 10;  
//         // Store the last digit
//         // in the vector
//         ans.push_back(lastDigit); 
//          // Remove the last digit from N
//         N = N / 10; 
//     }
    
//     // Reverse the vector to get
//     // digits in the correct order
//     reverse(ans.begin(), ans.end());  
    
//     // Return the vector
//     // containing individual digits
//     return ans; 
// }


// int main() {
//     int N = 329823;
//     cout << "N: "<< N << endl;
//     vector<int> digits = extractDigits(N);
//     cout << "Extracted Digits: ";
//     for(auto num: digits){
//         cout << num << " ";
//     }
//     cout << endl;
//     return 0;
// }
