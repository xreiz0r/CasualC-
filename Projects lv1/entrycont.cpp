#include<iostream>
#include<string>
using namespace std;
int main()
{
int number, count = 0;
cout << "enter a number";
cin >> number;
	for(; number != 0; ++count){
	cin >>number;
	};
cout << "total of " <<count <<" inputs\n";

system("pause");
return 0;
}
