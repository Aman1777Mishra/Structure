#include <stdio.h>
#define maxsize 20

struct employee
{
	char name[maxsize];
	int number;
	int age;
	int salary;
}s[maxsize];
int main()
{
	int i;
	printf("            Employees Details");
	for(i=0;i<20;++i)
	{
	printf("\n Enter name:");
	scanf("%s",s[i].name);
	printf("Enter age:");
	scanf("%d",&s[i].age);
	printf("Enter phone number:");
	scanf("%d",&s[i].number);
	printf("Enter salary:");
	scanf("%d",&s[i].salary); 
    }
    	printf("NAME                   AGE        PHONE NUMBER               SALARY");
    for(i=0;i<20;i++)
    {
    
    	printf("\n%s                  %d        %d               %d",s[i].name,s[i].age,s[i].number,s[i].salary);
	}
	return 0;
    
}
