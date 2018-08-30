#include <iostream>
#include "list.h"
using namespace std;

int main()
{
  list *start = NULL;
  list obj;
  obj.insert(&start , 10);
	obj.insert(&start , 20);
	obj.insert(&start , 30);
	obj.insert(&start , 40);
	obj.insert(&start , 50);
  obj.print(start);
  obj.search(start , 30);
  obj.del(&start , 30);
  obj.print(start);

  system("pause");
}