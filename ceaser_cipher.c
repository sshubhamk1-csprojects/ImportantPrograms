/*
*	Program for ceaser cipher
*	Made by Shubham Kumar
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void){
	char word[1001];
	printf("Enter a string: ");
	scanf("%[^\n]s",word);
	printf("Enter position: ");
	int key;
	scanf("%d",&key);
	for(int i=0,n=strlen(word);i<n;i++)
	{
		if(isalpha(word[i])){
			if(isupper(word[i])){
				word[i]=(word[i]-'A'+key)%26+'A';
			}
			else{
				word[i]=(word[i]-'a'+key)%26+'a';
			}
		}
		else if(isdigit(word[i])){
			word[i]=(word[i]-'0'+key)%10+'0';
		}
	}
	printf("Encrypted String: %s\n",word);

	return 0;
}
