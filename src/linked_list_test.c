/*
 * test.c
 *
 *  Created on: 04.06.2016
 *      Author: Michael
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NL 30
#define PL 15


int main(void)
{
	setbuf(stdout, NULL);

	struct person
	{
		int index;
		char fName[NL];
		char lName[NL];
		char phone[15];
		struct person *previous;
		struct person *next;
	};
	typedef struct person PERSON;
	PERSON entry1, entry2;

	entry1.index = 1;
	strcpy(entry1.fName, "Michael");
	strcpy(entry1.lName, "Meyer");
	strcpy(entry1.phone, "078 890 13 15");
	entry1.previous = NULL;
	entry1.next = &entry2;

	entry2.index = 2;
	strcpy(entry2.fName, "Melissa");
	strcpy(entry2.lName, "von Bueren");
	strcpy(entry2.phone, "079 794 19 89");
	entry2.previous = &entry1;
	entry2.next = NULL;

	fprintf(stdout, "Index: %d\nFirst Name: %s\nLast Name: %s\nPhonenumber: %s\n", entry1.index, entry1.fName, entry1.lName, entry1.phone);
	fprintf(stdout, "The adress of entry1 struct is: %d\n", &entry1);
	fprintf(stdout, "The next struct entry is: %d\n", entry1.next);
	fprintf(stdout, "The previous struct entry is: %d\n\n", entry1.previous);

	fprintf(stdout, "The adress of entry2 struct is: %d\n", &entry2);
	fprintf(stdout, "The next struct entry is: %d\n", entry2.next);
	fprintf(stdout, "The previous struct entry is: %d\n", entry2.previous);

	return 0;
}
