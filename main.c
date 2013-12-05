//
//  main.c
//  printPrime筛选法
//
//  Created by Tong Tingting on 13-12-4.
//  Copyright (c) 2013年 Tong Tingting. All rights reserved.
//

#include <stdio.h>

int main()
{

    void print_prime(int m);
    int n;
    printf("输入一个数:n=");
    scanf("n=%d",&n);
    void print_prime(int n);

    
}


void print_prime(int m)
{
    int a[500],i,j,h,k=0,p[100]={0};
    for (i=0; i<500; i++) {
        a[i]=i+1;
    }
    for (i=0; i<500; i++) {
        for (j=0; j<500; j++) {
            p[k]=a[i];
            for (h=k; h<500; h++) {
                if (a[h]%p[k]==0) {
                    a[h]=0;
                }
            }
            k++;
        }
    }
    printf("输出前n个素数:");
    for (i=0; i<m; i++) {
        printf("prime=%d",a[i]);
    }
    return;
}