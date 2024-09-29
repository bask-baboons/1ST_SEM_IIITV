// Program to find the largest number in an array.

/*Author: Sivajeet Sabdakar
Date: 27-09-2023
Input: no. of elemnts n, elements (int)
Output: largest number in array (int)*/

#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid array size.\n");
        return 0;
    }

    int arr[n];

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    // Find the largest number in the array
    int largest = arr[0];  // Initialize largest with the first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    int smallest= *(arr);
    for (int i; i<n; i++)
    {
        if (arr[i]<smallest)
        {
            smallest=arr[i];
        }
        
    }
    // Print the largest number
    printf("The largest number in the array is: %d\n", largest);
    printf("The smallest number in the array is: %d\n", smallest);

    return 0;
}

//1 3 5 4 9 8 11
/*Output:
Enter the number of elements in the array: 6
Enter the elements of the array:
Enter element 1: 4
Enter element 2: 7
Enter element 3: 8
Enter element 4: 9
Enter element 5: 2
Enter element 6: 5
The largest number in the array is: 9
*/