/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int largest(int arr[], int n)
{
     int i;
     int max = arr[0];


     for (i=1; i < n; i++)
     if(arr[i] > max)
        max = arr[i];

     return max;
}

int main()
{
     int arr[] = {5, 280, 65, 70, 1048};
     int n = sizeof(arr)/sizeof(arr[0]);
      printf("Largest in given array is %d",largest(arr, n));
     return 0;
}

