#ifndef DRIVER_H
#define DRIVER_H

typedef struct driver
{
	int _id;
	int phone;
	char name[20];
	char gender;
	char dName[20];
	char dPasswd[20];
	struct carDetails
	{
		char carModel[20];
		char carRegNo[20];
	}CAR;
	struct driver *next;
}DRIVER;


DRIVER* signUpDriver(DRIVER*);

int signInDriver(DRIVER *);
int findLRecDrv(DRIVER *, char *, char *);
void dispDriver(DRIVER *);

#endif