#include <stdio.h>

int main()
{
    int numbers[] = {3, 5, 4, 2, 1}, temp = 0;

    //Ascending
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(numbers[j] > numbers[i])
            {
                temp = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }

    // Descending
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         if (numbers[j] < numbers[i])
    //         {
    //             temp = numbers[i];
    //             numbers[i] = numbers[j];
    //             numbers[j] = temp;
    //         }
    //     }
    // }

    for (int i = 0; i < 5; i++)
        printf("%d\n", numbers[i]);
}