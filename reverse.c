#include <stdio.h>
#include <string.h>


int main ( int argc, char *argv[] )
{
    char arr[10]={};
    
        // We assume argv[1] is a filename to open
        FILE *file = fopen( "input.txt", "r" );
 
        /* fopen returns 0, the NULL pointer, on failure */
        if ( file == 0 )
        {
            printf( "Could not open file\n" );
        }
        else
        {
            int x;
            int counter=0;
            /* read one character at a time from file, stopping at EOF, which
               indicates the end of the file.  Note that the idiom of "assign
               to a variable, check the value" used below works because
               the assignment statement evaluates to the value assigned. */
            while  ( ( x = fgetc( file ) ) != EOF )
            {
                arr[counter]=x;
                printf( "%c", x );
                counter++;
            }
            int i;
            printf("\n");
            for(i=counter;i>=0;i--){
            printf("%c",arr[i]);
        }
            fclose( file );
        }
    
}