#include<iostream>
using namespace std;
 // creating a fxn for odd and even 
int odd_even (void){
    int a;
     cout << "Enter a number" << endl;
     cin >> a;
     if ( a%2 ==0 ){
         cout << "even" ;
     }
     else {
         cout << "odd" ;
     }
    return a;
}
 int main (){
     int answer = odd_even();// calling a fxn for odd and even 
     cout << endl;
     int answer1 = odd_even();
       cout << endl;
     int answer2 = odd_even();
   
 }