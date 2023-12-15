#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Enter value A = ");
	scanf("%d",&a);
	
	printf("Enter value B = ");
	scanf("%d",&b);
	
	printf("Enter value C = ");
	scanf("%d",&c);
	
	(a<b) ? (a<c) ? printf("A is minimum") : printf("C is mininum") 
	      : (b<c) ? printf("B is minimum") : printf("C is minimum");
	
}
