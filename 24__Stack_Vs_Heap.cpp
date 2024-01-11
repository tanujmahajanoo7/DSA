// When function call repeatedly and it not get stopped at that time stack will overflow
// Stack is a dynamic memory allocation
// Heap is manual memory allocation

// Dynamic memory allocation where the memory will be allocated and Deallocated manually

#include<iostream>
using namespace std;
int main()
{
    int a=10; //stored in stcak

    int *p=new int();  //New operator allocate memory in heap

    *p=10; // p will not be stored in directly heap it will stored in stack and point the memory allocated in heap
    // with the help of meomory address we can access p from any where

    delete(p); // Deallocate the memory from the heap
    //But pointer remain same
    //Dangling Pointer

    //That can be reused
    
    p=new int[4];

    delete[]p; // To delete the array from heap
    
    p=NULL; // To remove Dangling pointer

    return 0;
}