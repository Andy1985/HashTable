#include <stdlib.h>
#include <stdio.h>

#include "hashtable.h"

#define N 10

int main(int argc,char* argv[])
{
	hashdata** ht;

	InitHashTable(&ht,N);

	const char* words[15] = {
		"ske","abs","mps","test","tt","total","smtp","mbsc",
		"adfads","asdfa","dfads","13413la","tt","linux","windows"
	};

	int i;
	for (i = 0; i < 15; i++)
	{
		AddData(ht,N,words[i]);
	}
	PrintHashTable(ht,N);

	for (i = 0; i < 15; i++)
	{
		DeleteData(ht,N,words[i]);
	}
	PrintHashTable(ht,N);

	DestroyHashTable(&ht,N);

	return 0;
}
