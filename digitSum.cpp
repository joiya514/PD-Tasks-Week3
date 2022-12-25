#include <iostream>
using namespace std;
main(){
int a;
int no1;
int no2;
int no3;
int no4;
int integer1;
int integer2;
int integer3;
int sum;
cout << "Enter your digit: ";
cin >> a;
no1 = a % 10;
integer1 = a / 10;
no2 = integer1 % 10;
integer2 = integer1 / 10;
no3 = integer2 % 10;
integer3 = integer2 / 10;
no4 = integer3 % 10;
sum = no1 + no2 + no3 + no4;
cout << "Sum of digits: ";
cout << sum;







}