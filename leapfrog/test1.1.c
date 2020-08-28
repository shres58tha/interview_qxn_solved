 
#include <stdio.h>
#include <string.h>

int logic(int x, int y);

//Do not edit the main function
int main(void)
{
    int x, y;
    //Get the input
    //printf("\nenter x :");
    scanf("%d", &x);
    //printf("\nenter y :");
    scanf("%d", &y);

    //Print output returned from the logic function
    printf("\n%d \n", logic(x, y) );
    return 0;
}

//The function is expected to return an integer.
//The function accepts two parameters, both integers.
int logic(int x, int y)  // function to find if x is power of y if yes return 1 else return 0
{
    /*
     return !(x%y);       // wrong logic wrong way Thanks to Ranjan Shrestha sir for pointing it out
    */
    int tem;
    tem=x;
    while(tem>1){
        tem=tem/y;
        if (tem==1) return 1;
    }
        return 0;
}
