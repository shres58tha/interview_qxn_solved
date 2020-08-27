#include <stdio.h>
#include <string.h>

char *logic(char *input);

//Do not edit the main function
int main(void)
{
    char input[1024];
    int len = 0;

    //Get the input
    fgets(input, sizeof(input), stdin);

    //Removing trailing new line
    len = strlen(input);
    if (input[len - 1] == '\n')
    {
        input[len - 1] = 0;
    }

    //Print output returned from the logic function
    printf("%s", logic(input));

    return 0;
}

//The function is expected to return a string.
//The function accepts string as parameter.
char *logic(char *input)
{
    //Write your code here  // return vowels in the string else return none
    //You can create other functions and call from here
    //Don't print anything. Just return the intended output
    
    char *s, *t;        // these pointers are used to avoid matrix type access to the char in respective array
    char temp[1024];    // space for the putting the found vowel then later return the pointer to this array
                        // not a good practice a potential source of security as scope of this should be gone after this function terminates
    t=temp;             // here *t is udsed as *temp can't be increminated as it is const pointer to base of char array
    s=input;            // *input can be used as incrementing pointer it is duplicated locally but to keep symmetry *s is used
       
    for ( ;*s!='\0';s++)
    {
        if(*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u' || 
           *s=='A' || *s=='E' || *s=='I' || *s=='O' || *s=='U')
        {
               *t=*s;
                t++;        
        }
    }      
    *t='\0';            //terminating char needed for the end for the temp array of char so it can become string
       
    t=temp;             //getting the base address of the temp array again
    
    return t;           // returning t ie char *,  returning of the temp causes trouble as it is not char * type
}
