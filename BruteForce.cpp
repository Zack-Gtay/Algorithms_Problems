#include<stdio.h>
#include<string.h>
#include<conio.h>

void Brute(char string[], char pattern[], int str_len, int pattrn_len){
	int i,j;
	for(i=0; i<str_len; i++){
		for(j=0; j<pattrn_len; j++){
			if(string[i+j] != pattern[j])
				break;
		}
		if(j == pattrn_len){
			printf("The pattern Found at index Number %d", i+1);
		}
	}	
}

int main(){

	char string[20], pattern[20];
	int i,j, str_len, pattrn_len;
	printf("Enter the main string: ");
	gets(string);
	printf("Enter the pattern: ");
	gets(pattern);
	str_len = strlen(string);
	pattrn_len = strlen(pattern);
	Brute(string, pattern, str_len, pattrn_len);
	
	
	return 0;
}
