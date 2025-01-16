#include <stdio.h>
int main()
{

    int arr[5] = {12, 11, 13, 5, 6};
    int n = 5;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    {
        printf("\n");
        for (int i = 1; i < n; i++)
        {

            int current = arr[i];
            int sorted = i - 1;

            while (sorted >= 0 && arr[sorted] > (current))
            {
                arr[sorted + 1] = arr[sorted];
                sorted--;
            }
            arr[sorted + 1] = current;

            for (int i = 0; i < n; i++)

                printf("%d ", arr[i]);
            printf("\n");
        }

        return 0;
    }
}
