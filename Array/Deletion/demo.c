
#include<stdio.h>
#define MAX 10

void print(int arr[], int size);
int search(int arr[], int size, int key);
void delete(int arr[], int size, int index);

int main()
{
    int arr[MAX] = {1,2,3,4,5}, size = 5;
    int key, index, i;
    scanf("%d", &key);

    for(i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            index = i;

            for(i=index; i<size; i++)
                {
                    arr[i-1] = arr[i];
                }
            for(i=0; i<size-1; i++)
            {
                printf("%d ", arr[i]);
            }
        }
    }
    return 0;
}

