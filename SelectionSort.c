/*SELECTION SORT(arr, n)  
  
Step 1: Repeat Steps 2 and 3 for i = 0 to n-1  
Step 2: CALL SMALLEST(arr, i, n, pos)  
Step 3: SWAP arr[i] with arr[pos]  
[END OF LOOP]  
Step 4: EXIT  
  
SMALLEST (arr, i, n, pos)  
Step 1: [INITIALIZE] SET SMALL = arr[i]  
Step 2: [INITIALIZE] SET pos = i  
Step 3: Repeat for j = i+1 to n  
if (SMALL > arr[j])  
     SET SMALL = arr[j]  
SET pos = j  
[END OF if]  
[END OF LOOP]  
Step 4: RETURN pos  

Time 

Best Case     O(n2)
Average Case  O(n2)
Worst Case    O(n2)

Space Complexity       O(1)  */


#include <stdio.h>  
  
void selection(int arr[], int n)  
{  
    int i, j, small;  
      
    for (i = 0; i < n-1; i++)    // One by one move boundary of unsorted subarray  
    {  
        small = i; //minimum element in unsorted array  
          
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[small])  
            small = j;  
// Swap the minimum element with the first element  
    int temp = arr[small];  
    arr[small] = arr[i];  
    arr[i] = temp;  
    }  
}  
  
void printArr(int a[], int n) /* function to print the array */  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
  
int main()  
{  
    int a[] = { 12, 31, 25, 8, 32, 17 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    selection(a, n);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
    return 0;  
}

