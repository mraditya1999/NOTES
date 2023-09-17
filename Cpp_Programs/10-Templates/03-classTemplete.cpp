// Class templates are useful when a class defines something that is independent of the data type.It Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.
// Each instance of a template contains its own static variable
// For implementing each function definition outside the class, we have to give template everytime.

#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    void push(T size); // push an element into the stack
    T pop();           // pop an element from the stack
    Stack(int size);   // constructor
};

template <class T>
Stack<T>::Stack(int size)
{
    this->size = size;
    top = -1;
    stk = new T[size];
}

template <class T>
void Stack<T>::push(T size)
{
    if (top == size - 1)
        cout << "Stack Overflow" << endl;
    else
        stk[++top] = size;
}

template <class T>
T Stack<T>::pop()
{
    if (top == -1)
        cout << "Stack Underflow" << endl;
    else
        return stk[top--];
}

int main()
{
    Stack<int> stk1(2);
    stk1.push(10);
    stk1.push(20);
    cout << stk1.pop() << endl;
    cout << stk1.pop() << endl;

    Stack<char> stk2(2);
    stk2.push('a');
    stk2.push('b');
    cout << stk2.pop() << endl;
    cout << stk2.pop() << endl;

    Stack<float> stk3(2);
    stk3.push(10.5);
    stk3.push(20.5);
    cout << stk3.pop() << endl;
    cout << stk3.pop() << endl;

    return 0;
}
