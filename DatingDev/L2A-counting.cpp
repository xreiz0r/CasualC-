#include<iostream>
#include<sstream>
#include<string>
using namespace std;


int returnVal (char x)
{
	return (int) x - 96;
}

			int main ()
{
char x;
cin >> x;
int count = 0;
	if(x !=0)
	{
	++count;
	}
cout << returnVal(x) << "\n" << count << "\n";



}

//For further support head over to:
//https://stackoverflow.com/questions/21832886/converting-letters-to-numbers-in-c/


//This one I merged the counting with the inputs
//However the counting only counts the number of entries 
//which is only one per run-time so results will always be 1


//OUTPUT
//z  (typed in char)
//26 (returned ascii minus 96)
//1  (number of entries, not characters)
