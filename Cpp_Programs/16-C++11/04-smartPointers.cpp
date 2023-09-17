// Pointers are used for accessing the resources which are external to the program – like heap memory. So, for accessing the heap memory (if anything is created inside heap memory), pointers are used. When accessing any external resource we just use a copy of the resource. If we make any changes to it, we just change it in the copied version. But, if we use a pointer to the resource, we’ll be able to change the original resource.

// Problems with Normal Pointers
// Memory Leaks: This occurs when memory is repeatedly allocated by a program but never freed. This leads to excessive memory consumption and eventually leads to a system crash.
// Dangling Pointers: A dangling pointer is a pointer that occurs at the time when the object is de-allocated from memory without modifying the value of the pointer.
// Wild Pointers: Wild pointers are pointers that are declared and allocated memory but the pointer is never initialized to point to any valid object or address.
// Data Inconsistency: Data inconsistency occurs when some data is stored in memory but is not updated in a consistent manner.
// Buffer Overflow: When a pointer is used to write data to a memory address that is outside of the allocated memory block. This leads to the corruption of data which can be exploited by malicious attackers.

// Three smart pointers: unique_ptr, shared_ptr, weak_ptr
// unique_ptr: only one owner
// shared_ptr: multiple owners
// weak_ptr: weak reference to shared_ptr
// We must include <memory> header

// C++ program to demonstrate working of a Pointers
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
};

void fun()
{
    // By taking a pointer p and
    // dynamically creating object
    // of class rectangle
    Rectangle *p = new Rectangle();
}

int main()
{
    // Infinite Loop
    while (1)
    {
        fun();
    }
}

// Explanation: In function fun, it creates a pointer that is pointing to the Rectangle object. The object Rectangle contains two integers, length, and breadth. When the function fun ends, p will be destroyed as it is a local variable. But, the memory it consumed won’t be deallocated because we forgot to use delete p; at the end of the function. That means the memory won’t be free to be used by other resources. But, we don’t need the variable anymore, we need the memory.

// In function main, fun is called in an infinite loop. That means it’ll keep creating p. It’ll allocate more and more memory but won’t free them as we didn’t deallocate it. The memory that’s wasted can’t be used again. Which is a memory leak. The entire heap memory may become useless for this reason.

// Smart Pointers
// As we’ve known unconsciously not deallocating a pointer causes a memory leak that may lead to a crash of the program. Languages Java, C# has Garbage Collection Mechanisms to smartly deallocate unused memory to be used again. The programmer doesn’t have to worry about any memory leaks. C++ comes up with its own mechanism that’s Smart Pointer. When the object is destroyed it frees the memory as well. So, we don’t need to delete it as Smart Pointer does will handle it.
//
// A Smart Pointer is a wrapper class over a pointer with an operator like * and -> overloaded. The objects of the smart pointer class look like normal pointers. But, unlike Normal Pointers it can deallocate and free destroyed object memory.
