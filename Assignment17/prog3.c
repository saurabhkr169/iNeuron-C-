// 3. Write a program to count vowels in a given string
#include<stdio.h>
int main()
{
    char str[20]="aeiouprstp";
    int i,count=0;
    for( i=0;str[i];i++)
    {
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]== 'o'||str[i]== 'u')
         {
              count++;
         }
    }
    printf("The vowels in string are %d\n",count);
}
 