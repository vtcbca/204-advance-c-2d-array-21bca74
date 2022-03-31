/*write a mendriven program to perform following task using ufd and it's deferent
category*/
#include<stdio.h>
#include<conio.h>
int menu();
void primenumber();
void pelindrom();
void main()
{
	int a;
	clrscr();
	a=menu();
	switch(a)
	{
		case 1:primenumber();
			break;
		case 2:palindrom ();
			break;
	}
	getch();

}
int menu()
{
	int b;
	printf("\n\t Menu\n");
	printf("\n\t1.prime number\n\t2.pelindrom number\n\t3.reverse number\n\t4.even number\n\t5.exit");
	printf("\n--------------------------------------------------------");
	printf("Enter your choice");
	scanf("%d",&b);
	return b;
}
void primenumber()
{
	int c,i;
	printf("Enter any number");
	scanf("%d",&c);
	for(i=2;i<c;i++)
	{
		if(c%i==0)
		{
			c=1;
			break;
			}
		}
		if(c==1)
		{
			printf("Number is not prime number?");
		}
		else
		{
			printf("Number is prime number");
		}
}
