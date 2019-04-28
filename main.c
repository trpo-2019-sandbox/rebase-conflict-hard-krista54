#include <stdio.h>

#define N_ELEMENTS(arr) (sizeof(arr) / sizeof(*(arr)))

int min_element(int* arr, int size)
{
    int min = *arr;

    int* it;
    for (it = arr + 1; it < arr + size; ++it) {
        if (*it < min) {
            min = *it;
        }
    }

    return min;
}

<<<<<<< HEAD
void  print_array(int* arr,int size){
 printf("Array:  ");
 int i;
 for (i=0;i<10;I++)
{
 printf("%d ",arr[i]);
}
 printf("\n");
}
int main()
||||||| merged common ancestors
int main()
=======
void print_array(int* arr, int size)
>>>>>>> Extract printing array to function
{
<<<<<<< HEAD
    int arr[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    const int min = min_element(arr, N_ELEMENTS(arr));

    printf_array(arr,N_ELEMENTS(arr));
||||||| merged common ancestors
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    printf("Array: ");
    int i;
    for (i = 0; i < N_ELEMENTS(arr); ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

=======
    printf("Array: ");
    int i;
    for (i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, 1, 4, 1, 5, 9, 2};

    const int min = min_element(arr, N_ELEMENTS(arr));

    print_array(arr, N_ELEMENTS(arr));
>>>>>>> Extract printing array to function
    printf("Min element: %d\n", min);

    return 0;
}
