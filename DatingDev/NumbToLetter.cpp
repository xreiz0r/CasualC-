#include<iostream>
#include<map>
using namespace std;

  int main () 
  {
  int n;
    map<int,char>example = {{1,"a"},{2,"b"},{3,"c"},{4,"d"},{5,"e"},{6,"f"},{7,"g"},{8,"h"},{9,"i"},{10,"j"},};
    
    cout<<"Enter Element for Search: ";
    cin >> n;
    
          auto search = example.find(n);
              if(search != example.end())
              {
              cout <<'\n'<< n << " found value is " << search->first << " = " << search->second << '\n';
              }
    
                  else 
                  {cout << n << "\n not found! \n "}
  }
