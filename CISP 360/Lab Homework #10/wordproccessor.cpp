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
	
		
	//copy what I have in main to a temp array
	char *tempP = main;
	int tempIndex = 0;
	
	
	
	//size of the original array
	int originalLength = strlen(main);
	
	//another array
	
	char tempArray[originalLength];

	//copy over all the elements from main to tempArray
	for (tempIndex = 0; tempIndex <= originalLength; tempIndex++)
	{
		tempArray[tempIndex] = *(main + tempIndex);
	}
	
	//size of the old word that we are changing
	int oldLength = strlen(old);

	
	//size of the new word that we are replacing
	int newLength = strlen(newString);
	

	
	//create a new size that can hold the null operator as well
	int newSize = originalLength + (newLength-oldLength) +1;


	
	//dynamically allocate a new pointer
	
	char *newPointer = new char [newSize];
	
	//temporary pointer to fill up the dynamically allocated array
	char *tempPointer = NULL;
	
	//have the temp pointer point at a certain address if the word is found
	tempPointer = strstr(main, old);
	
	//lets get the size of the temp pointer
	int tempPointerSize = strlen(tempPointer);

	
	//if we subtract tempPointerSize from the original size, it will put us directly at the beginning address of y
	int firstPart = 0;
	
	firstPart = (originalLength - tempPointerSize);
	
	//use a for loop to load the dynamically allocated array
	
	//counter variable for the for loop
	int mainIndex = 0;
	for (mainIndex = 0; mainIndex < firstPart; mainIndex ++)
	{
		*(newPointer + mainIndex ) = *(main + mainIndex);
	}

	
	//another for loop to fill up the next portion with the word them
	
	 tempIndex = 0;
	for (tempIndex; tempIndex <newLength ; tempIndex++)
	{
		*(newPointer + mainIndex) = *(newString + tempIndex);
		//increment to keep steping through the dynamically allocated array
		mainIndex++;
	}
	
	//we need to get the address of where the second address is 
	char *temp = strstr(main, old);
	
	

	
	//get the current size of new pointer
	int currentSize = strlen(newPointer);


	//copy over 
	strncpy(tempArray, newPointer, currentSize);
	
	
	//alright lets search again for the word
	tempPointer = strstr(tempArray, old);
	
	//get the size of it
	
	int partTwo = strlen(tempPointer);

	
	//restriction on the for loop 
	//subtract 1 because of the null terminator
	int limit = (originalLength - partTwo);


	
	for (mainIndex; mainIndex <=limit; mainIndex++)
	{
		*(newPointer + (mainIndex)) = *(main +(mainIndex-1));

	}
	tempIndex = 0;
	for (tempIndex; tempIndex < partTwo; tempIndex++)
	{
		*(newPointer +mainIndex)= *(newString + tempIndex);
		mainIndex++;
	}
	
	*(newPointer +mainIndex) = *(main + (originalLength-1));
	*(newPointer +newSize) = '\0';

	
	return newPointer;	
	delete[]newPointer;
	newPointer = NULL;

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
