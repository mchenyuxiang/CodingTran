//
// Created by mchenyuxiang on 2017/4/28.
//
#include <stdio.h>

#define N 10

int main()
{
    int i,j,p,q,id[N];
    for(i=0;i<N;i++){
        id[i] = i;
    }
    while(scanf("%d %d",&p,&q) == 2){
        for(i=p; i != id[i]; i = id[i]);
        for(j=p; j != id[j]; j = id[j]);
        if(i == j){
            continue;
        }
        printf("%d %d\n",p,q);
    }
}

