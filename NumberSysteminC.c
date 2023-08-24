#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void binary_decimal(int a)
{
    int t = a;
    int r=0;
    int k=0,p=2 , sum=0;
    while(t>0)
    {
        r=t%10;
        sum = sum +(r* pow(p,k));
        k++;
        t=t/10;
    }
    printf("\n");
    printf("the decimal value of the given binary is : %d",sum);
}
void octal_decimal(int o)
{
    int t = o;
    int r=0;
    int k=0,p=8 , sum=0;
    while(t>0)
    {
        r=t%10;
        sum = sum +(r* pow(p,k));
        k++;
        t=t/10;
    }
    printf("\n");
    printf("the decimal value of the given octal is : %d",sum);
}
void hexadecimal_decimal(char arr[] , int n)
{
    //char arr1[n] = arr[n];
    int str1[n];
    int k=0,p=16,sum=0;
    for(int i=0;i<n;i++)
    {
        if(isdigit(arr[i]))
        {
            str1[i] = arr[i] - '0';
        }
        else if(arr[i]=='A'){
            str1[i] = 10;
        }
        else if(arr[i]=='B'){
            str1[i] = 11;
        }
        else if(arr[i]=='C'){
            str1[i] = 12;
        }
        else if(arr[i]=='D'){
            str1[i] = 13;
        }
        else if(arr[i]=='E'){
            str1[i] = 14;
        }
        else if(arr[i]=='F'){
            str1[i] = 15;
        }
        
    }
    for(int i=n-1;i>=0;i--)
    {
        sum = sum+(str1[i]*(pow(p,k)));
        k++;
    }
    printf("the decimal value of the given hexadecimal is : %d",sum);
    
}
void decimal_binary(int d)
{
   int cnt=0,i=0;
   int t=d;
   int arr[200];
   while(t>0)
   {
      arr[i] = t%2;
      i++;
      cnt++;
      t=t/2;
   }
   for(int k=cnt-1;k>=0;k--)
   {
       printf("%d",arr[k]);
   }
}
void octal_binary(int oc)
{
   int cnt=0,i=0;
   int t=oc;
   int arr[200];
   while(t>0)
   {
      arr[i] = t%8;
      i++;
      cnt++;
      t=t/8;
   }
   for(int k=cnt-1;k>=0;k--)
   {
       printf("%d",arr[k]);
   }
}
void hexadecimal_binary(char arr[],int cnt)
{
    int str[cnt];
    for(int i=0;i<cnt;i++)
    {
        if(isalpha(arr[i]))
        {
            if(arr[i]=='A'){
                str[i] = 10;
            }
            else if(arr[i]=='B'){
                str[i] = 11;
            }
            else if(arr[i] =='C'){
                str[i] = 12;
            }
            else if(arr[i] =='D'){
                str[i] = 13;
            }
            else if(arr[i] =='E'){
                str[i] = 14;
            }
            else if(arr[i] =='F'){
                str[i] = 15;
            }
        }
        else{
            str[i] = arr[i] - '0';
        }
        int k=0,p=16,sum=0;
        for(int i=cnt-1;i>=0;i--)
        {
            sum = sum+(str[i]*(pow(p,k)));
            k++;
        }
        int cnt=0,i=0;
        int t=sum;
        int arr2[200];
        while(t>0)
        {
            arr2[i] = t%2;
            i++;
            cnt++;
            t=t/2;
        }
        for(int k=cnt-1;k>=0;k--)
        {
            printf("%d",arr2[k]);
        }
        
    }
    
}
int main()
{
    printf("\t ---------|WELCOME TO CONVERSION OF NUMBERS|----------");
    printf("\n");
    int n,bi,oc,cnt,choise,choise2,dec,o,cnt2=0;
    char str[20],h[20];
    printf("Enter what you want to convert-->");
    printf("\nNumbers to decimal-->1 :");
    printf("\nNumbers to binary-->2 :");
    scanf("%d",&choise);
    switch(choise)
    {
        case 1:
        {
            printf("\nBinary to decimal--> 1");
            printf("\nOctal to Decimal:--> 2");
            printf("\nHexadecimal to Decimal:--> 3");
            printf("\n");
            scanf("%d",&n);
            switch(n){
                case 1:
                {
                    printf("\nEnter the binary number: ");
                    scanf("%d",&bi);
                    binary_decimal(bi);
                    break;
                }
                case 2:
                {
                    printf("\nEnter the octal number: ");
                    scanf("%d",&oc);
                    octal_decimal(oc);
                    break;
                }
                case 3:
                {
                    printf("\nEnter the hexadecimal values: ");
                    scanf("%s",str);
                    cnt = strlen(str);
                    hexadecimal_decimal(str,cnt);
                    break;
                }
                default:
                break;
            }
        }
        case 2:
        {
            printf("\nEnter decimal number to binary convertion --> 1");
            printf("\nEnter decimal number to octal convertion --> 2");
            printf("\nEnter decimal number to hexadecimal convertion --> 3: ");
            scanf("%d",&choise2);
            switch(choise2)
            {
                case 1:
                {
                    printf("\nEnter the decimal number:");
                    scanf("%d",&dec);
                    decimal_binary(dec);
                    break;
                }
                case 2:
                {
                    printf("\nEnter the octal number :");
                    scanf("%d",&o);
                    octal_binary(o);
                    break;
                }
                case 3:
                {
                    printf("\nEnter the hexadecimal number:");
                    scanf("%s",h);
                    cnt2 = strlen(h);
                    hexadecimal_binary(h,cnt2);
                    break;
                    
                }
                default:
                break;
            }
            default:
            break;
        }
        
    }
    
}



