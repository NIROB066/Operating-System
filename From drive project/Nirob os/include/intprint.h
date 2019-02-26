#ifndef INTPRINT_H
#define INTPRINT_H
#include "types.h"
#include "system.h"
#include "string.h"
#include "screen.h"


int digitcount(int num)
{
    int count=0;
    if(num==0)
    {
        return 1;
    }
    else
    {
        while(num>0)
        {
            count++;
            num=num/10;
        }
        return count;
    }
}

void inttoarray(int num, string number)
{
    int digit_cou=digitcount(num);
    int index=digit_cou;
    int x;
    if(num==0 && digit_cou==1)
    {
       number[index-1]='0';
       number[index]='\0';
    }
    if(num>0){
        while(num>0)
        {
            x=num%10;
            number[digit_cou-1]= x + '0';
            //number[index]='k';
            //number[index]=x;
            digit_cou--;
            num=num/10;
        }
       number[index]='\0';
       
        
}

}


void printint(int numbe)
{
     string num_str;
     int i;
     i=0;
     num_str[100];
     for(i=0;i<100;i++)
       {
         num_str[i]='\0';
       }
     inttoarray(numbe,num_str);
     print(num_str);

}


uint32 streql(string ch1,string ch2)                     
{
        uint32 result = 1;
        uint32 size = strlength(ch1);
        if(1)
        {
        uint32 i = 0;
        for(i;i<size-1;i++)
        {
                if(ch1[i] != ch2[i]) 
                  {
                      result = 0;
                      break;
                  }
        }
        }
        return result;
}

uint32 strlen(string ch)
{


        uint32 i = 1;
        if(ch=="\0")
          {
             return 0;
          }
        while(ch[i++]);
        return --i;
}

int arraytoint(string s, int len)
{
   int res=0;
   int i=0;
   res =s[i]-'0';
   while(--len)
   {
   
    res=res*10+(s[++i]-'0');
   }

return res; 

}



int power(int res1,int res2)
{
   int result=0,i;
   result=res1;
   for(i=1;i<res2;i++)
     {
       result=result*res1;
     }
     return result;
}

int factorial(int res1)
{
   int result=1,i;
   for(i=res1;i>0;i--)
     {
       result=result*i;
     }
     return result;
}

int oddeven(int res1)
{
   if(res1%2==0)
     {
        return 1;
     }
   else
     {
        return 0;
     }
}






#endif
