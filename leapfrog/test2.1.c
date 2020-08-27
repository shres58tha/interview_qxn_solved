#include <stdio.h>
#include <string.h>

int logic(char *input);

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
    printf("%d", logic(input));
    return 0;
}

//The function is expected to return an integer.
//The function accepts string as parameter.
int logic(char *input)
{
    //Write your code here
    //You can create other functions and call from here
    //Don't print anything. Just return the intended output
    int a=0,b=0;
    
    while (*input!='\0'){
        if ( *input =='{' )
             a++;
        if ( *input =='(' )
             b++;
        if ( *input =='}' )
             a--;
        if ( *input ==')' )
             b--;
        input++;   
    }          
    if (a<0)
        a=-a; 
    if (b<0)
        b=-b;

    return (a+b);
}
