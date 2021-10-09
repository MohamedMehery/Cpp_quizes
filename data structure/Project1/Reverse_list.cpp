#include "linkedlist.h"

int main6156()
{
	list* L1 = new list;
	append(L1,1);
	append(L1,2);
	append(L1,3);
	append(L1,4);
	append(L1,5);
	disp_list(L1);
	recursion_reverse(L1,L1->head);
	disp_list(L1);
	delete L1;
	cout<< "\t *******"<<endl;

	getchar();
 	return 0;
}