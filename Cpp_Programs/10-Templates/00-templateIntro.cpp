// A C++ template allows us to define the generic classes and generic functions and thus provides support for generic programming.
//  Generic programming is a technique where generic types are used as parameters in algorithms so that they can work for a variety of data types.

// Templates can be represented in two ways:

// 1) Function templates
// 2) Class templates

// Templates are expanded at compiler time.This is like macros.The difference is, that the compiler does type - checking before template expansion.The idea is simple, source code contains only function / class, but compiled code may contain multiple copies of the same function / class.

// Function Templates:
// We can define a template for a function. For example, if we have an add() function, we can create versions of the add function for adding the int, float or double type values.

// Class Template:
// We can define a template for a class. For example, a class template can be created for the array class that can accept the array of various types such as int array, float array or double array.

// Function Template
// Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various types of data.
// The type of the data that the function will operate on depends on the type of the data passed as a parameter.
// For example, Quick sorting algorithm is implemented using a generic function, it can be implemented to an array of integers or array of floats.
// A Generic function is created by using the keyword template. The template defines what function will do.

// CLASS TEMPLATE
// Class Template can also be defined similarly to the Function Template. When a class uses the concept of Template, then the class is known as generic class.

// Points to Remember
// C++ supports a powerful feature known as a template to implement the concept of generic programming.
// A template allows us to create a family of classes or family of functions to handle different data types.
// Template classes and functions eliminate the code duplication of different data types and thus makes the development easier and faster.
// Multiple parameters can be used in both class and function template.
// Template functions can also be overloaded.
// We can also use nontype arguments such as built-in or derived data types as template arguments.