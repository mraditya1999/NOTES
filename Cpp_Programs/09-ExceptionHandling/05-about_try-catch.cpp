// If there is no exception,then the program will execute normally.
// If there is an exception,then the program will terminate and the control will be transferred to the catch block.
// try/catch block can be nested
// try/catch block can be used to handle multiple exceptions of different types using a single catch block
// try/catch block can be used to handle multiple exceptions of different types using multiple catch blocks
// If we dont know the type of exception,then we can use catch(...) to handle all types of exceptions.
// catch(...) should be the last catch block.

// If we have exception class hierarchy,then we should catch the derived class first and then the base class.

#include <iostream>
using namespace std;

class MyException1
{
};

class MyException2 : public MyException1
{
};

int main()
{
    try
    {
        // throw 1;
        // throw 1.5f;
        // throw 1.5;
        // throw string("Exception occur");
        // throw MyException1();
        // throw MyException2();
        throw 'a';
    }
    catch (int e)
    {
        cout << "Int Catch... " << e << endl;
    }
    catch (float e)
    {
        cout << "Float Catch... " << e << endl;
    }
    catch (double e)
    {
        cout << "Double Catch... " << e << endl;
    }
    catch (string e)
    {
        cout << "String Catch... " << e << endl;
    }
    catch (MyException2 e)
    {
        cout << "MyException2 Catch... " << endl;
    }
    catch (MyException1 e)
    {
        cout << "MyException1 Catch... " << endl;
    }
    catch (...)
    {
        cout << "Unknown Catch... " << endl;
    }
    return 0;
}
