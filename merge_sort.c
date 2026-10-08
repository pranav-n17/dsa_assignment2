#include <stdio.h>

void merge(int arr[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];
}

void mergeSort(int arr[], int n)
{
    int width, left;

    for (width = 1; width < n; width *= 2)
    {
        for (left = 0; left < n - 1; left += 2 * width)
        {
            int mid = left + width - 1;
            int right = left + 2 * width - 1;

            if (mid >= n - 1)
                continue;

            if (right >= n)
                right = n - 1;

            merge(arr, left, mid, right);
        }

        printf("After pass (width = %d): ", width);
        for (int i = 0; i < n; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}

int main()
{
    int arr[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n\n");
    mergeSort(arr, n);

    printf("\nFinal sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}
