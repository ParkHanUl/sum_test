#include <stdio.h>
#include "sum.h"

int sum(int n) {
	int res=0;
	int i=0;
	for(i=1; i<=n; i++)
		res+=i;
	
	return res;
}
