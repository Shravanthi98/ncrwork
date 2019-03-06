#include<stdio.h>
#include<Windows.h>
#include "prog21dll.h"

int main()
{
	int res1, res2, res3, res4;

	res1 = add1(6, 3);
	res2 = sub1(6, 3);
	res3 = mul1(6, 3);
	res4 = div1(6, 3);
	return 0;
}
