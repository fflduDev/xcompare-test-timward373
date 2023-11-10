#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
     
    clock_t start, end;
    unsigned long cpu_time_used;
    float startTime = (float)clock()/CLOCKS_PER_SEC;
    float endTime,timeElapsed;
	//start = clock();
 
    unsigned long j,i = 0;
    for(i = 0; i < 100000000; i++){
        //printf("i: %010lu\n", i);
	j = i;
	}
    

     endTime = (float)clock()/CLOCKS_PER_SEC;

     timeElapsed = endTime - startTime;
    
     //end = clock();
    //cpu_time_used = ((double) (end - start));
 

    printf("--------\n");
//    printf("time took: %010lu \n",  cpu_time_used);

    printf("time elapsed: %f010\n", timeElapsed);
    printf("value of i: %010lu \n",  i);

	return 0;
}
