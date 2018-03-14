//function definition of output_results
#include <stdio.h>
#include "score.h"

void output_results(const int m[], const int stat[]){
      int i;
    // dummy or stub function so far
     printf ("This is evaluation.\n");
      for(i=0; i<MAX && m[i] !=-1; ++i){
                    printf("%4d", m[i]);
}
     printf("\nHere are the statistics: \n");
    for(i=0; i<6; i++){
        printf("Mark %d:  %d hits\n",i,stat[i]);
  }
}
