
#include <stdio.h>
#define MAX_FILE_NAME 100
 
int main()
{
    FILE *fp;
    int count = 0;  // Line counter (result)
    char c;  // To store a character read from fi
 
    // Open the file
    fp = fopen("subor.txt", "r");
 
    // Check if file exists
    if (fp == NULL)
    {
        printf("Could not open file");
        return 0;
    }
 
    // Extract characters from file and store in character c
    for (c = getc(fp); c != EOF; c = getc(fp))
        if (c == '\n') // Increment count if this character is newline
            count++;
        if(c == EOF)
            count++;
 
    // Close the file
    fclose(fp);
    printf("%d lines\n ", count);
 
    return 0;
}
