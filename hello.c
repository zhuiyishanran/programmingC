#include <stdio.h>

main()
{
	long nc;
	
	nc = 0;
	while (getchar() != EOF)
		++nc;
	printf("%.0f\n", nc);
 } 
