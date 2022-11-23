#ifndef TRIP_H
#define TRIP_H

#include <common.h>

typedef struct tripDetails
{
	int _tid;
	int _cid;
	int _did;
	char src[20];
	char dst[20];
	char tdate[30];

	struct tripDetails *next;
}TRIP;


int bookTrip(TRIP *);
int checkDrv(TRIP *, DRIVER*, int);
int checkCab(TRIP *, DRIVER*, int);
void printBook(TRIP*, CUST*, DRIVER*, int);

#endif