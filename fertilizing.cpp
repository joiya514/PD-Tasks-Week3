#include <iostream>
using namespace std;
main (){
int pounds;
int cost;
int area;
int cost_pound;
int cost_area;
cout << "what is size of bag in pounds:";
cin >> pounds;
cout << "what is cost of bag: ";
cin >> cost;
cout << "what is area covered by bag in square feet:";
cin >> area;
cost_pound = cost / pounds;
cost_area =cost / area;
cout << "cost of fertilizer per pound is:";
cout << cost_pound << endl;
cout << "cost of fertilizing area per square feet is:";
cout << cost_area;

}