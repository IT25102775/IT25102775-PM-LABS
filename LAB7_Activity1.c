#include <stdio.h>

int main() {

        int Marks[10] = {56, 78, 89, 65, 92, 70, 82, 60, 88, 73};
        int Sum = 0;
        float Average = 0;
        int marks = 0;

        for (int i = 0; i < 10; i++){
                Sum = Sum +  Marks[i];
                Average = Sum / 10.00;

        }
        printf("Sum:%d\n", Sum);
        printf("Average:%.1f\n", Average);

        printf("Students scoring above average: ");

        for (int i = 0; i < 10; i++){

        if(Marks[i]>Average){
                        printf("%d,",Marks[i]);
                }

        }
        printf("\n");



        return 0;
}
