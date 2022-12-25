#include <iostream>
using namespace std;
main(){
float vegetableCoins;
float fruitCoins;
int vegetableKgs;
int fruitKgs;
float totalCoins;
float totalRps;
cout << "What is price of 1 kg of vegetables: ";
cin >> vegetableCoins;
cout <<"What is price of 1 kg of fruits: ";
cin >> fruitCoins;
cout << "How many kgs of vegetables sold: ";
cin >> vegetableKgs;
cout << "How many kgs of fruits sold: ";
cin >> fruitKgs;
totalCoins = (vegetableCoins * vegetableKgs) + (fruitCoins * fruitKgs);
totalRps = totalCoins * 1.94;
cout << "total earning: ";
cout << totalRps;






}