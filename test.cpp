// C++ program to use this keyword 
// to delete object of the class 
#include <iostream> 
using namespace std; 

class GFG 
{ 
    string name; 
        
    public: 
    GFG(string name) 
    { 
        // Use this keyword to assign value 
        // of class member name as the 
        // parameter name passed in the 
        // constructor. 
        this->name = name; 
    } 
        
    void display() 
    { 
        cout << name << endl; 
    } 
        
    void del() 
    { 
        // Use this keyword to delete 
        // the object 
        delete this; 
    } 
}; 

// Driver code 
int main() 
{ 
GFG a("GeeksforGeeks"); 
a.display(); 
a.del(); 
a.display();
return 0; 
}
