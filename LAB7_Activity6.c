#include <stdio.h>

 int main(){

    int Rainfall[4][7] = {
        {3, 0, 5, 2, 0, 1, 6},
        {7, 0, 3, 4, 2, 8, 5},
        {2, 1, 5, 3, 0, 2, 7},
        {6, 0, 8, 2, 5, 5, 0},
    };
    int Week = 0;
    int Weekly_Total = 0;
    int Monthly_Total = 0;
    int Days = 30;
    float Monthly_Avg = 0;

    for (int i = 0; i < 4; i++)
    {
       Weekly_Total = 0;
       Week = Week + 1;

       for (int j = 0; j < 7; j++)
       {
        Weekly_Total = Weekly_Total + Rainfall[i][j];
       }

       printf("Week %d total: %d mm\n", Week, Weekly_Total);
       Monthly_Total = Monthly_Total + Weekly_Total;
       Monthly_Avg = Monthly_Total / Days;
    }


    printf("Overall Average: %.f mm\n", Monthly_Avg);

    return 0;
}
