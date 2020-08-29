#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    long long int i,s=0,min,max=0,a[5],r;
    for(i=0;i<5;i++){
       
scanf("%lld",&a[i]);
        s=s+a[i];
    }
    min=s;
    for(i=0;i<5;i++){
        r=s-a[i];
        if(r>max){
            max=r;
        }
        if(r<min){
            min=r;
        }
    }
    printf("%lld %lld",min,max);
}
