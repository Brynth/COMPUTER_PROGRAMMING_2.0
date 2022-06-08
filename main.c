/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(void)
{
    int arr [25] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int max = arr [0];
    int min = arr [0];
    
    //determine max and min value
    int i;
    for (i=1; i<25; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
            
    }
    
    printf("\nthe max number is: %d\n",max);
    printf("\nthe min number is: %d\n\n",min);
    return 0;
}
