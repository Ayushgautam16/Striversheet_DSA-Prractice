// prog to reverse of the digits 
#include <iostream>
using namespace std;

int RevNum(){
   int rev = 0;
   int num, temp;
   cout << "Enter a number: ";
   cin >> num;
   int revNum =0;
   while(num!= 0){
      int temp = num % 10;
      rev = rev * 10 + temp;
      num = num / 10;
   }

}
int main(){
    RevNum();
    return 0;
 
}