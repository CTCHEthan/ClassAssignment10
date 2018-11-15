#include <stdio.h>
#include <stdlib.h>


void readFile (void);
void writeToFile (void);

int main()
{
    writeToFile();
    readFile();

    return 0;
}

void readFile()
{
    int num;
    FILE *fptr;

    // Attempt to open the file so we may read the contents.
    if ((fptr = fopen("C:/test//program.txt","r")) == NULL)
    {
        // File is either not found, or in use.
        printf("Error! opening file");
    }
    else
    {
        // We have successfully opened the file.
        fscanf(fptr, "%d", &num);

        // Read the contents and print to the console.
        printf("The number stored in the file is : %d", num);

        //Close the file.
        fclose(fptr);
    }
}

void writeToFile()
{
    int num;

    // The source file we wish to write.
    // If the file does not exist, one will be created.
    FILE *fptr;
    fptr = fopen("C://test//program.txt", "w");

    if(fptr == NULL)
    {
        printf("Error creating/writing file.");
    }
    else
    {
        // Get an integer from the user and write the
        //value to the source file.
        printf("Enter num: ");
        scanf("%d", &num);

        fprintf(fptr, "%d", num);
        fclose(fptr);
    }

}
