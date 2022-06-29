#include<iostream>
using namespace std;

int main() {
cout << "W e l c o m e ...\nTranslate a number:\n ROMANIAN[0 - 10]\n\n";

int i;
cin >> i;
if(i >= 0){
switch(i){

	case 10:
	cout << "z e t c h e.\n\n";break;
	case 9:
	cout << "N a o .\n\n";break;
	case 8:
	cout << "o p t h .\n\n";break;
	case 7:
	cout << "s h a p t e .\n\n";break;
	case 6:
	cout << "s h a s s e .\n\n";break;
	case 5:
	cout << "c i n k .\n\n";break;
	case 4:
	cout << "p a t t e .\n\n";break;
	case 3:
	cout << "t r i e.\n\n";break;
	case 2:
	cout << "d u o .\n\n";break;
	case 1:
	cout << "O n n o .\n\n";break;
	case 0:
	cout <<"N u l a. \n";break;
	default :cout << "I n v a l i d e n t r y . ..\n";
	}
	}
	else {
	>cout << "I n v a l i d e n t r y ...\n";
	}
	return -1;
	}
