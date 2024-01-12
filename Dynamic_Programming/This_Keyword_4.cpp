// Below is the C++ program to use 
// this keyword to access the data 
// members of currently executing 
// object 
#include <iostream> 
using namespace std; 

class GFG 
{ 
string name; 
	
public: 
GFG(string name) 
{ 
	// Initialize value of class member 
	// name as the parameter name passed 
	// in the constructor. 
	this->name = name; 
} 
	
void display() 
{ 
	// Accesses string data member name 
	cout << this->name << endl; 
} 
}; 

// Driver code 
int main() 
{ 
GFG gfg("GeeksforGeeks"); 
gfg.display(); 
return 0; 
}
