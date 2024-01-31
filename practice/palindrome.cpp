
// C++ implementation of the above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to check if a given number is palindrome or not
bool isPalindrome(int n)
{
   
        string num = to_string(n);//converting integer to sting
        string reversed_num = num;
       
         // reverse the string
        reverse(reversed_num.begin(), reversed_num.end());
        
        if (num == reversed_num)
        {// checking a number is
          //palindrome or not
            return true;
        }
      return false;
}
 
// Drive Code
int main() {
   
    int n = 4554;
  // Function call
  if(isPalindrome(n))
  { //printing Yes if,4562 is a palindrome number
    cout<<"Is 4554 a Palindrome number? : "<<"Yes"<<endl;
  }
  else{//else no
    cout<<"Is 4554 a Palindrome number? : "<<"NO"<<endl;
      }
 
    n = 2002;
  // Function call
    if(isPalindrome(n))
     { //printing Yes if,2002is a palindrome number
      cout<<"Is 2002 a Palindrome number? : "<<"Yes"<<endl;
     }
     else{ //else no
       cout<<"Is 20022 a Palindrome number? : "<<"NO"<<endl;
        }
     
    
    return 0;
}