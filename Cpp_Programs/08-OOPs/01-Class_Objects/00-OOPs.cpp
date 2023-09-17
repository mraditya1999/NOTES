/* Object Oriented Programming is a paradigm that provides many concepts such as inheritance, data binding, polymorphism etc.

C++ is a partial object-oriented programming language. It supports OOP concepts such as classes, objects, inheritance, encapsulation, abstraction, and polymorphism. */

/*
OOPs (Object Oriented Programming System)
Object-Oriented Programming is a methodology or paradigm to design a program using classes and objects. It simplifies the software development and maintenance by providing some concepts:

C++ Oops concept
Object,Class,Inheritance,Polymorphism,Abstraction,Encapsulation,Object

Any entity that has state and behavior is known as an object. For example: chair, pen, table, keyboard, bike etc. It can be physical and logical.

Collection of objects is called class. It is a logical entity.

 A class instance must be created in order to access and use the user-defined data type's data members and member functions. An object's class acts as its blueprint.
 */

/* Inheritance
When one object acquires all the properties and behaviours of parent object i.e. known as inheritance. It provides code reusability. It is used to achieve runtime polymorphism.

Sub class - Subclass or Derived Class refers to a class that receives properties from another class.
Super class - The term "Base Class" or "Super Class" refers to the class from which a subclass inherits its properties. */

/* Polymorphism
When one task is performed by different ways i.e. known as polymorphism.
Different situations may cause an operation to behave differently. The type of data utilized in the operation determines the behavior. */

/* Abstraction
Hiding internal details and showing functionality is known as abstraction. Data abstraction is the process of exposing to the outside world only the information that is absolutely necessary while concealing implementation or background information.
In C++, we use abstract class and interface to achieve abstraction. */

/* Encapsulation
Binding (or wrapping) code and data together into a single unit is known as encapsulation.

Encapsulation is typically understood as the grouping of related pieces of information and data into a single entity.
 Encapsulation is the process of tying together data and the functions that work with it in object-oriented programming.
Dynamic Binding - In dynamic binding, a decision is made at runtime regarding the code that will be run in response to a function call. For this, C++ supports virtual functions. */

/* With the use of classes and objects, object-oriented programming makes code maintenance simple. Because inheritance allows for code reuse, the program is simpler because you don't have to write the same code repeatedly. Data hiding is also provided by ideas like encapsulation and abstraction. */

/* Why is C++ a partial oop?
The C++ programming language is categorized as a partial object-oriented programming language despite the fact that it supports OOP concepts, including classes, objects, inheritance, encapsulation, abstraction, and polymorphism.

1) The main function must always be outside the class in C++ and is required. This means that we may do without classes and objects and have a single main function in the application.

It is expressed as an object in this case, which is the first time Pure OOP has been violated.

2) Global variables are a feature of the C++ programming language that can be accessed by any other object within the program and are defined outside of it. Encapsulation is broken here. Even though C++ encourages encapsulation for classes and objects, it ignores it for global variables.
 */
