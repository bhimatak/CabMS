#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct customer
{
	int _id;
	int phone;
	char name[20];
	char gender;
	char cName[20];
	char cPasswd[20];
	struct customer *next;

}CUST;

typedef struct driver
{
	int _id;
	int phone;
	char name[20];
	char gender;
	char dName[20];
	char dPasswd[20];
	struct driver *next;
}DRIVER;

typedef struct tripDetails
{

}TRIP;

typedef struct carDetails
{
	char carModel[20];
	char carRegNo[20];
	struct carDetails *next;

}CAR;

int mainMenu()
{
	int ch;
	printf("\n\tEnter,");
	printf("\n\t1. Customer");
	printf("\n\t2. Cab Driver");
	printf("\n\t3. Exit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;
}

int custMenu()
{
	int ch;
	printf("\n\t==================Customer's Menu========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. SignUp");
	printf("\n\t2. SignIn");
	printf("\n\t3. Exit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;	
}

int signUpCust()
{
	printf("\n\tEnter Customer Details,");
	printf("\n\tName: ");
	printf("\n\tID: ");
	printf("\n\tGender: ");
	printf("\n\tPhone Number: ");
	printf("\n\tUser Name: ");
	printf("\n\tPassword: ");
}

int signInCust()
{
	printf("\n\t===============Customer Login=================\n");
	printf("\n\tEnter,");
	printf("\n\tUser Name: ");
	printf("\n\tPassword: ");
	/*

	logic to find user name exists
	 */
}

int driverMenu()
{
	int ch;
	printf("\n\t==================Driver's Menu========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. SignUp");
	printf("\n\t2. SignIn");
	printf("\n\t3. Exit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;
}

int signUpDriver()
{
	printf("\n\tEnter Driver Details,");
	printf("\n\tName: ");
	printf("\n\tID: ");
	printf("\n\tGender: ");
	printf("\n\tPhone Number: ");
	printf("\n\tCAB Details");
	printf("\n\tChoose Car Model: ");
	printf("\n\t1. Alto ");
	printf("\n\t2. Mahindra");
	printf("\n\t3. Honda");
	printf("\n\tChoice: ");
	printf("\n\tCar Reg Number: ");
	printf("\n\tUser Name: ");
	printf("\n\tPassword: ");
}


int signInDriver()
{
	printf("\n\t===============Driver Login=================\n");
	printf("\n\tEnter,");
	printf("\n\tUser Name: ");
	printf("\n\tPassword: ");
	/*

	logic to find user name exists
	 */
}


int main()
{
	int ch = 0;
	CUST *hCust = NULL;
	DRIVER *hDriver = NULL;

	while(1){
		ch = mainMenu();
		switch(ch)
		{
			case 1:
				custMenu();
				break;
			case 2:
				driverMenu();
				break;
			case 3:
				printf("\n\tThank You\n\n");
				exit(EXIT_SUCCESS);
			default:
				printf("\n\tWrong Choice\n");

		}	
	}
	
	printf("\n\n");

	return 0;

}