#ifndef STRING_H
#define STRING_H

#include "types.h"

uint32 strlength(string ch)
{


        uint32 i = 0;
        if(ch[0]=='\0')
          {
             return 0;
          }
        else
           {
              while(ch[i])
                {
                  i++;
                }
              return i;
           }
        
}

/* Added in episode 3*/ /*This function compares two strings and returns true (1) if they are equal or false (0) if they are not equal */

uint32 strEql(string ch1,string ch2)                     
{
        uint32 result = 1;
        uint32 size = strlength(ch1);
        uint32 size1 = strlength(ch2);
        if(size!=size1)
          {
            return 0;
          }
        if(1)
        {
        uint32 i = 0;
        for(i;i<size;i++)
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

string caseconvert(string s)
{


int i=0,l,asc;
l=strlength(s);
for(i=0;i<l;i++)
{

if(s[i]>='a' && s[i]<='z')
s[i]=s[i]-32;

  
}

return s;



} 




int substr(string ss,string s)
{
int flg=1,cnt=0,ll,l;
int i=0,j=0,k;
ll=(int)strlength(ss);
l=(int)strlength(s);
if(l>ll)
  return 0;


	for(i=0;i+l<=ll;i++)
	{ 	 k=i;
		flg=1;
		for(j=0;j<l;j++)
		{
			if(ss[k+j]!=s[j])
			   {flg=0;}
		}

	if(flg==1)
	 {  cnt++;}


	}

return cnt;
}


string r(string s1,int len)
{
   int i=0,j=0;
   string v1;
   for(i=0;i<len;i++)
      {
         v1[i]=s1[i];
      }
    v1[len]='\0';
    i=0;
   while(s1[i]!='\0')
        {
           s1[i]='\0';
           i++;
        }
   s1[i]='\0';
   for(i=len-1;i>=0;i--)
      {
         s1[j]=v1[i];
         j=j+1;
      }
   return s1;
}










#endif
