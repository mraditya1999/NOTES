// File handling is used to store data permanently in a computer. Using file handling we can store our data in secondary memory (Hard disk).

// We give input to the executing program and the execution program gives back the output. The sequence of bytes given as input to the executing program and the sequence of bytes that comes as output from the executing program are called stream. streams are nothing but the flow of data in a sequence.

// The input and output operation between the executing program and the devices like keyboard and monitor are known as “console I/O operation”. The input and output operation between the executing program and files are known as “disk I/O operation”.

// The I/O system of C++ contains a set of classes which define the file handling methods. These include ifstream, ofstream and fstream classes. These classes are derived from fstream and from the corresponding iostream class. These classes, designed to manage the disk files, are declared in fstream and therefore we must include this file in any program that uses files.

/*
1. ios:-
ios stands for input output stream.
This class is the base class for other classes in this class hierarchy.
This class contains the necessary facilities that are used by all the other derived classes for input and output operations.

2. istream:-
istream stands for input stream.
This class is derived from the class ‘ios’.
This class handle input stream.
The extraction operator(>>) is overloaded in this class to handle input streams from files to the program execution.
This class declares input functions such as get(), getline() and read().

3. ostream:-
ostream stands for output stream.
This class is derived from the class ‘ios’.
This class handle output stream.
The insertion operator(<<) is overloaded in this class to handle output streams to files from the program execution.
This class declares output functions such as put() and write().

4. ifstream:-
This class provides input operations.
It contains open() function with default input mode.
Inherits the functions get(), getline(), read(), seekg() and tellg() functions from the istream.

5. ofstream:-
This class provides output operations.
It contains open() function with default output mode.
Inherits the functions put(),  write(), seekp() and tellp() functions from the ostream.

6. fstream:-
This class provides support for simultaneous input and output operations.
Inherits all the functions from istream and ostream classes through iostream.
*/

// For File Handling we must include fstream header file.
// ostream- class for output
// ifstream- class for input
// fstream- class for both input and output
// If we want to append a content in  an existing file, we need to use ios::app
// If we want to overwrite a content in  an existing file, we need to use ios::trunc(by default)
// If we want to read a content in  an existing file, we need to use ios::in
// If we want to write a content in  an existing file, we need to use ios::out(by default)
// If we want to read and write a content in  an existing file, we need to use ios::in | ios::out
// If we want to read and write a content in binary form in an existing file, we need to use ios::binary.
// After using a file ,it should be closed.

// text mode is used to read and write data in text form.
// binary mode is used to read and write data in binary form.
// manipulators are used for strings  or formatted strings like endl(for newline),integer(hex,dec,oct),float(precision,scientific,hexfloat, defaultfloat),set(),left-right(alignment),whietespace.
