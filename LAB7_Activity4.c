#include <stdio.h>

 int main(){

    char *Products[10] = {"Apple", "Banana", "Orange", "Mango", "Grapes", "Peach", "Plum", "Pear", "Lemon", "Kiwi"};
    float Prices[10] = {5.99, 12.50, 7.25, 10.00, 15.75, 9.99, 8.30, 6.50, 11.40, 4.99};
    int size = sizeof(Products) / sizeof(Products[0]);

    int Expensive = 0;
    int Cheap = 0;

    for (int i = 0; i < size; i++)
    {
        if (Prices[i] > Prices[Expensive])
        {
            Expensive = i;
        }

        if (Prices[i] < Prices[Cheap])
        {
           Cheap = i;
        }
    }

    printf("Most expensive Product: %s (%.2f$)\n", Products[Expensive], Prices[Expensive]);
    printf("Least expensive product: %s (%.2f$)\n", Products[Cheap], Prices[Cheap]);

    return 0;
}
