// check num is prime or not 
// #include<bits/stdc++.h>
// using namespace std;

// int isPrime(int num){
    // if(num <= 1)
        // return false;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0)
            return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    // check if the number is prime 
    if(isPrime(n)){
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    // calculate sum of digits
    int sum = 0;
    while(n!= 0){
        sum += n % 10;
        n /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    // find the largest prime number less than or equal to the sum
    int largestPrime = sum;
    while(!isPrime(largestPrime)){
        largestPrime--;
    }
    
    cout << "Largest prime number less than or equal to the sum: " << largestPrime << endl;
    
    

return 0;
}