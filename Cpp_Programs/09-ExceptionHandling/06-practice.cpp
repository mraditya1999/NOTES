#include <iostream>
using namespace std;

class StackOverflowException : exception
{
};
class StackUnderflowException : exception
{
};

class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size)
    {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    void push(int x)
    {
        if (isFull())
            throw StackOverflowException();
        cout << "Inserting " << x << endl;
        arr[++top] = x;
    }

    int pop()
    {
        if (isEmpty())
            throw StackUnderflowException();
        cout << "Deleting " << arr[top] << endl;
        return arr[top--];
    }

    int peek()
    {
        if (isEmpty())
            throw StackUnderflowException();
        return arr[top];
    }

    int size() { return top + 1; }
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == capacity - 1; }
};

int main()
{
    Stack *stack = new Stack(3);
    try
    {
        stack->push(1);
        stack->push(2);
        stack->push(3);
        // stack->push(4);

        cout << "Top element is: " << stack->peek() << endl;
        cout << "Stack size is " << stack->size() << endl;

        stack->pop();
        stack->pop();
        stack->pop();
        stack->pop();
    }
    catch (StackOverflowException e)
    {
        cout << "Stack Overflow Exception" << endl;
    }
    catch (StackUnderflowException e)
    {
        cout << "Stack Underflow Exception" << endl;
    }
    return 0;
}
