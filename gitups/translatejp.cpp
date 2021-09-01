#include <iostream>
using namespace std;
	int main(){
	int x;
	cout << "[Digits to Japanese]\nTranslate Your Number Below: \n[I - X]" << endl;
	while(true)
	{
	cin >> x;
		if (!cin)
{		cout << "S o r r y.. ? \n";
		cin.clear();
		break;
}
else break;
	}	
	
if(x<11 && x>0){
	switch(x)
		{
		case 10:
			cout <<"J u u . \n";
			break;
		case 9:
			cout <<"K i r u. \n";
			break;
		case 8:
			cout <<"H a c h i . \n";
			break;
		case 7:
			cout <<"N a n a . \n";
			break;
		case 6:
			cout <<"R o k u . \n";
			break;
		case 5:
			cout <<"G o . \n";
			break;
		case 4:
			cout <<"Y o n . \n";
			break;
		case 3:
			cout <<"S a n . \n";
			break;
		case 2:
			cout <<"N i i . \n";
			break;
		case 1:
			cout <<"I c h i . \n";
			break;
		default:
			cout <<"S o r r y? \n";		
		}
}
	else {	
		cout << "Invalid option.. . \n";
	}
	return 0;
	}
