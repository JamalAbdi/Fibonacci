#include <stdio.h>
#include <math.h>
int main(void)
{
	int fibs,num1,num2,count,count2;
	count = 0;
	count2 = 0;
	double sq,gnum; 
	num1 = 1;
	num2 = 0;
	fibs = 1;
	while (fibs <= 1000000) {

		sq = (double)fibs;
		sq = sqrt(sq);
		if ((int)sq == sqrt(fibs)) {
			count2 = count2+1;
			printf("%d*\n",fibs);
		}
		else {
			printf("%d\n",fibs);
		}
		fibs = num1 + num2;
		num2 = num1;
	    num1 = fibs;
	    count = count+1;
		gnum = (double)fibs/ (double)num2;
		if (gnum ==1.00) {
			printf("Disincluded from the sequence \n");
		}
		else {
			//printf("%.4lf\n",gnum);
		}


	}

	printf("There are %d numbers in the fibonaci sequence below a million\n",count);
	//printf("There are %d numbers in the code who's square root is a whole number\n",count2);

	return(0);


}
