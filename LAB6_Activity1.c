#include<stdio.h>
int main(){
	double gpa;

	printf("Enter the gpa-");
	scanf("%lf",&gpa);

	if(gpa<=0.99){
	       printf("Failed semester-Registration suspended");}
	       else{
		       if(gpa<=1.99){
			       printf("on probation for next semester\n");}
			       else{
				       if(gpa<=2.99){
					       printf("no massege\n");}
				               else{
						      if(gpa<=3.49){
							     printf("Dean's list for semester\n");}
						             else{
								     printf("Highest value for semester\n");}}}}

return 0;
}
	
				      

				   


	     	       
