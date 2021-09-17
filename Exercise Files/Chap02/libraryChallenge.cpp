// libraryChallenge.cpp by Chirag
// updated 2021-09-17
#include <cstdio>

struct library {
    char *title;
    char *author;
    char *publisher;
    char *subject;
    char *isbn;
    char *worldCat;
    double *deweyDecimal;
    int yearPublished;
    int yearAcquired;
    int quantity;
};


int main()
{
    library lib;
    lib.title = "ANALYSIS OF COMPOSITES";
    lib.author = "Bhagwan";
    lib.publisher = "Wiley & Sons";
    lib.subject = "Mechanics";
    lib.isbn = "9788126536368";
    lib.yearPublished = 1980;
    lib.yearAcquired = 2015;
    lib.quantity = 20;

    printf("Title of the book is %s and it is authored by %s\n", lib.title, lib.author);
    printf("%s is the publisher of the book %s and it's ISBN is %s.\nIt was published in the year %d\n", lib.publisher, lib.title, lib.isbn, lib.yearPublished);

    return 0;
}
