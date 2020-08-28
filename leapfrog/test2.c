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
    
    // here write a function to indicate how many characters has to be typed to balance the barackets in the text 
    
    // { ( )}   i pasted this code but it did not compiled why i do not know
    // i feel very few must have made this function right check it later
    int a=0;
    char *s, ch;
    s=input;
    
    while (*s!='\0'){
        switch(*s)
            case '{':
            
                a++;
                break;
            
            case '(':
                a++;
                break;
            
            case '}':
                a--;
                break;
            
            case ')':
                a--;
                break;    //what is error here  why error i am not sure it should have compiled 
                
             
         s++;   
    }     //*/  
    
    
    return a;
}
// note : code doesnot work. has multiple issue like not compling but noticed an error in logic two as we should require two types of variable to count two types of bracket

    

