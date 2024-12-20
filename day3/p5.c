#include <stdio.h>

int main()
{
    int i = 0;
    int arr[5];
     while (i<5)
         arr[i] = ++i;
    for (int i = 0;i<5; printf("%d ", arr[i++]));

    return 0;
}