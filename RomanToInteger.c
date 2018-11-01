/*
* Program to convert Roman Numberals to Integers
* 1<num<=500
* Made by Shubham Kumar
*/
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

void solution(char *S){
    int temp[10]={0};
    for(int i=0,n=strlen(S);i<n;i++){
        switch(S[i]){
            case 'I':
                temp[i]=1;break;
            case 'V':
                temp[i]=5;break;
            case 'X':
                temp[i]=10;break;
            case 'L':
                temp[i]=50;break;
            case 'C':
                temp[i]=100;break;
            case 'D':
                temp[i]=500;break;
            default :break;
        }
    }
    int result=0;
    int buffer=temp[0];
    for(int i=1;i<10;i++){
        if(temp[i]==0)break;
        if(temp[i]==temp[i-1]){
            buffer+=temp[i];
        }
        else{
            if(temp[i]>temp[i-1]){
                result = result-buffer;
            }
            else{
                result = result+buffer;
            }
            buffer=temp[i];
        }
    }
    result+=buffer;
    printf("%d",result);
    return;

}

int main(void){
    char *S;
    S=(char *)malloc(120000*sizeof(char));
    scanf("%s",S);
    solution(S);
    return 0;
}
