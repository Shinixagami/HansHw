#include <iostream>
#include <string>
using namespace std;

int main() {
   string strInput;
   
   getline(cin, strInput);  //this doesnt seem right

   //use == NOT =
  //also MAKE ELSE IF statements like this
   if (strInput.at(strInput.size() - 1) =='?') {   
      cout << "A question" << endl; 
   } else if (strInput.at(strInput.size() - 1) != '?') { 
      cout << "Not a question" << endl; 
   } 
   
   return 0;
}


/* STOP DELETING MY OLD CODE smg */