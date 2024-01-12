// C++ program to use this keyword to 
// access currently executing object 
// to chain function calls: 
#include <iostream> 
using namespace std; 

class GFG 
{ 
string name; 
int data; 
	
public: 
GFG setName(string name) 
{ 
	this->name = name; 
	return *this; 
} 
	
GFG setData(int data) 
{ 
	this->data = data; 
	return *this; 
} 
	
void display() 
{ 
	cout << name << endl; 
	cout << data << endl; 
} 
}; 

// Driver code 
int main() 
{ 
// Creating object 
GFG gfg; 
	
// chaining function calls 
gfg = gfg.setName("GeeksforGeeks").setData(20); 
	
gfg.display(); 
return 0; 
}
