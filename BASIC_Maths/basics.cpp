// using namespace std

// By adding using namespace std; at the beginning of your program, you're telling the compiler that you want to use all the names from the std namespace without explicitly specifying std:: each time. This can make your code cleaner and more concise.



// #include<iostream>
// #include<math.h>
// using namespace std;
// int main(){
//     cout <<"Hello World!";
//     cout << "\n";
//     cout << "This is a C++ program!";
//     cout << "\n";
//     cout << "Today's date is " << __DATE__ << " and time is " << __TIME__;
// cout <<"hey ayush how is it going ";
// return 0;
// }

// As you can see, the newline character \n inserts a line break, but the second "Hey, Striver!" is still on the same line as the first one.
// You can also use std::endl to insert a newline character and flush the output buffer. Here's the code and its corresponding terminal output:

// Taking User Input using cin

// #include<iostream>
// using namespace std;
// int main()
// {
//     int x;
//     cin>>x;
//     cout<<"The entered number is: "<<x;
//     return 0;
// }


// #include<iostream>
// using namespace std;

// int main() {
//     int x;
//     int y;
//     cin >> x >> y;
//     cout << "Value of x : " << x << " and y : " <<y;
//     return 0;
// }


// #include<bits/stdc++.h>.
// The bits/stdc++.h header is a shortcut that includes a vast number of standard C++ libraries, making it easier to access a wide range of functions and classes without specifying each library individually. It's a time-saving approach for programmers, especially when you need several standard libraries in your code.
#include <bits/stdc++.h>
using namespace std;

void pattern1(int N)
{
    // This is the outer loop which will loop for the rows.
    for (int i = 0; i < N; i++)
    {
        // This is the inner loop which here, loops for the columns
        // as we have to print a rectangular pattern.
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
       
        // As soon as N stars are printed, we move to the
        // next row and give a line break otherwise all stars
        // would get printed in 1 line.
        cout << endl;
    }
}

int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.
    // int N = 5;

    // pattern1(N);

    return 0;
}