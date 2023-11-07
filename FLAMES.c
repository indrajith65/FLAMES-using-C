#include<stdio.h>
#include<string.h>
int main()
{
    int l1,l2,k,i,j,c=0,a,p;
    char s[6];
    s[0]='F';s[1]='L';s[2]='A';s[3]='M';s[4]='E';s[5]='S';
    char s1[30],s2[30];
    printf("Enter the first name(Case-sensitive)\n");  scanf("%s",s1);
    printf("Enter the second name(Case-sensitive)\n"); scanf("%s",s2);
    l1=strlen(s1);  l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(s1[i]==s2[j])
            {
                s1[i]='\0';
                s2[j]='\0';
                break;
            }
        }
    }
    for(i=0;i<l1;i++)
    {
        if(s1[i]!='\0')
        {
            c++;
        }
    }
    for(j=0;j<l2;j++)
    {
        if(s2[j]!='\0')
        {
            c++;
        }
    }
    k=6;
    p=0;
    lp:a=(c%k)+p;
    if(a>k)
    {
        a=a%k;
    }
    if(a>0)
    {
    p=a-1;
    while(a<k)
    {
    s[a-1]=s[a];
    a++;
    }
    }
    k--;
    if(k>1)
    {
    goto lp;
    }
    if(s[0]=='F')
    {
        printf("FRIENDS\n\n");
    }
    if(s[0]=='L')
    {
        printf("LOVERS\n\n");
    }
    if(s[0]=='A')
    {
        printf("AFFECTIONATE\n\n");
    }
    if(s[0]=='M')
    {
        printf("MARRIAGE\n\n");
    }
    if(s[0]=='E')
    {
        printf("ENEMIES\n\n");
    }
    if(s[0]=='S')
    {
        printf("SIBLINGS\n\n");
    }
    return 0;
}
