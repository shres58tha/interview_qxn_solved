 
#include <stdio.h>
#include <string.h>

int logic(int x, int y);

//Do not edit the main function
int main(void)
{
    int x, y;
    
    //Get the input
    scanf("%d", &x);
    scanf("%d", &y);

    //Print output returned from the logic function
    printf("%d", logic(x, y) );
    return 0;
}

//The function is expected to return an integer.
//The function accepts two parameters, both integers.
int logic(int x, int y)  // function to find if x is power of y if yes return 1 else return 0
// we need to just modify function to fulfill the task this was the only one i had time to do
// just went through to see all the question thou
{
   if (y==1){
        if (x==1)
            return 1;
        else
            return 0;
   }
   else { 
        int temp=1, flag =0;
        for (int i=0;temp<=x;i++){
            temp=temp*y;
            if (temp==x){
                flag =1;
                break;
            }
        
        }
    return flag;
   }
}
