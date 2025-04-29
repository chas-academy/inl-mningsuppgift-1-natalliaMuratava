#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

    int rolls[100];

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;

    int sum = 0;

    for (int i = 0; i < 100; i++)
    {
        rolls[i] = (rand() % 6) + 1;  
    }

    for (int i = 0; i < 100; i++){
        if (rolls[i] == 1)
        {
            one ++;
        } if (rolls[i] == 2)
        {
            two ++;
        } if (rolls[i] == 3)
        {
            three ++;
        } if (rolls[i] == 4)
        {
            four ++;
        } if (rolls[i] == 5)
        {
            five ++;
        } if (rolls[i] == 6)
        {
            six ++;
        }
    }

    for (int i = 0; i < 100; i++)
        {
            sum += rolls[i];  
        }
    

    printf("%d\n", one);
    printf("%d\n", two);
    printf("%d\n", three);
    printf("%d\n", four);
    printf("%d\n", five);
    printf("%d\n", six);
    printf("%d\n", sum);
    printf("%.1f\n", sum/100.0);

    return 0;
}
