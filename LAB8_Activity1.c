#include<stdio.h>
void calculate (int *x,int *y,int *z){
	int a = *x , b = *y , c = *z;
	*x = a + b + c;
	*y = a - b;
	*z = a * c;
}

int main(){
	int x,y,z;

	printf("Input value for x:");
	scanf("%d", &x);

	printf("Input value for y:");
        scanf("%d", &y);

	printf("Input value for z:");
        scanf("%d", &z);



	calculate (&x,&y,&z);
	printf ("Modified value for x:%d\n",x);
	printf ("Modified value for y:%d\n",y);
	printf ("Modified value for z:%d\n",z);

	return 0;
}
