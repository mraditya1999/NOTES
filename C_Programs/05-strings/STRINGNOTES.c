/*
4.1.1 Reading Strings
string can be read by the user in three ways:
1. using scanf function,
2. using gets() function, and
3. using getchar(),getch()or getche() function repeatedly.

Strings can be read using scanf() by writing
scanf("%s", str);
In order to take a line as input, you can use scanf("%[^\n]%*c", s);
[] is the scanset character. ^\n stands for taking input until a newline isn't encountered. Then, with this %*c, it reads the newline character and here, the used * indicates that this newline character is discarded.

Although the syntax of using scanf() function is well known and easy to use, the main pitfall of
using this function is that the function terminates as soon as it finds a blank space.

Unlike int, float, and char values, %s format does not require the
ampersand before the variable str.

The string can be read by writing
gets(str);
gets() is a simple function that overcomes the drawbacks of the scanf() function. The gets()
function takes the starting address of the string which will hold the input. The string inputted
using gets() is automatically terminated with a null character.

int main()
{
    int i=0;
    char ch,str[50];

ch = getchar();// Get a character
while(ch != '*')
{
str[i] = ch;// Store the read character in str
i++;
ch = getchar();// Get another character
}
str[i] = '\0';//Terminate str with null character
    return 0;

Writing Strings
Strings can be displayed on the screen using the following three ways:
1. using printf() function,
2. using puts() function, and
3. using putchar() function repeatedly.
Strings can be displayed using printf() by writing
printf("%s", str);
}

The width specifies the minimum output field width. If the string is short, the extra space is either left padded or right padded. A negative width left pads short string rather than the default right justification. The precision specifies the maximum number of characters to be displayed, after which the string is truncated. For example,
printf ("%5.3s", str);
The above statement would print only the first three characters in a total field of five characters. Also these characters would be right justified in the allocated width. To make the string left justified, we must use a minus sign. For example,
printf ("%–5.3s", str);

The next method of writing a string is by using puts() function. A string can be displayed by writing
puts(str);
puts() is a simple function that overcomes the drawbacks of the printf() function. Strings can also be written by calling the putchar() function repeatedly to print a sequence of single characters.
i=0;
while(str[i] != '\0')
{
putchar(str[i]);// Print the character on the screen
i++;
}

Extracting a Substring from a String
To extract a substring from a given string, we need the following three parameters:
1. the main string,
2. the position of the first character of the substring in the given string, and
3. the maximum number of characters/length of the substring.
For example, if we have a string
str[] = "Welcome to the world of programming";
Then,
SUBSTRING(str, 15, 5) = world
Figure 4.8 shows an algorithm that extracts a substring
from the middle of a string.
In this algorithm, we initialize a loop counter I to M,
that is, the position from which the characters have to be
copied. Steps 3 to 6 are repeated until N characters have
been copied. With every character copied, we decrement
the value of N. The characters of the string are copied into
another string called the SUBSTR. At the end, a null character
is appended to SUBSTR to terminate the string.

Inserting a String in the Main String The insertion operation inserts a string S in the main text T at the kth position.
The general syntax of this operation is INSERT(text, position, string). For example, INSERT("XYZXYZ", 3, "AAA") = "XYZAAAXYZ" Figure 4.9 shows an algorithm to insert a string in a given text at the specified position. This algorithm first initializes the indices into the string to zero. From Steps 3 to 5, the contents of NEW_STR are built. If I is exactly equal to the position at which the substring has to be inserted, then the inner loop copies the contents of the substring into NEW_STR. Otherwise, the contents of the text are copied into it.

Pattern Matching
This operation returns the position in the string where the string pattern first occurs. For example,INDEX("Welcome to the world of programming","world") = 15.However, if the pattern does not exist in the string, the INDEX function returns 0.\

Deleting a Substring from the Main String
The deletion operation deletes a substring from a given text. We can write it as DELETE(text,
position, length).

Replacing a Pattern with Another Pattern in a String
The replacement operation is used to replace the pattern P1 by another pattern P2. This is done by writing REPLACE(text, pattern1, pattern2). 
For example,
("AAABBBCCC", "BBB", "X") = AAAXCCC
("AAABBBCCC", "X", "YYY")= AAABBBCC

ARRAYS OF STRINGS
Till now we have seen that a string is an array of characters. For example, if we say char name[] = "Mohan", then the name is a string (character array) that has five characters. Now, suppose that there are 20 students in a class and we need a string that stores the names of all the 20 students. How can this be done? Here, we need a string of strings or an array of strings. Such an array of strings would store 20 individual strings. An array of strings is declared as char names[20][30];

Here, the first index will specify how many strings are needed and the second index will specify the length of every individual string. So here, we will allocate space for 20 names where each name can be a maximum 30 characters long. Let us see the memory representation of an array of strings. If we have an array declared as
char name[5][10] = {"Ram", "Mohan", "Shyam", "Hari", "Gopal"};

 A string is a null-terminated character array.
Σ Individual characters of strings can be accessed using a subscript that starts from zero.
Σ All the characters of a string are stored in successive memory locations.
Σ Strings can be read by a user using three ways: using scanf() function, using gets() function, or using getchar() function repeatedly.
Σ The scanf() function terminates as soon as it finds a blank space.
Σ The gets() function takes the starting address of the string which will hold the input. The string inputted using gets() is automatically terminated with a null character.
Σ Strings can also be read by calling getchar() repeatedly to read a sequence of single characters.
Σ Strings can be displayed on the screen using three ways: using printf function, using puts() function, or using putchar()function repeatedly.
Σ C standard library supports a number of pre-defined functions for manipulating strings or changing the contents of strings. Many of these functions are defined in the header file string.h.
Σ Alternatively we can also develop functions which perform the same task as the pre-defined string handling functions. The most basic function is the length function which returns the number of characters in a string.
Σ Name of a string acts as a pointer to the string. In the declaration char str[5] = "hello"; str is a pointer which holds the address of the first character, i.e., ‘h’.
Σ An array of strings can be declared as char strings [20][30]; where the first subscript denotes the number of strings and the second subscript denotes the length of every individual string.

*/