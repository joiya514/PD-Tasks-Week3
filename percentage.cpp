#include <iostream>
using namespace std;
main(){
string name;
int subject1;
int subject2;
int subject3;
int subject4;
int subject5;
int total;
float percentage;
cout << "enter subject1 marks:";
cin >> subject1;
cout << "enter subject2 marks:";
cin >> subject2;
cout << "enter subject3 marks:";
cin >> subject3;
cout << "enter subject4 marks:";
cin >> subject4;
cout << "enter subject5 marks:";
cin >> subject5;
total = subject1 + subject2 + subject3 + subject3 + subject4 + subject5;
percentage = (total * 100) / 500;
cout << "Totall percentage is:";
cout << percentage;


}