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

    void print_prime(int);
    int n;
    printf("输入一个数:n=");
    scanf("%d",&n);
    print_prime(n);
   
    
}


void print_prime(int m)
{
    int a[500]={1},i,j=0;
    for (i=1; i<500; i+=2) {
        a[i]=i+2;           //为了简便计算，可以只录入奇数
    }
    for (i=2; i<500; i++) {
        for (j=i+1; j<=500; j++) {
            if (a[j]&&a[j]%i==0) {  //因为之前的计算可能已经将数组中的一部分数归零了，所以要去除为零的值
                    a[j]=0;
            }
        }
    }
    for (i=0; i<500; i++) {
        printf("%d",a[i]);
    }
    
    printf("输出前n个素数:");
    printf("\n");
    int k=0;
    for (i=0; i<m; i++) {
        for (;k<500;) {
            if (a[k]==0) {
                k++;continue;}
            else {
                printf("prime=%d",a[k]);
                printf("\n");
                k++;}
            
        break;
        }
    }
}