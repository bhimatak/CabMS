#include <common.h>
#include <cust.h>

CUST * signUpCust(CUST *head)
{
	CUST *newNode = NULL;
	CUST *tmpNode = head;

	newNode = (CUST*)malloc(sizeof(CUST));
	newNode->next = NULL;
	printf("\n\tEnter Customer Details,");
	printf("\n\tName: ");
	getchar();
	scanf("%[^\n]s",newNode->name);
	printf("\n\tID: ");
	scanf("%d",&newNode->_id);
	printf("\n\tGender: ");
	getchar();
	scanf("%c",&newNode->gender);
	printf("\n\tPhone Number: ");
	scanf("%d", &newNode->phone);
	printf("\n\tUser Name: ");
	scanf("%s",newNode->cName);
	printf("\n\tPassword: ");
	scanf("%s",newNode->cPasswd);

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

	

	return head;
}

int signInCust(CUST *head)
{
	char lName[20], lPasswd[20];
	int ret = 0;
	printf("\n\t===============Customer Login=================\n");
	printf("\n\tEnter,");
	printf("\n\tUser Name: ");
	scanf("%s",lName);
	printf("\n\tPassword: ");
	scanf("%s",lPasswd);

	/*

	logic to find user name exists
	 */

	ret = findLRecCust(head, lName, lPasswd);
	if(ret == 1)
		printf("\n\tLogged In");
	else
		printf("\n\tTry Again");

	return ret;
}


int findLRecCust(CUST *head, char *lName, char *lPasswd)
{
	int flag = 0;
	while(head != NULL)
	{
		if((strcmp(head->cName, lName) == 0)&&(strcmp(head->cPasswd, lPasswd) == 0))
		{
			flag = 1;
			break;
		}
		head = head->next;
	}

	return flag;	
}


void dispCust(CUST *head)
{
	while(head != NULL)
	{
		printf("\n\t%d",head->_id);
		head = head->next;
	}
}