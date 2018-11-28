#include <iostream>
#include <string>
using namespace std;

int getProductNumber(int array[], int size);
//should have different names for the parameters but i dont care :}
int  binarySearch(int array[], int size , int ID);

void displayShit(string productTitle[],int size, string productDescription[], int result,int productNumbers[],string unitPrices[]);

const int SIZE = 9;
int main()
{
	
	//array for the Product Title
	string productTitle[SIZE];
	productTitle[0]= "Six Steps to Leadership";
	productTitle[1]= "Six Steps to Leadership";
	productTitle[2]= "The Road To Excellence";
	productTitle[3]= "Seven Lessons of Quality";
	productTitle[4]= "Seven Lessons of Quality";
	productTitle[5]= "Seven Lessons of Quality";
	productTitle[6]= "Teams Are Made, Not Born";
	productTitle[7]= "Leadership for the Future";
	productTitle[8]= "Leadership for the Future";
	
	//array for product description
	string productDescription[SIZE];
	 productDescription[0] = "Book";
	 productDescription[1] = "Audio CD";
	 productDescription[2]= "DVD";
	 productDescription[3]= "Book";
	 productDescription[4]= "Audio CD";
	 productDescription[5]= "DVD";
	 productDescription[6]= "Book";
	 productDescription[7]= "Book";
	 productDescription[8]= "Audio CD";
	 
	 //array for Unit Price
	 string unitPrices[SIZE];
	  unitPrices[0] = "$12.95";
	  unitPrices[1] = "$14.95";
	  unitPrices[2] = "$18.95";
	  unitPrices[3] = "$16.95";
	  unitPrices[4] = "$21.95";
 	  unitPrices[5] = "$31.95";
	  unitPrices[6] = "$14.95";
	  unitPrices[7] = "$12.95";
	  unitPrices[8] = "$16.95";
	  
	  //array for the product number
	  int productNumbers[SIZE];
	  productNumbers[0]= 914;
	  productNumbers[1]= 915;
	  productNumbers[2]= 916;
	  productNumbers[3]= 917;
	  productNumbers[4]= 918;
	  productNumbers[5]= 919;
	  productNumbers[6]= 920;
	  productNumbers[7]= 921;
	  productNumbers[8]= 922;
	  
	  
	  
	  //variable to hold product number
	  int employeesID;
	  employeesID = getProductNumber(productNumbers, SIZE);
	  //variable to hold the result of the binary search
	  int result;
	  result = binarySearch(productNumbers, SIZE, employeesID);
	  
	  displayShit( productTitle, SIZE,productDescription,result, productNumbers,unitPrices);
	  
	return 0;
}
int getProductNumber(int array[], int size)
{
	int productsNumber;
	cout << "Enter the products number\n";
	cin >> productsNumber;
	while (productsNumber<914 || productsNumber > 922)
	{
		cout << "ERROR: ENTER THE CORRECT RANGE OF THE PRODUCT NUMBERS[914-922]\n";
		cin >> productsNumber;
	}
	return productsNumber;
}
int  binarySearch(int array[], int size, int ID)
{
	int position = -1;
	int index = 0;
	int first = 0;
	int middle =0;
	int last = 0;
	bool found = false;
	last = size -1;
	
	while ( !found && first <= last)
	{
		middle = (first + last)/2;
		if (array[middle]==ID )
		{
			
			position = middle;
			found = true;
		}
		else if ( array[middle]>ID )
		{
			last = middle-1;
		}
		else
		{
			first = middle +1;
		}
		
		
		index ++;
	}
	

	
	return position;
	
}
void displayShit(string productTitle[],int size, string productDescription[],int result,int productNumbers[], string unitPrices[])
{
		if (result== -1)
	{
		cout << "No data was found\n";
		
	}
	else
	cout << result << endl;
		cout <<"Product Numbers: " << productNumbers[result] << endl;
		cout << "Product Title: " << productTitle[ result] << endl;
		cout << "Product Description: " << productDescription[result] << endl;
		cout << "Unit Prices: " << unitPrices[result]<< endl;
}
