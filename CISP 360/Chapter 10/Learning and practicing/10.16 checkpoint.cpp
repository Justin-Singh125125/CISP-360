 #include <iostream> 
 using namespace std; 
 
// Function Prototype 
 void mess(char []); 
 
int main()  { 
    char stuff[] = "Tom Talbert Tried Trains"; 
    cout << stuff << endl; 
    mess(stuff); 
    cout << stuff << endl; 
    return 0;  } 
 
// Definition of function mess 
 void mess(char str[])  { 
    int step = 0; 
 
   while (str[step] != '\0') 
    { 
       if (str[step] == 'T') 
          str[step] = 'D'; 
       step++; 
    }  }       
