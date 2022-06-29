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

	case 1:cout << "\nGetsuyobi\n";break;
	case 2:cout << "\nKayobi\n";break;
	case 3:cout << "\nSuiyobi\n";break;
	case 4:cout << "\nMokuyobi\n";break;
	case 5:cout << "\nKinyobi\n";break;
	case 6:cout << "\nDoyobi\n";break;
	case 7:cout << "\nNichiyobi\n";break;
	default: cout << "\nInvalid entry.. .\n";
}
}
else {
cout << "\n Type a number.. .\n";
}
return 0;
}

