/*
*	This snippet is to take the time taken to execute the code
*	Made by Shubham Kumar
*/

#include <stdio.h>
#include <time.h>

int main(void){
	clock_t start,end;
	start=clock();
	double count=0;
	for(int i=0;i<100000;i++){
		for(int j=0;j<10000;j++){
			count--;
		}
		count--;
	}
	printf("count: %lf\n",count);
	end=clock();
	double total=((double)(end-start)/ CLOCKS_PER_SEC);
	printf("total time taken: %lf\n",total);
	return 0;
}
