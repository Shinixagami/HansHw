#include <iostream>
#include <string>
using namespace std;

int main() {
   string strInput;
   
   getline(cin, strInput);  //this doesnt seem right

// its what the book wrote

  //its tankig in enter as well, you need a terminate -there's better way I think. 
// OHHHHHHHHH IT WORKS NOWW I GOT IT YES// I WILL GO TO NEXT PROBLEM THANK YOU THANK YOU

  //your cin input is wronng  - you need to fix it. 

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