//
// Created by yuxiang on 2017/5/27.
//
#include <stdio.h>

#define IN  0
#define OUT 1

int main()
{
    int c,nl,nw,nc,state;

    state = OUT;
    while((c=getchar()) != EOF)
    {
        ++nc;
        if(c == '\n'){
            ++nl;
        }
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if(state == OUT){
            state == IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",nl,nw,nc);
}

