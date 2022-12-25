#include <iostream>
using namespace std;
main (){
string name;
int adultTicket;
int adultSold;
int childTicket;
int childSold;
int donatePercentage;
int adultPrice;
int childPrice;
int totalPrice;
int donateAmount;
int afterDonation;
cout <<"What is name of movie:";
cin >> name;
cout << "Enter adult ticket price:";
cin >> adultTicket;
cout << "Enter child ticket price:";
cin >> childTicket;
cout << "How many adult tickets sold: ";
cin >> adultSold;
cout << "How many child tickets sold: ";
cin >> childSold;
cout << "Enter percentage to donate: ";
cin >> donatePercentage;
totalPrice = (adultTicket * adultSold) + (childTicket * childSold);
donateAmount = donatePercentage * totalPrice / 100;
afterDonation = totalPrice - donateAmount;
cout << "Total amount generated: ";
cout << totalPrice << endl;
cout << "Amount after donation: ";
cout << afterDonation;

}