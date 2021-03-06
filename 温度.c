#include <stdio.h>

/* 当fahr= 0, 20, .., 300时，分别
	打印华氏温度与摄氏温度对照表*/
main()
{
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0; /* 温度表的下限 */
	upper = 300; /* 温度表上限 */
	step = 20; /* 步长 */
	
	printf("温度对照表\n");
	fahr = upper; 
	while (fahr >= lower) {
		celsius = (5.0 / 9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr - step;
	}
 } 
