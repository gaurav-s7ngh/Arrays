#include <stdio.h>

int insertionSort(int arr[], int *size, int pos, int data)
{
    if (pos < 1 || pos > *size + 1)
    {
        printf("INVALID POSITION!\n");
        return 1; // Return 1 for failure
    }

    for (int i = *size - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = data;
    (*size)++;

    return 0; // Return 0 for success
}
int deletionSort(int arr[], int *size, int pos)
{
    if (pos < 1 || pos > *size + 1)
    {
        printf("INVALID POSITION\n");
        return 1;
    }
    else
    {
        arr[pos - 1] = 0;
        for (int i = pos - 1; i <= *size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        *size--;
        return 0;
    }
}
int linearSearch(int arr[], int size, int data)
{
    int i = 0;
    while (i < size)
    {
        if (arr[i] == data)
        {
            return i;
        }
        else
        {
            i++;
        }
    }
    return -1;
}
int binSearch(int arr[], int size, int data)
{
    int low, mid, high;

    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == data)
        {
            return mid;
        }
        if (arr[mid] < data)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int a[50], size, pos, data;

    printf("Enter the size of array elements you want to enter: ");
    scanf("%d", &size);

    if (size <= 0 || size > 50)
    {
        printf("Invalid size!\n");
        return 1;
    }

    printf("Enter the array elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    // printf("\nEnter the data you want to insert: ");
    // scanf("%d", &data);
    // printf("Enter the position where you want to insert the data: ");
    // scanf("%d", &pos);

    // printf("Enter the position where you want to delete the data: ");
    // scanf("%d", &pos);

    printf("Enter the data you want to search : ");
    scanf("%d", &data);

    // int result = insertionSort(a, &size, pos, data);

    // int result1 = deletionSort(a,&size,pos);

    // LINEAR SEARCH
    //  int linSearchIndex = linearSearch(a, size, data);
    //  if (linSearchIndex == -1)
    //  {
    //      printf("Element not found in index !!\n ");
    //  }
    //  else
    //  {
    //      printf("Element found at %d index of the array through linear Search.", linSearchIndex);
    //  }

    // BINARY SEARCH
    int binSearchIndex = binSearch(a, size, data);
    if (binSearchIndex == -1)
    {
        printf("Element not found in index !!\n ");
    }
    else
    {
        printf("Element found at %d index of the array through Binary Search.", binSearchIndex);
    }

    // INSERTION OF ARRAY CODE
    //  if (result == 0) {
    //      printf("Insertion successful! Updated array: ");
    //      for (int j = 0; j < size; j++) {
    //          printf("%d ", a[j]);
    //      }
    //      printf("\n");
    //  } else {
    //      printf("Insertion failed.\n");
    //  }

    // DELETION
    //  if (result1 == 0) {
    //      printf("DELETION successful! Updated array: ");
    //      for (int j = 0; j < size; j++) {
    //          printf("%d ", a[j]);
    //      }
    //      printf("\n");
    //  } else {
    //      printf("DELETION failed.\n");
    //  }

    return 0;
}
