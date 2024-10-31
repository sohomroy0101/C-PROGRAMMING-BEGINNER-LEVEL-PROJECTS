//Array Operations:- Performs basic operations on arrays like insertion, deletion and traversal
#include <stdio.h>

int main() {
    int arr[100], size, i, choice, position, element;

    // Step 1: Input the initial size and elements of the array
    printf("Enter the initial size of the array (max 100): ");
    scanf("%d", &size);

    printf("Enter %d elements of the array:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        // Display the menu options
        printf("\nChoose an operation:\n");
        printf("1. Insert an element\n");
        printf("2. Delete an element\n");
        printf("3. Traverse the array\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insertion operation
                printf("Enter the position to insert the new element (1 to %d): ", size + 1);
                scanf("%d", &position);
                
                if (position < 1 || position > size + 1) {
                    printf("Invalid position! Please enter a position between 1 and %d.\n", size + 1);
                    break;
                }

                printf("Enter the element to be inserted: ");
                scanf("%d", &element);

                // Shift elements to the right to create space
                for (i = size; i >= position; i--) {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = element; // Insert the new element
                size++; // Increase the size of the array

                printf("Element inserted successfully.\n");
                //Display the updated array
                printf("Array after insertion:\n");
                for(i=0;i<size;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;

            case 2: // Deletion operation
                printf("Enter the position of the element to delete (1 to %d): ", size);
                scanf("%d", &position);

                if (position < 1 || position > size) {
                    printf("Invalid position! Please enter a position between 1 and %d.\n", size);
                    break;
                }

                // Shift elements to the left to fill the gap
                for (i = position - 1; i < size - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                size--; // Decrease the size of the array
                printf("Element deleted successfully.\n");
                //Display the updated array
                printf("Array after deletion:\n");
                for(i=0;i<size;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;

            case 3: // Traversal operation
                printf("Array elements are:\n");
                for (i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                //Display the updated array
                printf("Array after Traversal:\n");
                for(i=0;i<size;i++){
                    printf("%d ",arr[i]);
                }
                printf("\n");
                break;

            case 4: // Exit the program
                printf("Exiting the program.\n");
                return 0;

            default:
                printf("Invalid choice! Please choose a valid option.\n");
        }
    }

    return 0;
}
