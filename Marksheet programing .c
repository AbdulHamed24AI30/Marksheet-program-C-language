#include<stdio.h>
#include<conio.h>

int main()

{
// create all subjects
	int eng,math,chem,phy,pc;
	printf("marks of eng =");
	scanf("%d",&eng);
	printf("marks of math =");
	scanf("%d",&math);
	printf("marks of chem =");
	scanf("%d",&chem);
	printf("marks of phy =");
	scanf("%d",&phy);
	printf("marks of pc =");
	scanf("%d",&pc);
	
	// get obtain  marks by float
	float obtain_marks = eng + math + chem + phy + pc;
	printf("obtain_marks %f",obtain_marks);
	
	// get percentage and us it for grading or if, else if , else conditions
	float percentage = (obtain_marks/500)*100;
	printf("percentage: %f ", percentage);
	//use if condition first and then use else if  
	if (percentage >= 90)
	{ 
	printf("Grade = A1 ");
	}
	else  if (percentage>= 80)
	{
		printf("Grade = A");
	}
	else if (percentage >= 60)
	{
		printf("Grade = B");
	}
	else if (percentage >= 40)
	{
		printf("Grade = C");
	}
	else {
		printf(" YOU HAVE FAILED YOUR EXAMS");
	}
}