/*
Nomes e TIAs

Pedro Henrique Carvalho 41910974
Victor Prado Chaves 32070772

*/

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>



int main(){

  #pragma omp parallel num_threads (10);

  if (omp_get_num_threads() == 10)
    printf("Threads Criadas com Sucesso\n");

  else
    printf("Não foi possível criar 10 threads");
  
	int number, iter =0, find;
	int* Arr;

	Arr = (int *)malloc( number * sizeof(int));

  Arr = {103497,
413466,
371254,
437828,
525406,
107147,
203880,
492272,
347172,
837368,
135862,
777945,
919663,
654352,
289603,
479641,
987215,
138945,
858971,
430735,
326346,
319950,
503434,
743830,
603461,
827970,
947066,
404985,
486245,
310630,
636877,
323808,
965333,
207818,
92929,
313441,
350216,
368369,
651890,
394536,
609653,
953537,
639942,
521656,
607258,
556350,
860083,
764905,
344170,
43874,
801429,
492367,
128137,
132603,
537543,
654830,
62225,
300412,
683785,
978521,
425366,
260767,
87984,
424342,
625585,
282069,
934871,
421171,
712885,
305112,
61966,
642600,
533417,
356495,
153730,
183285,
119770,
113007,
566921,
745665,
356277,
877265,
284857,
511169,
297121,
152313,
788602,
193354,
369840,
53739,
125011,
856726,
566845,
867616,
748987,
983522,
36394,
742285,
196815,
3041,
55150,
735075,
722029,
71454,
963493,
796199,
824473,
320720,
92251,
881021,
29632,
505946,
890083,
73432,
601614,
152181,
372764,
902883,
439045,
603460,
576033,
679701,
581851,
58006,
529650,
668697,
589578,
587142,
648896,
688358,
604785,
476817,
808712,
208302,
723357,
301925,
164941,
23204,
228687,
488067,
399151,
490821,
528217,
851449,
542943,
850066,
122334,
136357,
430085,
539121,
53423,
487027,
127102,
970158}
  
 //  printf("Array's length: ");
	// scanf("%d", &number);

	// for(; iter<number; iter++){
 //    printf("Arr[%d] = ", iter);
	// 	scanf("%d", &Arr[iter]);
	}

	printf("\nTo find: %d\n", find);
  scanf("%d", &find);

	linearSearch(Arr, number, find);

	return 0;
}

int linearSearch(int* A, int n, int tos){
  
	#pragma omp parallel for
	for(int iter =0; iter< n; iter++){
		if(A[iter] == tos)
      printf("A thread %d achou o número %d e está na posição %d", omp_get_thread_num() , tos, iter );
			return iter;
	}
}
