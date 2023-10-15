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
char *logic(char *input)    //  return to print the vowels capital case and constant lower case in in the passed string
{
    //Write your code here  //  return to print the vowels capital case and constant lower case in in the passed string
    //You can create other functions and call from here
    //Don't print anything. Just return the intended output
    
    char *s, *t;        // these pointers are used to avoid matrix type access to the char in respective array
    char temp[1024];    // space for the putting the found vowel then later return the pointer to this array
                        // not a good practice a potential source of security as scope of this should be gone after this function terminates
    t=temp;             // here *t is udsed as *temp can't be increminated as it is const pointer to base of char array
    s=input;            // *input can be used as incrementing pointer it is duplicated locally but to keep symmetry *s is used
       
    for ( ;*s!='\0';s++,t++)
    {
        if(*s=='a' || *s=='e' || *s=='i' || *s=='o' || *s=='u')
                *t=*s +'A'-'a';
        else if(*s=='A' || *s=='E' || *s=='I' || *s=='O' || *s=='U')
                *t=*s;
        else if ( *s>='A' && *s<='Z')
                *t=*s-'A'+'a';
        else 
                *t=*s;
    }      
    *t='\0';            //terminating char needed for the end for the temp array of char so it can become string
       
   char *result=(char *)malloc(strlen(temp) + 1);   //+1 for buffer protection
    
   strcpy(result,temp);                            
    
   return result;     // returning t is memory bug as it is allocated free after finish of function so using malloc which create persistence until freed or termination
}
