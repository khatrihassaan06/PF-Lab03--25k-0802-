#include <stdio.h>
int main(){

// Q1. lab7 task
//   int arrID[12];
//   int i;
//   int checkID;
//   int found = 0;
//   for (i = 0 ; i < 12; i++){
//   	printf("enter employeee id: ");
//   	scanf("%d", &arrID[i]);
//   }
//    printf("Enter an id to find..");
//    scanf("%d", &checkID);
//    i = 0;
//	while (found ==0 && i < 12){
//		if (checkID == arrID[i]){
//			printf("found the ID at index = %d", i);
//			found = 1;
//		}else{
//			i = i + 1;
//		}
//	
//	}	
//	if (found == 0){
//		printf("Id not found..");
//    }
    
//Q2. 
	int arrMarks[10];
	int i;
	int avg;
	int tMarks = 0;
	for (i = 0; i < 10; i++){
		printf("Enter the marks of student: ");
		scanf("%d", &arrMarks[i]);
		tMarks = tMarks + arrMarks[i];
	}
	avg = tMarks/10;
	printf("%d", avg);

}
