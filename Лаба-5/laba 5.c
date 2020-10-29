//laba 5 number 2 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
	int N;
	printf_s("Enter count of lines/..");
	scanf_s("%d", &N);
	int i, j, mas[100][100], max=INT_MIN,por,cor;
	srand(time(NULL));
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			mas[i][j] = rand() % 100;
	printf_s("Your current matrix");
	for (i = 0; i < N; i++) {
		printf_s("\n");
		for (j = 0; j < N; j++) {
			printf_s("%d ", mas[i][j]);
		}
	}
	printf_s("\nSecond Matrix:");
	for (i = 0; i < N/2; i++) {
		printf_s("\n");
		for (j = 1 + i; j < N - i - 1; j++) {
			printf_s("%d ", mas[i][j]);
		}
	}
	for (i = 0; i < N / 2; i++) {
		for (j = 1+i; j < N - i - 1; j++) 
			if (mas[i][j] > max){
				max = mas[i][j];
				cor = i;
		        por= j;
			}
		
	}                       
			printf("\nmaximum element = %d \nhis index is [%d][%d] ", max,cor,por);
	return(0);
}
