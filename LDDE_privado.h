#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "LDDE_publico.h"

struct Node  {
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* head;