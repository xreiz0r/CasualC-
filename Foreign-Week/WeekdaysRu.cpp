#include<iostream>
using namespace std;

int main() {



cout << "\n\t\tTranslate Weekdays to English [JAPANESE]\n\n";

cout << "\n Select a Weekday: \n (Numeral)\n\n";

cout << "\n [1]Monday\n";
cout << "\n [2]Tuesday\n";
cout << "\n [3]Wednesday\n";
cout << "\n [4]Thursday\n";
cout << "\n [5]Friday\n";
cout << "\n [6]Saturday\n";
cout << "\n [7]Sunday\n";

cout << "\nYour choice!: ";


int i;

cin >> i;


if(i>0){
switch(i){

	case 1:cout << "\nPonil dinik\n";break;
	case 2:cout << "\nTornik\n";break;
	case 3:cout << "\nShida\n";break;
	case 4:cout << "\nShitver\n";break;
	case 5:cout << "\nPyanissa\n";break;
	case 6:cout << "\nSuvota\n";break;
	case 7:cout << "\nVoscreseen\n";break;
	default: cout << "\nInvalid entry.. .\n";
}
}
else {
cout << "\n Type a number.. .\n";
}
return 0;
