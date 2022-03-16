#include <iostream>
#include <cstring>
using namespace std;
  
int main(){
   char string[100], pattern[100];
   char *ptr;
   int length;
     
   cout << "Enter a string\n";
   cin.getline(string, 100);
    
   cout << "Enter string to remove\n";
   cin.getline(pattern, 100);
   // Find length of pattern
   length = strlen(pattern);
   // Search pattern inside input string 
   ptr = strstr(string, pattern);
    
   // Delete pattern from string by overwriting it 
   strcpy(ptr, ptr+length);
    
   cout << "Final String\n" << string;
   cout << "Final String[15]\n" << string[15];
     
   return(0);
}