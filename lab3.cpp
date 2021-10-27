#include <stdio.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[], int size)
{
    int i, j;
    for (i = 0; i < size - 1; i++)
        for (j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}
void search(int arr[], int size)
{
    int ans;
    for (int i = 0; i < size; i += 2) {
        if (arr[i] != arr[i + 1]) {
            ans = arr[i];
            break;
        }
    }
    if (arr[size - 2] != arr[size - 1])
        ans = arr[size - 1];
    printf("The required element is %d\n", ans);
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = { 1, 1, 41, 41, 5, 5, 77};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    search(arr, size);
    return 0;
}

