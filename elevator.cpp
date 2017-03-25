#include<stdio.h>
#include<windows.h>
#include<math.h>
typedef struct
{
    char* ten;
    int tht;
}thangmay;
void dichuyen(thangmay &t,int a,int b)
{
    if (a>b)
        {
            while(a!=b)
            {
            a--;
            printf("%s dang di xuong tang: %d\n",t.ten,a);
            Sleep(2000);
            }
        }
    else
        {
            while(a!=b)
            {
            a++;
            printf("%s dang di len tang: %d\n",t.ten,a);
            Sleep(2000);
            }
        }
    printf("Mo cua %s!\n",t.ten);
    t.tht=b;
}
int main()
{
    int n;
    printf("Nhap so tang: ");
    scanf("%d",&n);
    thangmay t1,t2;
    t1.ten="Thang may A";
    t1.tht=1;
    t2.ten="Thang may B";
    t2.tht=1;
    int i,k,dich;
    while(1)
    {
    	printf("\n");
    	printf("\n");
    	printf("\n");
        do
        {
            printf("Tang hien tai:");
            scanf("%d",&i);
        }while ((i<=0)||(i>n));
        if (i==1) k=1;
        if (i==n) k=0;
        if ((i>1)&&(i<n))
        do
        {
		printf("Nhan 1 de chon di len. Nhan 0 chon di xuong!   ");
        scanf("%d",&k);
    	}while((k!=0)&&(k!=1));
            if (abs(t1.tht - i)<=abs(t2.tht -i))
            {
                dichuyen(t1,t1.tht,i);
                printf("Ban muon den tang nao?\n");
                if (k==1)
                    {
                        do
                        {
                        printf("Nhap:");
                        scanf("%d",&dich);
                        }while((dich<=i)||(dich>n));
                        dichuyen(t1,t1.tht,dich);
                    }
                else
                    {
                        do
                        {
                        printf("Nhap:");
                        scanf("%d",&dich);
                        }while((dich>=i)||(dich<1));
                        dichuyen(t1,t1.tht,dich);
                    }
            }
            else
            {
                dichuyen(t2,t2.tht,i);
                printf("Ban muon den tang nao?\n");
                if (k==1)
                    {
                        do
                        {
                        printf("Nhap:");
                        scanf("%d",&dich);
                        }while((dich<=i)||(dich>n));
                        dichuyen(t2,t2.tht,dich);
                    }
                else
                    {
                        do
                        {
                        printf("Nhap:");
                        scanf("%d",&dich);
                        }while((dich>=i)||(dich<=0));
                        dichuyen(t2,t2.tht,dich);
                    }
            }
    }
}
