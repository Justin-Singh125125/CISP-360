#include <iostream>
#include <cstring>
using namespace std;
char* replaceSubstring(char *original, char *from, char *to);
int main()
{
	
char document[] = "does this work for everything";
char oldString[] = "does";
char newString[] = "will";


char *pointer=	replaceSubstring(document,oldString, newString);
cout << pointer << endl;
}


char* replaceSubstring(char *original, char *from, char *to)
{
     int origlen = strlen(original);
     int i = 0;
     int count = 0;
     int total = 0;
     char *ptr;

     //figure out how many times the sub-string occurs in a string.
     //i couldn't figure out a way to avoid this loop
     while (i<origlen)
     {
     		//this is original + i because of the null terminator at the end
           ptr = strstr(original+i, from);
           //if ptr does not equal null terminator, exit while loop
           if (!ptr)
               break;
           else
           {
           	//so this marks where the beggining of the character y starts
               i =  ptr- original + 1;
     
            
           }
           
     }
     
     //figure out what the size of the output string has to be
     int newsize = origlen + (strlen(to) - strlen(from)) * count;
     cout << newsize << endl;

     char *newstring = new char[newsize];  
     newstring[0] = '\0';  
     i = 0;
     while (i < origlen)
     {
          ptr = strstr(original+i, from);
          if (!ptr)
          {
               break;
          }
          else
          {
               //this looks extremely ugly and bulky...
                strncat(newstring, original+i, ptr-(original+i));
               strcat(newstring, to);
               i = i + ptr - (original + i) + strlen(from);
          }
     }
     return newstring;
}
