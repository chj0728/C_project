#include <stdio.h>

void main()
{       int p(int a,int b);
        printf("Hello World!\n");
        printf("Hello world\b\b\b\b\bFishC\n");
        printf("int = %d\n",sizeof(int));
        printf("short int = %d\n",sizeof(short int));
        printf("long int = %d\n",sizeof(long int));
        printf("long long int = %d\n",sizeof(long long int));
        printf("_Bool = %d\n",sizeof(_Bool));
        printf("float = %d\n",sizeof(float));
        printf("double = %d\n",sizeof(double));
        printf("long double = %d\n",sizeof(long double));

        int po;
        po=p(2,3);
        printf("%d的%d次方等于%d",2,3,po);
}
int p(int a,int b)
{       int i,s;
        for ( i = 1,s=1; i <=b; i++)
{
        s*=a;
}

        return s;
}