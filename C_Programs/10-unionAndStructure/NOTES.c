/*
A structure is in many ways similar to a record. It stores related information about an entity. Structure is basically a user-defined data type that can store related information (even of different data types) together. The major difference between a structure and an array is that an array can store only information of same data type.
A structure is therefore a collection of variables under a single name. The variables within a structure are of different data types and each has a name that is used to select it from the structure.Each variable name declared within a structure is called a member of the structure. The structure declaration, however, does not allocate any memory or consume storage space. memory is allocated for the structure when we declare a variable of the structure

struct student
{
int r_no;
char name[20];
char course[20]; 
float fees;
};

struct student stud1;
Here, struct student is a data type and stud1 is a variable.

OR
struct student
{
int r_no;
char name[20];
char course[20];
float fees;
} stud1, stud2;

However, care should be taken to ensure that the name of structure and the name of a structure member should not be the same. Moreover, structure name and its variable name should be different.

C does not allow declaration of variables at the time of creating a typedef definition. So variables must be declared in an independent statement.
The typedef (derived from type definition) keyword enables the programmer to create a new data type name by using an existing data type. By using typedef, no new data is created, rather an alternate name is given to a known data type. The general syntax of using the typedef keyword is
given as:
typedef existing_data_type new_data_type;

When the user does not explicitly initialize the structure, then C automatically does it. For int and float members, the values are initialized to zero, and char and string members are initialized to '\0' by default.

For example, we can initialize a student structure by writing,
struct student
{
int r_no;
char name[20];
char course[20];
float fees;
}stud1 = {01, "Rahul", "BCA", 45000};
Or, by writing,
struct student stud1 = {01, "Rahul", "BCA", 45000};

When all the members of a structure are not initialized, it is called partial initialization. In case of partial initialization, first few members of the structure are initialized and those that are uninitialized are assigned default values.

Note Of all the operators –>, . , ( ), and [] have the highest priority. This is evident from the following statement
stud1.fees++ will be interpreted as (stud1.fees)++.

Copying and Comparing Structures
We can assign a structure to another structure of the same type. For example, if we have two structure variables stud1 and stud2 of type struct student given as
struct student stud1 = {01, "Rahul", "BCA", 45000};
struct student stud2;
Then to assign one structure variable to another, we
will write
stud2 = stud1;

This statement initializes the members of stud2 with the values of members of stud1. Therefore, now the values of stud1 and stud2 can be given as 
C does not permit comparison of one structure variable with another. However, individual members of one structure can be compared with individual members of another structure. When we compare one structure member with another structure’s member, the comparison will behave like any other ordinary variable comparison. For example, to compare the fees of two students, we will write if(stud1.fees > stud2.fees) //to check if fees of stud1 is greater than stud2

In the above examples, we have seen how to declare a structure and assign values to its data members. Now, we will discuss how an array of structures is declared. For this purpose, let us first analyse where we would need an array of structures. In a class, we do not have just one student. But there may be at least 30 students. So, the same definition of the structure can be used for all the 30 students. This would be possible when we make an array of structures. An array of structures is declared in the same way as we declare an array of a built-in data type.

struct student
{
int r_no;
char name[20];
char course[20];
float fees;
};

Now, to assign values to the ith student of the class, we will write
stud[i].r_no = 09;
stud[i].name = "RASHI";
stud[i].course = "MCA";
stud[i].fees = 60000;
In order to initialize the array of structure variables at the time of declaration, we can write as follows:
struct student stud[3] = {{01, "Aman", "BCA", 45000},{02, "Aryan", "BCA", 60000}, {03,"John", "BCA", 45000}};

STRUCTURES AND FUNCTIONS
For structures to be fully useful, we must have a mechanism to pass them to functions and return them. A function may access the members of a structure in three ways-

1.Passing individual members
#include <stdio.h>
typedef struct
{
int x;
int y;
}POINT;
void display(int, int);
int main()
{
POINT p1 = {2, 3};
display(p1.x, p1.y);
return 0;
}
void display(int a, int b)
{
printf(" The coordinates of the point are: %d %d", a, b);
}
Output
The coordinates of the point are: 2 3

2.Passing the entire structure
#include <stdio.h>
typedef struct
{
int x;
int y;
}POINT;
void display(POINT);
int main()
{
POINT p1 = {2, 3};
display(p1);
return 0;
}
void display(POINT p)
{
printf("The coordinates of the point are: %d %d", p.x, p.y);
}

If the called function is returning a copy of the entire structure then it must be declared as struct followed by the structure name.
Σ The structure variable used as parameter in the function declaration must be the same as that of the actual argument in the called function (and that should be the name of the struct type).
Σ When a function returns a structure, then in the calling function the returned structure must be assigned to a structure variable of the same type.

Passing Structures through Pointers
Passing large structures to functions using the call by value method is very inefficient. Therefore, it is preferred to pass structures through pointers. It is possible to create a pointer to almost any type in C, including the user-defined types. It is extremely common to create pointers to structures. Like in other cases, a pointer to a structure is never itself a structure, but merely a variable that holds the address of a structure. The syntax to declare a pointer to a structure can be given as,
struct struct_name
{
data_type member_name1;
data_type member_name2;
data_type member_name3;
}*ptr;
or,
struct struct_name *ptr;

For our student structure, we can declare a pointer variable by writing
struct student *ptr_stud, stud;
The next thing to do is to assign the address of stud to the pointer using the address operator (&), as we would do in case of any other pointer. So to assign the address,Passing the address of structure
ptr_stud = &stud;
To access the members of a structure, we can write
 get the structure, then select a member 
(*ptr_stud).roll_no;

Since parentheses have a higher precedence than *, writing this statement would work well. But this statement is not easy to work with, especially for a beginner. So, C introduces a new operator to do the same task. This operator is known as ‘pointing-to’ operator
(->). It can be used as:
 the roll_no in the structure ptr_stud points to 
ptr_stud -> roll_no = 01;
This statement is far easier than its alternative.

SELF-REFERENTIAL STRUCTURES
Self-referential structures are those structures that contain a reference to the data of its same type. That is, a self-referential structure, in addition to other data, contains a pointer to a data that is of the same type as that of the structure. For example, consider the structure node given below.
struct node
{
int val;
struct node *next;
};
Here, the structure node will contain two types of data: an integer val and a pointer next. You must be wondering why we need such a structure. Actually, self-referential structure is the foundation of other data structures. We will be using them throughout this book and their purpose will be clearer to you when we discuss linked lists, trees, and graphs.\

UNIONS
Similar to structures, a union is a collection of variables of different data types. The only difference between a structure and a union is that in case of unions, you can only store information in one field at any one time. To better understand a union, think of it as a chunk of memory that is used to store variables of different types. When a new value is assigned to a field, the existing data is replaced with the new data.
Thus, unions are used to save memory. They are useful for applications that involve multiple members, where values need not be assigned to all the members at any one time.

Declaring a Union
union union–name
{
data_type var–name;
data_type var–name;
..................
};

The most important thing to remember about a union is that the size of a union is the size of its largest field. This is because sufficient number of bytes must be reserved to store the largest sized field.
Accessing a Member of a Union
A member of a union can be accessed using the same syntax as that of a structure. To access the fields of a union, use the dot operator (.).

Initializing Unions
The difference between a structure and a union is that in case of a union, the fields share the same memory space, so new data replaces any existing data. Look at the following code and observe the difference between a structure and union when their fields are to be initialized.

#include <stdio.h>
typedef struct 
{
    int x, y;
}POINT1;
typedef union 
{
    int x;
    int y;
}POINT2;
int main()
{
    POINT1 P1 = {2, 3};
    // POINT2 P2 ={4,5}; Illegal in case of unions
    POINT2 P2;
    P2.x = 4;
    P2.y = 5;
    printf("\n The coordinates of P1 are %d and %d", P1.x, P1.y);
    printf("\n The coordinates of P2 are %d and %d", P2.x, P2.y);
    return 0;
}

In main(), we can see the difference between structures and unions while initializing values. The fields of a union cannot be initialized
all at once.

ARRAYS OF UNION VARIABLES
Like structures we can also have an array of union variables. However, because of the problem of new data overwriting existing data in the other fields, the program may not display the accurate results.
#include <stdio.h>
union POINT
{
int x, y;
};
int main()
{
int i;
union POINT points[3];
points[0].x = 2;
points[0].y = 3;
points[1].x = 4;
points[1].y = 5;
points[2].x = 6;
points[2].y = 7;
for(i=0;i<3;i++)
printf("\n Coordinates of Point[%d] are %d and %d", i, points[i].x,
points[i].y);
return 0;
}
Output
Coordinates of Point[0] are 3 and 3
Coordinates of Point[1] are 5 and 5
Coordinates of Point[2] are 7 and 7

UNIONS INSIDE STRUCTURES
Generally, unions can be very useful when declared inside a structure. Consider an example in which you want a field of a structure to contain a string or an integer, depending on what the user specifies. The following code illustrates such a scenario:
#include <stdio.h>
struct student
{
union
{
char name[20];
int roll_no;
};
int marks;
};
int main()
{
struct student stud;
char choice;
printf("\n You can enter the name or roll number of the student");
printf("\n Do you want to enter the name? (Y or N): ");
gets(choice);
if(choice==‘y’ || choice==‘Y’)
{
printf("\n Enter the name: ");
gets(stud.name);
}
else
{
printf("\n Enter the roll number: ");
scanf("%d", &stud.roll_no);
}
printf("\n Enter the marks: ");
scanf("%d", &stud.marks);
if(choice==‘y’ || choice==‘Y’)
printf("\n Name: %s ", stud.name);
else
printf("\n Roll Number: %d ", stud.roll_no);
printf("\n Marks: %d", stud.marks);
return 0;
}

Σ Structure is a user-defined data type that can store related information (even of different data types) together.
Σ A structure is declared using the keyword struct, followed by the structure name.
Σ The structure definition does not allocate any memory or consume storage space. It just gives a template that conveys to the C compiler how the
structure is laid out in the memory and gives details of the member names. Like any data type, memory is allocated for the structure when we declare a variable of the structure.
Σ When a struct name is preceded with the keyword typedef, then the struct becomes a new type.
Σ When the user does not explicitly initialize the structure, then C automatically does it. For int and float members, the values are initialized to zero and char and string members are initialized to '\0' by default.
Σ A structure member variable is generally accessed using a '.' (dot) operator.
Σ A structure can be placed within another structure.That is, a structure may contain another structure as its member. Such a structure is called a nested structure.
Σ Self-referential structures are those structures that contain a reference to data of its same type. That is, a self-referential structure, in addition to other data, contains a pointer to a data that is of the same type as that of the structure.
Σ A union is a collection of variables of different data types in which memory is shared among these variables. The size of a union is equal to the size of its largest member.
Σ The only difference between a structure and a union is that in case of unions information can only be stored in one member at a time. 

*/