#include <stdio.h>
#include <string.h>

void addBookDetails();
void displayBookDetails();
void listAllBooksOfGivenAuthor();
void totalBooks();

typedef struct
{
    char Title[50];
    char Author[50];
    float Price;
} Books;

Books b[50];
int n, count = 0, i = 0;

int main()
{
    int choice;
    printf("1.Add Books Details\n2.Display Book Details\n3.List All Books Of Given Author\n4.List Total No. Of Books\n0.Exit\n\n");
    printf("Enter Your choice: ");
    scanf("%d", &choice);
    while (choice != 0)
    {
        switch (choice)
        {
        case 1:
            addBookDetails();
            break;
        case 2:
            displayBookDetails();
            break;
        case 3:
            listAllBooksOfGivenAuthor();
            break;
        case 4:
            totalBooks();
            break;
        case 0:
            break;
        default:
            printf("Press 0 to exit.\n");
        }
        printf("Enter Your choice: ");
        scanf("%d", &choice);
    }
    printf("Exiting...");
}

void addBookDetails()
{
    int temp = count;
    printf("Enter no. of books you want to Add: ");
    scanf("%d", &n);
    for (i = temp; i < n + temp; i++)
    {
        printf("Enter Title of the book: ");
        fflush(stdin);
        gets(b[i].Title);
        printf("Enter Author of the book: ");
        gets(b[i].Author);
        printf("Enter Price of the book: ");
        scanf("%f", &b[i].Price);
        printf("\n");
        count++;
    }
}

void displayBookDetails()
{
    printf("****Entered Details Of The Books****\n");
    for (int i = 0; i < count; i++)
    {
        printf("Title  : %s\n", b[i].Title);
        printf("Author : %s\n", b[i].Author);
        printf("Price  : %f\n\n", b[i].Price);
    }
}

void listAllBooksOfGivenAuthor()
{
    char name[50], flag = 0;
    printf("Enter author name to see all of his books: ");
    fflush(stdin);
    gets(name);

    n = 0;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(b[i].Author, name) == 0)
        {
            printf("\nTitle  : %s", b[i].Title);
            n++;
        }
    }
    printf("\nWe have  found %d books\n", n);
}
void totalBooks()
{
    printf("Total No. of Books Available in Library are: %d\n\n", count);
}