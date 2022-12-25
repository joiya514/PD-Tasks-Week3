#include <iostream>
using namespace std;
main(){
float acceleration;
float velocity1;
float time;
float velocity2;
cout << "what is acceleration of toy:";
cin >> acceleration;
cout << "what is initial velocity of car:";
cin >> velocity1;
cout << "what is time taken:";
cin >> time;
velocity2 = (acceleration * time) + velocity1;
cout << "final velocity is:";
cout << velocity2;

}