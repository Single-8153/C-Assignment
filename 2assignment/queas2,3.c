#include<stdio.h>
int main()
{
		char M,S,C,s,Dsgn;
		int emp,dep;
		printf("Enter the employ id:");
		scanf("%d",&emp);
		printf("Enter the deparnment number:\n");
		scanf("%d",&dep);
		printf("Enter the Designation:\n");
		scanf("%*c%c",&Dsgn);
		switch(dep){
				case 10: 
						printf("Marketing");
						break;
				case 20:
						printf("Management");
						break;
				case 30:
						printf("Sales");
						break;
				case 40:
						printf("Designing");
						break;
				default: printf("Invalid");
		}

		switch(Dsgn)
		{
				case 'M':
						printf("Manager");
						break;
				case 'S':
						printf("Supervisor");
						break;
				case 's':
						printf("Security officer");
						break;
				case 'C':
						printf("Clerk");
						break;
				default:
						printf("invalid degn"); 
		}
		printf("Employee with employee id %d is working in %d,deparnment as %c\n",emp,dep,Dsgn);
		return 0;
}
