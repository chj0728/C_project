#include <stdio.h>

void main()
{       int p(int a,int b);
        printf("Hello World!\n");
        printf("Hello world\b\b\b\b\bFishC\n");
        printf("int = %ld\n",sizeof(int));
        printf("short int = %ld\n",sizeof(short int));
        printf("long int = %ld\n",sizeof(long int));
        printf("long long int = %ld\n",sizeof(long long int));
        printf("_Bool = %ld\n",sizeof(_Bool));
        printf("float = %ld\n",sizeof(float));
        printf("double = %ld\n",sizeof(double));
        printf("long double = %ld\n",sizeof(long double));

        int pp;
        pp=p(2,3);
        printf("%d的%d次方等于%d",2,3,pp);
}
int p(int a,int b)
{       int i,s;
        for ( i = 1,s=1; i <=b; i++)
{
        s*=a;
}

        return s;
}