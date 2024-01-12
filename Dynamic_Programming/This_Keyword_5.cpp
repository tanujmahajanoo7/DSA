// C++ program to use this keyword 
// to call member functions of currently 
// executing objects 
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
	
void displayX(int); 
void display(); 
}; 
	
void GFG :: displayX(int x) 
{ 
for (int i = 0; i < x; i++) 
{ 
	// Access member functions of currently 
	// executing object 
	this->display(); 
} 
} 
	
void GFG :: display() 
{ 
// Accesses string data member name 
cout << this->name << endl; 
} 

// Driver code 
int main() 
{ 
GFG gfg("GeeksforGeeks"); 
gfg.displayX(4); 
return 0; 
}
