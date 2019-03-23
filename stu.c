#include<stdio.h>
#include<stdlib.h>
struct student
 { 
  	int rollno,tot;
  	char name[20],grade;
  	int mark[20][5];
  	float per;
 }s[20];
 
int main()
{
 int n,ns=0,c=0,i,j,rno,check;
 while(c!=3)
 {
 printf("\nTotal Number of Student (Max 20) : %d",ns);
 printf("\n\t1.Add Student \n\t2.View Student Details\n\t3.Exit\nEnter your choice: ");
 scanf("%d",&c);
 switch(c)
 {
   case 1:
	printf("\nEnter the number of Student:");
	scanf("%d",&n);
	for(i=ns;i<n+ns;i++)
	{
		printf("\nStudent %d :",i+1);
		printf("\n\tEnter Rollno :");
		scanf("%d",&s[i].rollno);
		printf("\tEnter Name :");
		scanf("%s",s[i].name);		
		for(j=0;j<3;j++)
		{                
			printf("\tSubject %d Mark :",j+1);
			scanf("%d",&s[i].mark[i][j]);
			s[i].tot += s[i].mark[i][j]; 
		}
		s[i].per=s[i].tot/3;
		if(s[i].per<=100 && s[i].per>90)
		{
			s[i].grade='S';
		}
		else if(s[i].per<90 && s[i].per>80)
		{
			s[i].grade='A';			
		}
		else  if(s[i].per<=80 && s[i].per>70)
		{
			s[i].grade='B';
		}
		else if(s[i].per<=70 && s[i].per>60)
		{
			s[i].grade='C';
		}
		else if(s[i].per<=60 && s[i].per>=50)
		{
			s[i].grade='D';	
		}
		else
		{
			s[i].grade='F';
		}		
	}
	ns+=n;
	break;
   case 2:
	printf("\nEnter Rollno :");
	scanf("%d",&rno);
	check=0;
	for(i=0;i<ns;i++)
	{
	   if(rno==s[i].rollno)
	  {
	  	printf("\tRollno : %d\n\tName : %s\n\tTotal Marks : %d\n\tPercentage:%.2f\n\tGrade : %c\n",s[i].rollno,s[i].name,s[i].tot,s[i].per,s[i].grade);
		check=1;
	   }  	
	}
	if(check==0){printf("\nNo such a Student.....\n");}
	break;
 case 3:
	exit(0);
  default:
	printf("Enter Correct Option.....");
 	break;
 }
}
 return 0; 
}