#include<stdio.h>
#include<conio.h>
main()
{
char choice;
	int n,k,result;
  clrscr();
  
	printf("\n Enter the value of n");
	scanf("%d",&n);
	printf("\n Enter the value of k");
	scanf("%d",&k);
	printf("\n The power value is");
  {
  
	result=pow(n,k);
	printf("%d",result);
	return 0;
}
}
