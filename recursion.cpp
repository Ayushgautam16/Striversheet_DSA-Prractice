// #include<bits/stdc++.h>
// using namespace std;
// int cnt = 0;

// void print(){
   

//    if(cnt == 3)  return;
//    cout<<cnt<<endl;


//    cnt++;
//    print();

// }

// int main(){
//     print();
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"Raj"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  
  int n = 4;
  func(1,n);
  return 0;

}