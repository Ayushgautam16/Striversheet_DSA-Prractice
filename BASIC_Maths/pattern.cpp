// ****  ****pattern printing******
// ****
// ****
// ****

// #include <iostream>
// using namespace std;
// int main()
// {int i,j, n;
//     cout <<"enter the the num of time you want to print star patterns"<<endl;
// cin >> n;

//     for(i = 0; i <n; i++){
//         for ( j = 0; j < n; j++)
//         {
//             /* code */
//             cout << "* ";
//         }
//         cout<<endl; 

//     }
// }


// solving using function


// #include<bits/stdc++.h>
// using namespace std;
// void print1(int n){
//     for(int i = 0; i<n; i++){
//         for(int j= 0; j<n; j++){
//             cout<<"* ";
//     }
//     cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin>>n;
//     print1(n);
// }



// *
// **
// ***
// ****
// *****

// #include<bits/stdc++.h>
// using namespace std;
// void print2(int n)
// {
//     for(int i =0 ; i<n ; i++){
//         for (int j = 0; j <=i ; j++)
//         {
//             /* code */
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//   int t;
//   cin>>t;
//   for(int i; i,t;t++)
//   {
//     int n;
//     cin>> n;
//     print2( n);
//   }
// }


// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// 1 2 3 4 5 6

// #include<bits/stdc++.h>
// using namespace std;
// void print2(int n){
// for(int i =1; i<n ; i++){
//         for (int j = 1; j <=i ; j++)
//         {
//             /* code */
//             cout<<j;
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//   int t;
//   cin>>t;
//   for(int i; i,t;t++)
//   {
//     int n;
//     cin>> n;
//     print2( n);
//   }
// }

// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5


// n-i+1;
// ******
// *****
// ****
// ***
// **
// *



// 11111
// 2222
// 333
// 44
// 5


// 12345
// 1234
// 123
// 12
// 1


//        *
//       ***
//      *****
//     *******
//    *********
//   ***********
//  *************


// #include<iostream>
// using namespace std;
//   void print4(int n){
//     for(int i =1; i<=n ; i++ ){
//       for (int j= 1; j <= i; j++){
//         /* code */
//         cout<<i<<" ";
//       }
//       cout<<endl;
//     }
// }

// void print5(int n){
//     for(int i =1; i<=n ; i++ ){
//       for (int j= 1; j < n-i+1; j++){
//         /* code */
//         cout<<"*";
//       }
//       cout<<endl;
//     }
// }

// void print6(int n){
//     for(int i =1; i<=n ; i++ ){
//       for (int j= 1; j < n-i+1; j++){
//         /* code */
//         cout<<i;
//       }
//       cout<<endl;
//     }
// }

// void print7(int n){
//     for(int i =1; i<=n ; i++ ){
//       for (int j= 1; j < n-i+1; j++){
//         /* code */
//         cout<<j;
//       }
//       cout<<endl;
//     }
// }

// void print8(int n){
//     for(int i =0; i<=n; i++ ){
//       // space

//       for (int j= 0; j < n-i+1; j++){
//         cout<<" ";
//         /* space*/
//       }
//       /* star*/
//         for (int j = 0; j < 2*i+1; j++)
//         {
//           cout<<"*";
//         }
        
//         for (int j = 0; j < n-i+1; j++)
//         {
//           cout<<" ";
//         }

//         cout<<endl;
      
//       }
      
//     }

// void print9(int n){
//     for(int i =0; i<=n; i++ ){
//       // space

//       for (int j= 0; j < 2*i+1; j++){
//         cout<<" ";
//         /* space*/
//       }
//       /* star*/
//         for (int j = 0; j <n-i+1 ; j++)
//         {
//           cout<<"*";
//         }
        
//         for (int j = 0; j < 2*i+1; j++)
//         {
//           cout<<" ";
//         }

//         cout<<endl;
      
//       }
      
//     }
// int main()
// {
//   int n;
//   cin>>n;
//   print9(n);
// }

 