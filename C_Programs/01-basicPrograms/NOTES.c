
/*
int main()
{
    int a = 1;
    printf("Hello");
    switch (a)
    {
    case 1:
        printf("Hello");
        break;
    case 1L:
        printf("Hi");
        break;

    default:
        printf("Know Program");
        break;
    }
    return 0;

    output - error: duplicate case value
*/
/*
This is only declaration. y is not allocated memory by this statement
extern int y;

This is both declaration and definition, memory to x is allocated by this statement.
int x;
*/

/*
for(;condition;)
{

}

Initialization and increment/decrement is optional and can be placed at any other location
*/

/*
int main()
{
    int k = -7;
printf("%d", 0 < !k);

    return 0;
}
*/

/*
int main()
{
    int i = 1;
    while (i<5)
    printf("H",i++);

    return 0;
}
*/

/*
    int i;
    for(i = 3; i < 15; i += 3);
    printf("%d", i);
*/
/*
int main()
{
    int x = 90;
    printf("%d %d %d", x>50,x=5,x>50);
    return 0;
}
output- 0 5 1 because fuction perform operations from right to left
*/

/*
int main()
{

    int i = 1;
    for(;;)
    {
        printf("%d",i++);
        if(i > 5)
            break;
    }

    int j;
    printf("\n%d", scanf("%d", &j));    //12345
    return 0;
}
*/

/*
main()
{
    int i = 1;
    int j = 2;
    switch(i)
    {
        case 1: printf("one");
        break;
        case j: printf("two");  //error because constant expression require in place of j.
        break;
    }
}
*/

/*
main()
{
    int i=3;
    switch(i)
    {
        default:printf("zero");
        case 1: printf("one");
        break;
        case 2:printf("two");
        break;
        case 3: printf("three");       //three
        break;
    }
}
*/

/*
main()
{
    printf(5 + "Good Morning"); //The statement printf(5+'Good Morning') skips 5 character of the followed string and then print string which is Morning
}
*/

// Can we use string inside switch statement? - No

/*
main()
{
    int i,j;
    printf("%d", scanf("%d %d", &i,&j));    // value 10  and 20 is given as input here
}
output - Scanf returns number of items successfully read. Here, 10 and 20 is given as input which should have been scanned successfully. So number of items read is 2.
*/

/*
main()
{
    char ch[20];
    ch = "Study Tonight";
    printf("%s", ch);       //error
}
*/

/*
main()
{
    char str[7] = "strings";
    printf("%s", str);
}

output - cannot predict. This is because a string always end with NULL terminator i.e \0. Since, the size of the array is 7 and the string itself is of 7 characters, therefore there is no place for NULL terminator. Therefore, we do not know where the string ends and ends up with garbage values.
*/

/*
main()
{
    int i;
    i = strcmp("study", "tonight");
    printf("%d",i);
}
output - strcmp() function will return the ASCII difference between first unmatching character of two strings.
*/

/*
main()
{
    struct student
    {
        char name[20];
        int roll;
    };
    struct student s1 = { "adam", 101 };
    struct student s2 = s1;
    printf("%s", s2.name);  // adam
}
*/

/*
main()
{
    union std
    {
        int x;
        int y;
    };
    union std s1;
    s1.x =10;
    s1.y =20;
    printf("%d %d\n",s1.x, s1.y);   //20 20
    return 0;
}
*/

/*
#include<stdio.h>
main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int *p = a;
    printf("%d\t%d\t%d\t%d\t",*p,0[a],a,p); // 1 1 1002 1002
}
*/

/*
#include <stdio.h>
void main()
{
    int const *p = 5;
    printf("%d", ++(*p));   //Cannot modify a constant value. p is a pointer to a constant integer. But we tried to change the value of the constant integer
}
*/

/*
#include<stdio.h>
main()
{
    struct std
    {
        int x = 3;
        char name[] = "hello";
    };
    struct std *s;
    printf("%d", s->x);
    printf("%s", s->name);
}

output - error because of initializing variables in structure declaration.
*/

/*
#include <stdio.h>
main()
{
    register i = 5;
    char j[] = "hello";
    printf("%s %d", j, i);
}

output -  if you declare i as register compiler will treat it as ordinary integer and it will take integer value. i value may be stored either in register or in memory
*/

/*
Is the NULL pointer same as an uninitialised pointer?
A Null pointer is one which holds 0 (zero) as its value and uninitialized pointer may have some garbage value. To check this out we can print the value of pointer.
*/

// printf (" %d ", printf ("tim"));        output time 3

/*
x = 5;
y = x++;
printf("%d, %d", x, y);     6 5
*/

/*
main()
{
    printf("%p\n", main());
}
output - Prints the address of main function.
*/

// Recursion is sometimes called Circular definition
//  We can pass a structure as a function argument in similar way as we pass any other variable or array.
// The value that follows the keyword CASE may only be Constants
// The machine registers are sometimes called Local variables
// An array of pointers is same as Pointers to pointers.
//  If a variable is a pointer to a structure, then -> operator is used to access data members of the structure through the pointer variable
// boolean data type takes 1 bit for zero or one but in computer minimum memory allocation is 1 byte
// Local variables are stored in an area called stack
//arr[i], i[arr], *(arr+i), *(i+arr) gives the same value.

/*
What is the binary representation of the integer -14?
Explanation: The left most bit (most significant bit) is used to represent the sign of the number: 0 for positive and 1 for negative. For example, a value of positive 14 is written as 01110(in binary). But a value of negative 14 is written as: 11110.
*/
/*
main()
{
    long i = 65536;
    printf("%d\n", i);
}
output - 0
*/

/*
main()
{
    char *p = "ayqm";
    printf ("%c", ++*(p++));
}
output -  b
*/

/*
main()
{
    int i = 5;
    printf("%d", i=++i==6);
}
In such cases, the execution is evaluated from right to left. Hence, first i==6 is evaluated which is actually false, since i is initialized to 5. Hence, for false, i equals 0 and then ++i is evaluated, which makes output - i=1.
*/

/*
main()
{
    int x=15;
    printf("\n%d,%d,%d", x!=15, x=20, x<30);
}
output -  0,20,1
*/

/*
main()
{
    printf("%d %d", sizeof(NULL), sizeof(" "));
}
output -  8 2
*/

/*
int main()
{
    int x = 20;     //20
    char y = 'A';   //65
    int *ptr = &x;
    char *ptr1 = &y;

    ptr[0] = ptr1[0];
    printf("%d %d",ptr[0],ptr1[0]);
    return 0;

    output - 65 65
}
*/

/*
#include<stdio.h>

int main() 
{
  int a = 10;
  void *ptr = &a;
  printf("%d", *ptr);    // Error, as void pointer cannot be dereferenced
  return 0;
}

#include<stdio.h>

int main() 
{
  int a = 10;
  void *ptr = &a;
  printf("%d", *(int *)ptr);        // void pointer type casted to int and then used is fine.
  return 0;
}

*/

/*
#include<stdio.h>

int main() 
{
  int a[2] = {1, 2};
  void *ptr = &a;
  ptr = ptr + sizeof(int);   // move to second index of array
  printf("%d", *(int *)ptr);       // dereference after casting in integer pointer.
  return 0;
}

#include<stdio.h>

int main() 
{
  int a[2] = {1, 2};
  void *ptr = &a;
  ptr = ptr + 1;           // move to a garbage address
  printf("%d", *(int *)ptr);       // dereference after casting in integer pointer.
  return 0;
}
*/


/*
Pointers allow the passing of arrays and strings to functions more efficiently.
Pointers make it possible to return more than one value from the function.
Pointers reduce the length and complexity of a program.
Pointers increase the processing speed.
Pointers save the memory.
*/