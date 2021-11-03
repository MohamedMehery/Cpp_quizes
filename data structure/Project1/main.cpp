#include "linkedlist.h"

using namespace std;

int main()
{
	list* L1 = new list;
	append(L1, 1);
	append(L1, 2);
	append(L1, 3);
	append(L1, 4);
	append(L1, 5);
	disp_list(L1);

	return 0;
}