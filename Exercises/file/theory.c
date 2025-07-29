#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //  step 1: - creating a pointer that points to a FILE type
    FILE *fptr;
    
    /*  step 2: - opening/access to a file
    fptr = fopen(<file_name>, <type_of_operation>);
    Types of operation: 
    - "w" - writing
    - "r" - reading
    - "a" - appending 
    */
    fptr = fopen("filename1.txt", "w");

    // step 3: - make sure the opening was successful
    if (fptr == NULL) // if that's the case, the file opening has failed
    {
        printf("The file has failed!\n");
    }
    else //(fptr != NULL)
    {
        printf("The file is openned for writing!\n");
        //  step 4: - write some text to the file
        //  step 5: - close the file
        fclose(fptr);
    }
    

    

    

    return 0;
}