#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int dem[100005];
int main(){
	int s1[1000];
	gets(s1);
	char *token = strtok(s1, " ");
	int n = 0;
	int a[50][50];
	while(token != NULL){
		strcpy(a[n], token);
		++n;
		token = strtok(NULL, " ");
	}
	for(int i = 0; i < n; i++){
		int check = 1;
		for(int j = 0; j < i; j++){
			if(strcmp(a[i], a[j]) == 1) check = 0;
		}
		if(check){
			printf("%s ", a[i]);
		}
	}
}
