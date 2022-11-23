#include <common.h>
#include <trip.h>


TRIP * bookTrip(TRIP * head, int *bid)
{
	TRIP *newNode = NULL;
	TRIP *tmpNode = head;

	newNode = (TRIP*)malloc(sizeof(TRIP));
	newNode->next = NULL;
	printf("\n\t============Booking============\n");
	printf("\n\tEnter,");
	printf("\n\tTrip ID: ");
	scanf("%d",&newNode->_tid);
	printf("\n\tCust ID: ");
	scanf("%d",&newNode->_cid);
	printf("\n\tDriver ID: ");
	scanf("%d",&newNode->_did);
	printf("\n\tSource: ");
	getchar();
	scanf("%[^\n]s", newNode->src);
	printf("\n\tDestination: ");
	getchar();
	scanf("%[^\n]s", newNode->dst);
	printf("\n\tTravel Date: ");
	getchar();
	scanf("%[^\n]s", newNode->tdate);
	newNode->status = 0;

	if(head == NULL)
	{
		head = newNode;
		tmpNode = newNode;
	}
	else
	{
		while(tmpNode->next != NULL){
			tmpNode = tmpNode->next;
		}
		tmpNode->next = newNode;
		tmpNode = tmpNode->next;
	}

	*bid =  newNode->_tid;
	return head;
}

void printBook(TRIP* thead, CUST* chead, DRIVER* dhead, int _tid)
{
	char cName[20], dName[20], cabType[20], cabRegNo[20];
	char tStatus[20];
	int flag = 0;
	while(thead!=NULL)
	{
		if(thead->_tid == _tid)
		{
			flag = 1;
			break;
		}
		thead = thead->next;
	}

	
	printf("\n\t===========Booking Details===============\n");
	if(flag == 1){
		while(chead != NULL)
		{
			if(chead->_id == thead->_cid){
				strcpy(cName, chead->name);
				break;
			}
			chead = chead->next;
		}

		while(dhead != NULL)
		{
			if(dhead->_id == thead->_did){
				strcpy(dName, dhead->name);
				strcpy(cabType, dhead->CAR.carModel);
				strcpy(cabRegNo, dhead->CAR.carRegNo);
				break;
			}
			dhead = dhead->next;
		}
		if(thead->status == 0)
			strcpy(tStatus, "Ongoing");
		else
			strcpy(tStatus,"Completed");
		printf("\n\tBooking ID: %d", thead->_tid);
		printf("\n\tCustomer Name: %s", cName);
		printf("\n\tSource: %s", thead->src);
		printf("\n\tDestination: %s", thead->dst);
		printf("\n\tTravel Date: %s", thead->tdate);
		printf("\n\tCab Driver Name: %s", dName);
		printf("\n\tCar Model: %s", cabType);
		printf("\n\tCab Reg No: %s", cabRegNo);	
		printf("\n\tStatus: %s", tStatus);
	}
	else
		printf("\n\tNo Booking on %d ID", _tid);
}


//int checkDrv(TRIP *, DRIVER*, int);
