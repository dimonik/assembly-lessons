#include <stdio.h>

int main(void)
{
    int numbers[10];

    // Заполняем массив числами от 0 до 9
    for (int i = 0; i < 10; i++) {
        numbers[i] = i;
    }

    printf("Array start: %p\n", (void *)&numbers[0]);
    printf("Array end:   %p\n", (void *)&numbers[10]);

    printf("\nBefore Assembly:\n");

    for (int i = 0; i < 10; i++) {
        printf("index=%d value=%d address=%p\n",
               i, numbers[i], (void *)&numbers[i]);
    }

    return 0;
}
