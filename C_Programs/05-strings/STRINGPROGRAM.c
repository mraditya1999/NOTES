/*
6. Write a program to extract a substring from the middle of a given string.
#include <stdio.h>
#include <conio.h>
int main()
{
char str[100], substr[100];
int i=0, j=0, n, m;
clrscr();
printf("\n Enter the main string : ");
gets(str);
printf("\n Enter the position from which to start the substring: ");
scanf("%d", &m);
printf("\n Enter the length of the substring: ");
scanf("%d", &n);
i=m;
while(str[i] != '\0' && n>0)
{
substr[j] = str[i];
i++;
j++;
n––;
}
substr[j] = '\0';
printf("\n The substring is : ");
puts(substr);
getch();
return 0;
}
Output
Enter the main string : Hi there
Enter the position from which to start the substring: 1
Enter the length of the substring: 4
The substring is : i th

Write a program to insert a string in the main text.
#include <stdio.h>
#include <conio.h>
int main()
{
char text[100], str[20], ins_text[100];
int i=0, j=0, k=0,pos;
clrscr();
printf("\n Enter the main text : ");
gets(text);
printf("\n Enter the string to be inserted : ");
gets(str);
printf("\n Enter the position at which the string has to be inserted: ");
scanf("%d", &pos);
while(text[i]! = '\0')
{
if(i==pos)
{
while(str[k] != '\0')
{
ins_text[j] = str[k];
j++;
k++;
}
}
else
{
ins_text[j] = text[i];
j++;
}
i++;
}
ins_text[j] = '\0';
printf("\n The new string is : ");
puts(ins_text);
getch();
return0;
}
Output
Enter the main text : newsman
Enter the string to be inserted : paper
Enter the position at which the string has to be inserted: 4
The new string is: newspaperman

8. Write a program to delete a substring from a text.
#include <stdio.h>
#include <conio.h>
int main()
{
char text[200], str[20], new_text[200];
int i=0, j=0, found=0, k, n=0, copy_loop=0;
clrscr();
printf("\n Enter the main text : ");
gets(text);
printf("\n Enter the string to be deleted : ");
gets(str);
while(text[i]!='\0')
{
j=0, found=0, k=i;
while(text[k]==str[j] && str[j]!='\0')
{
k++;
j++;
}
if(str[j]=='\0')
copy_loop=k;
new_text[n] = text[copy_loop];
i++;
copy_loop++;
n++;
}
new_str[n]='\0';
printf("\n The new string is : ");
puts(new_str);
getch();
return 0;
}
Output
Enter the main text : Hello, how are you?
Enter the string to be deleted : , how are you?
The new string is : Hello

9. Write a program to replace a pattern with another pattern in the text.
#include <stdio.h>
#include <conio.h>
main()
{
char str[200], pat[20], new_str[200], rep_pat[100];
int i=0, j=0, k, n=0, copy_loop=0, rep_index=0;
clrscr();
printf("\n Enter the string : ");
gets(str);
printf("\n Enter the pattern to be replaced: ");
gets(pat);
printf("\n Enter the replacing pattern: ");
gets(rep_pat);
while(str[i]!='\0')
{
j=0,k=i;
while(str[k]==pat[j] && pat[j]!='\0')
{
k++;
j++;
}
if(pat[j]=='\0')
{
copy_loop=k;
while(rep_pat[rep_index] !='\0')
{
new_str[n] = rep_pat[rep_index];
rep_index++;
n++;
}
}
new_str[n] = str[copy_loop];
i++;
copy_loop++;
n++;
}
new_str[n]='\0';
printf("\n The new string is : ");
puts(new_str);
getch();
return 0;
}
Output
Enter the string : How ARE you?
Enter the pattern to be replaced : ARE
Enter the replacing pattern : are

Write a program to sort the names of students.
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
char names[5][10], temp[10];
int i, n, j;
clrscr();
printf("\n Enter the number of students : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n Enter the name of student %d : ", i+1);
gets(names[i]);
}
for(i=0;i<n;i++)
{
for(j=0;j<n–i–1;j++)
{
if(strcmp(names[j], names[j+1])>0)
{
strcpy(temp, names[j]);
strcpy(names[j], names[j+1]);
strcpy(names[j+1], temp);
}
}
}
printf("\n Names of the students in alphabetical order are : ");
for(i=0;i<n;i++)
puts(names[i]);
getch();
return 0;
}
Output
Enter the number of students : 3
Enter the name of student 1 : Goransh
Enter the name of student 2 : Aditya
Enter the name of student 3 : Sarthak
Names of the students in alphabetical order are : Aditya Goransh Sarthak

11. Write a program to read multiple lines of text and then count the number of characters,
words, and lines in the text.
#include <stdio.h>
#include <conio.h>
int main()
{
char str[1000];
int i=0, word_count = 1, line_count =1, char_count = 1;
clrscr();
printf("\n Enter a ‘*’ to end");
printf("\n **************");
printf("\n Enter the text : ");
scanf("%c", &str[i]);
while(str[i] != '*')
{
i++;
scanf("%c", &str[i]);
}
str[i] = '\0';
i=0;
while(str[i] != '\0')
{
if(str[i] == '\n' || i==79)
line_count++;
if(str[i] == ' ' &&str[i+1] != ' ')
word_count++;
char_count++;
i++;
}
printf("\n The total count of words is : %d", word_count);
printf("\n The total count of lines is : %d", line_count);
printf("\n The total count of characters is : %d", char_count);
return 0;
}
Output
Enter a ‘*’ to end
**************
Enter the text : Hi there*
The total count of words is : 2
The total count of lines is : 1
The total count of characters is : 9
12. Write a program to find whether a string is a palindrome or not.
#include <stdio.h>
#include <conio.h>
int main()
{
char str[100];
int i = 0, j, length = 0;
clrscr();
printf("\n Enter the string : ");
gets(str);
while(str[i] != '\0')
{
length++ ;
i++ ;
}
i=0;
j = length – 1;
while(i <= length/2)
{
if(str[i] == str[j])
{
i++;
j––;
}
else
break;
}
if(i>=j)
printf("\n PALINDROME");
else
printf("\n NOT A PALINDROME");
return 0;
}
Output
Enter the string: madam
PALINDROME

13. Write a program to copy a string into another string.
#include <stdio.h>
int main()
{
char str[100], copy_str[100];
char *pstr, *pcopy_str;
pstr = str;
pcopy_str = copy_str;
printf("\n Enter the string : ");
gets(str);
while(*pstr != '\0')
{
134 Data Structures Using C
*pcopy_str = *pstr;
pstr++, pcopy_str++;
}
*pcopy_str = '\0';
printf("\n The copied text is : ");
while(*pcopy_str != '\0')
{
printf("%c", *pcopy_str);
pcopy_str++;
}
return 0;
}
Output
Enter the string : C Programming
The copied text is : C Programming
14. Write a program to concatenate two strings.
#include <stdio.h>
#include <conio.h>
int main()
{
char str1[100], str2[100], copy_str[200];
char *pstr1, *pstr2, *pcopy_str;
clrscr();
pstr1 = str1;
pstr2 = str2;
pcopy_str = copy_str;
printf("\n Enter the first string : ");
gets(str1);
printf("\n Enter the second string : ");
gets(str2);
while(*pstr1 != '\0')
{
*pcopy_str = *pstr1;
pcopy_str++, pstr1++;
}
while(*pstr2 != '\0')
{
*pcopy_str = *pstr2;
pcopy_str++, pstr2++;
}
*pcopy_str = '\0';
printf("\n The concatenated text is : ");
while(*pcopy_str != '\0')
{
printf("%c", *pcopy_str);
pcopy_str++;
}
return 0;
}
Output
Enter the first string : Data Structures Using C by
Enter the second string : Reema Thareja
The concatenated text is : Data Structures Using C by Reema Thareja

1.Write a program in which a string is passed as an argument to a function.
2. Write a program in C to concatenate first n characters of a string with another string.
3. Write a program in C that compares first n characters of one string with first n characters of another string.
4. Write a program in C that removes leading and trailing spaces from a string.
5. Write a program in C that replaces a given character with another character in a string. 136 Data Structures Using C
6. Write a program to count the number of digits, upper case characters, lower case characters, and special characters in a given string.
7. Write a program to count the total number of occurrences of a given character in the string.
8. Write a program to accept a text. Count and display the number of times the word ‘the’ appears in the text.
9. Write a program to count the total number of occurrences of a word in the text.
10. Write a program to find the last instance of occurrence of a sub-string within a string.
11. Write a program to input an array of strings. Then, reverse the string in the format shown below. "HAPPY BIRTHDAY TO YOU" should be displayed as "YOU TO BIRTHDAY HAPPY"
12. Write a program to append a given string in the following format. "GOOD MORNING MORNING GOOD"
13. Write a program to input a text of at least two paragraphs. Interchange the first and second paragraphs and then re-display the text on the
screen.
14. Write a program to input a text of at least two paragraphs. Construct an array PAR such that PAR[I] contains the location of the ith paragraph
in text.
15. Write a program to convert the given string "GOOD MORNING" to "good morning".
16. Write a program to concatenate two given strings "Good Morning" and "World". Display the resultant string.
17. Write a program to check whether the two given strings "Good Morning" and "Good Morning " are same.
18. Write a program to convert the given string "hello world" to "dlrow olleh".
19. Write a program to extract the string "od Mo" from the given string "Good Morning".
20. Write a program to insert "University" in the given string "Oxford Press" so that the string should read as "Oxford University Press".
21. Write a program to read a text, delete all the semicolons it has, and finally replace all '.' with a ','.
22. Write a program to copy the last n characters of a character array in another character array. Also, convert the lower case letters into upper case letters while copying.
23. Write a program to rewrite the string "Good Morning" to "Good Evening".
24. Write a program to read and display names of employees in a department.
25. Write a program to read a line until a newline is entered.
26. Write a program to read a short story. Rewrite the story by printing the line number before the starting of each line.
27. Write a program to enter a text that contains multiple lines. Display the n lines of text starting from the mth line.
28. Write a program to check whether a pattern existsin a text. If it does, delete the pattern and display it.
29. Write a program to insert a new name in the string array STUD[][], assuming that names are sorted alphabetically.
30. Write a program to delete a name in the string array STUD[][], assuming that names are sorted alphabetically.
*/