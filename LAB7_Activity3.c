#include <stdio.h>

 int main(){

    int Temperatures[7] = {22, 25, 20, 30, 28, 24, 26};
    int days[7] = {1, 2, 3, 4, 5, 6, 7};
    int hottest = Temperatures[0];
    int coldest = Temperatures[0];
    int hottest_day = days[0];
    int coldest_day = days[0];
    int size = sizeof(Temperatures) / sizeof(days[0]);

    for (int i = 0; i < size; i++)
    {
       if (Temperatures[i] > hottest)
       {
        hottest = Temperatures[i];
        hottest_day = days[i];
       }

       if (Temperatures[i] < coldest)
       {
        coldest = Temperatures[i];
        coldest_day = days[i];
       }


    }

    printf("Hottest Day: Day %d with %d ºC\n", hottest_day,hottest);
    printf("Coldest Day: Day %d with %d ºC\n", coldest_day,coldest);

    return 0;
}

