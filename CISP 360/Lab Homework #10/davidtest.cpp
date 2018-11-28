#include <iostream>
#include <cstring>

using namespace std;

void documentReport(char []);

char * replaceString(char *, char *, char *);
void printScreen(char *);

int main()
{
	//for the document report function
	//a c-string with text
	char input[] = "A man\na plan\na canal\nPanama\n\n";
	//call the documentReport function
	documentReport(input);
	
	//for the replace string function
	char document[] = "We\'re not laughing at you, we\'re laughing with you.";
	char oldString[] = "you";
	char newString[] = "them";
	
	//call the replace string function
	char* newSentence = replaceString(document,oldString,newString);
	printScreen(newSentence);

	
	
}
char*  replaceString(char *main, char *old, char *newString)
{
	int index;
	char *found, *index2 = NULL;
	
	while (strstr(main + index, old))
	{
		found = strstr(main, old);
		strncpy(main, main +index, found + index);
		index2 = main +strlen(main);
		index = found+ strlen(old);
	}
	
	return main;
}
void printScreen(char *finallyDone)
{
	char *thatTookForever = finallyDone;
	int i = 0;
	while (*(thatTookForever+i) != '\0')
	{
		cout << *(thatTookForever + i);
		i++;
	}
	
	
}
void documentReport(char cstring[])
{
	//get the number of lines
	int lines = 0;
	
	//get the number of words
	int words = 0;
	//get the number of characters
	int characters = 0;
	
	//a pointer to step through the char array
	char *pointer = NULL;
	//point the pointer at the cstring
	pointer = cstring;
	
	//create a while loop to count everything until the pointer reaches the null terminator
	while (*pointer != '\0')
	{
		if (*pointer == '\n')
		{
			//increments for the number of lines
			lines++;
		}
		
		//accounts for all the types of whitespace
		if (*pointer ==' ' || *pointer == '\t' || *pointer == '\n' || *pointer == '\v')
		{
			words++;
		}
		//makes the pointer move on to the next char variable
		pointer++;
		
		//could of used the strlen function to get the length of characters but found it 
		//convienient being able to do it here
		characters++;
	}
	
	//subtract 1 from words variable because of the consecutive \n's
	words -=1;
	
	cout << "Lines: " << lines << endl;
	cout <<"Words: " << words<< endl;
	cout << "Characters: "<<characters<< endl<<endl;
}
