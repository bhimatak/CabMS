#include <common.h>
#include <cust.h>
#include <driver.h>




typedef struct tripDetails
{

}TRIP;


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
				ch = custMenu();
				switch(ch)
				{
					case 1:
						hCust = signUpCust(hCust);

						break;
					case 2:
						signInCust(hCust);
					case 3:
						//dispCust(hCust);
						printf("\n\tReturning Back to MainMenu");
						break;
					default:
						printf("\n\tSomething went wrong");
				}
				break;
			case 2:
				ch = driverMenu();
				switch(ch)
				{
					case 1:
						hDriver = signUpDriver(hDriver);

						break;
					case 2:
						signInDriver(hDriver);
					case 3:
						dispDriver(hDriver);
						printf("\n\tReturning Back to MainMenu");
						break;
					default:
						printf("\n\tSomething went wrong");
				}
				
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