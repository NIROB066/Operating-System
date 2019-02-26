#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/intprint.h"
#include "include/float.h"


int nirobmain()
{
       
       
       clearscreen();
       int pint,i,grabglobal=-1;
       pint=0;
       print("Welcome to Nirob's operating system\nPlease enter a command");
       string ch;
       ch[1000];
       print("\nPlease enter a key to start...");
       ch = readStr();
       clearscreen();
       print("press 'cmd' to check where are you.\n");
       print("press 'cal len' to calculate string length.\n");
       print("press 'clr' to clear whole screen.\n");
       print("press 'line' to clear specific lines.\n");
       print("press 'print' to print anything.\n");
       print("press 'cnvrt' to convert to uppercase letters.\n");
       print("press 'substr' to check for substring.\n");
	print("press 'plus' to add two numbers.\n");
	print("press 'minus' to minus two numbers..\n");
	print("press 'multiply' to multiply two numbers.\n");
	print("press 'division' to divide two numbers.\n");
	print("press 'compare' to compare two strings.\n");
        print("press 'grub' to search substring in used .\n");
	print("press 'pow' to make power of a number.\n");
	print("press 'factorial' to find factorial of a number.\n");
	print("press 'mod' to find modulas of two numbers.\n");
       print("press 'reverse' to reverse a string.\n");
       print("press 'palindrome' to check a string is palindrome or not?.\n");
       print("press 'palindrome make' to create a palindrom string.\n");
       print("press 'oddeven' to check a number odd or even.\n");
        print("press 'leap year' to check leap year.\n");
       string inp;
       inp[1000];
       i=0;
       for(i;i<1000;i++)
          {
             inp[i]='\0';
          }

         char grab[1000];
          int grabi=0,grabl=0;
               
                for(grabi;grabi<1000;grabi++)
                {
                   grab[grabi]='\0';
                }
                for(i=0;i<1000;i++)
		{
			ch[i]='\0';
		}
       while (1)
       {
                print("\nNirob> ");
                i=0;
                while(ch[i]!='\0')
		{
			ch[i]='\0';
		}
		i=0;
                ch = readStr();
                grabl=(int)strlength(ch);
		
                for(grabi=0;grabi<grabl;grabi++)
                {
                   grab[++grabglobal]=ch[grabi];
    		   
                }
               /* print("\n");
 		print(grab);
                print("\n");*/

                if(strEql(ch,"cal len"))
                {      i=0;
                       print("\nEnter the string:"); 
                       inp = readStr();
                       pint =(int)strlength(inp);
                       print("\nLength is :");
                       printint(pint);
                       while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                         
                }
                else if(strEql(ch,"cmd"))
                {
                       print("\nIn cmd...\n");
                         
                }
                else if(strEql(ch,"clr"))
                {
                      clearscreen();
                       int grabi=0;
                       while(grab[grabi]!='\0')
                            {
                                grab[grabi]='\0';
                                grabi++;
                            }
                       grabglobal=-1;
                       for(grabi=0;grabi<3;grabi++)
		        {
		           grab[++grabglobal]=ch[grabi];
	    		   
		        }
                       print("press 'cmd' to check where are you.\n");
		       print("press 'cal len' to calculate string length.\n");
		       print("press 'clr' to clear whole screen.\n");
		       print("press 'line' to clear specific lines.\n");
		       print("press 'print' to print anything.\n");
		       print("press 'cnvrt' to convert to uppercase letters.\n");
		       print("press 'substr' to check for substring.\n");
			print("press 'plus' to add two numbers.\n");
			print("press 'minus' to minus two numbers..\n");
			print("press 'multiply' to multiply two numbers.\n");
			print("press 'division' to divide two numbers.\n");
			print("press 'compare' to compare two strings.\n");
			print("press 'grub' to search substring in used .\n");
			print("press 'pow' to make power of a number.\n");
			print("press 'factorial' to find factorial of a number.\n");
			print("press 'mod' to find modulas of two numbers.\n");

		       print("press 'reverse' to reverse a string.\n");
		       print("press 'palindrome' to check a string is palindrome or not?.\n");
		       print("press 'palindrome make' to create a palindrom string.\n");

		       print("press 'oddeven' to check a number odd or even.\n");
			print("press 'leap year' to check leap year.\n");
                }
                else if(strEql(ch,"line"))
                {
                      int from,to,froml,tol;
                      i=0;
                      print("\nEnter which line from clear...:\n"); 
                      inp=readStr();
                      froml=(int)strlength(inp);
                      from=arraytoint(inp,froml);
                      while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                       i=0;
                       print("\nEnter which line to clear...:\n"); 
                       inp=readStr();
                       tol=(int)strlength(inp);
                       to=arraytoint(inp,tol);
                       clearLine(from-1,to);
                       updateCursor();
                       while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
			i=0;
                      
                         
                }
                else if(strEql(ch,"print"))
                {      print("\nEnter line to print..:\n");
                      while(inp[i])
                       {
                           inp[i]='\0';
                           i++;
                       }
                       i=0;
                       inp=readStr();
                       print("\n");
                       print(inp);
                       
                }
                 else if(strEql(ch,"cnvrt"))
		        {     
                              int i; 
                              string ss;
                              ss[100];
                              print("\nEnter line to convert..:\n");
				i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
                               for(i=0;i<100;i++)
				{
                                  ss[i]='\0';
				}
		               inp=readStr();
		               print("\n");
		               ss=caseconvert(inp);
		               print(ss);
		               
		        }
                      else if(strEql(ch,"substr"))
                         {    
                              char ss[100],s[100];
                              int i,cnt;
                              for(i=0;i<100;i++)
                                 {
                                     ss[i]='\0';
                                     s[i]='\0';
                                 }
                              i=0;
                              print("\nEnter string:\n");
		              while(inp[i]!='\0')
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               i=0;
		               inp=readStr();
                               while(inp[i]!='\0')
                                 {
                                     ss[i]=inp[i];
				     i++;
                                 }
                               ss[i]='\0';
                               i=0;
		               print("\nEnter string:\n");
		               while(inp[i]!='\0')
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               i=0;
		               inp=readStr();
				while(inp[i]!='\0')
                                 {
                                     s[i]=inp[i];
				     i++;
                                 }
                               s[i]='\0';
		               cnt=substr(ss,s);
		               print("\nNo of sub strings :");
		               printint(cnt);
			       print("\n");


                       }
		 else if(strEql(ch,"grub"))
                         {    
                              char s[100];
                              int i,cnt;
                              for(i=0;i<100;i++)
                                 {
                                     
                                     s[i]='\0';
                                 }
                              i=0;
                              print("\nEnter string:\n");
		              while(inp[i]!='\0')
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               i=0;
		               inp=readStr();
                               while(inp[i]!='\0')
                                 {
                                     s[i]=inp[i];
				     i++;
                                 }
                               s[i]='\0';
                               i=0;
		              
		               cnt=substr(grab,s);
		               print("\nNo of sub strings :");
		               printint(cnt);
			       print("\n");


                       }
                else if(strEql(ch,"plus"))
                     {
                              char v1[100],v2[100];
                              int l1,l2,res=0;
                              print("\nEnter value1:\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
                                res+=arraytoint(v1,l1);
                                res+=arraytoint(v2,l2);
                                print("\n");
                                printint(res);
                                print("\n");
                               
                               
                               
                     }
                else if(strEql(ch,"minus"))
                     {
                              char v1[100],v2[100];
                              int l1,l2,res=0;
                              print("\nEnter value1:\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
                                res+=arraytoint(v1,l1);
                                res-=arraytoint(v2,l2);
                                print("\n");
                                printint(res);
                                print("\n");
                               
                               
                               
                     }
                else if(strEql(ch,"multiply"))
                     {
                              char v1[100],v2[100];
                              int l1,l2,res=0;
                              print("\nEnter value1:\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
                                res+=arraytoint(v1,l1);
                                res*=arraytoint(v2,l2);
                                print("\n");
                                printint(res);
                                print("\n");
                               
                               
                               
                     }
                else if(strEql(ch,"division"))
                     {
                              char v1[100],v2[100];
                              int l1,l2,res=0;
                              print("\nEnter value1:\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
                                res+=arraytoint(v1,l1);
                                if((arraytoint(v2,l2))>0)
                                { 
                                  res/=arraytoint(v2,l2); 
                                  print("\n");
                                  printint(res);
                                }
                                else
                                {print("\nerror!!!\n");}
                               
                               
                               
                     }
                else if(strEql(ch,"compare"))
                     {
                              char v1[100],v2[100];
                              int res=0;
                              print("\nEnter String1 :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string2 :\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                res=strEql(v1,v2);
                                if(res==1)
                                  {
                                      print("\nSame string!!!\n");
                                  }
                                 else
                                    {
                                        print("\nDifferent string...\n");
                                    }
                     }
                else if(strEql(ch,"pow"))
                     {
                      	      char v1[100],v2[100];
                              int res1=0,res2=0,result,l1,l2;
                              print("\nEnter num1 :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter num2:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
				res1=arraytoint(v1,l1);
				res2=arraytoint(v2,l2);
                                result=power(res1,res2);
                                print("\n");
                                printint(result);
                     }

                else if(strEql(ch,"factorial"))
                     {
                      	      char v1[100];
                              int res1=0,result,l1;
                              print("\nEnter num1 :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                l1=(int)strlength(v1);
				res1=arraytoint(v1,l1);
                                result=factorial(res1);
                                print("\n");
                                printint(result);
                     }
                  
                else if(strEql(ch,"oddeven"))
                     {
                      	      char v1[100];
                              int res1=0,result,l1;
                              print("\nEnter num1 :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                l1=(int)strlength(v1);
				res1=arraytoint(v1,l1);
                                result=oddeven(res1);
                                print("\n");
                                if(result==1)
                                  {
                                     printint(res1);
                                     print(" is even\n");
                                  }
                                else
                                  {
                                     printint(res1);
                                     print(" is odd\n");
                                  }
                     }

                  else if(strEql(ch,"reverse"))
                     {
                              int i,l1;
                      	      char v1[100];
                              string res;
                              res[100];
                              for(i=0;i<100;i++)
                                 {
                                    res[i]='\0';
                                 }
                              print("\nEnter String :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
                               inp[i]='\0';
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                print("\n");
                                l1=(int)strlength(v1);
                                res=r(v1,l1);
				print(res);
                                 
                                
				
                     }

		else if(strEql(ch,"palindrome"))
                     {
                              int i,l1,result;
                      	      char v1[100],v2[100];
                              string res;
                              res[100];
                              for(i=0;i<100;i++)
                                 {
                                    res[i]='\0';
                                    v1[i]='\0';
                                    v2[i]='\0';
                                 }
                              print("\nEnter String :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
                               inp[i]='\0';
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                print("\n");
                                l1=(int)strlength(v1);
                                i=0;
                                while(v1[i]!='\0')
                                     {
                                        v2[i]=v1[i];
                                        i++;
                                     }
                                res=r(v1,l1);
                                result=strEql(v2,res);
                                if(result==1)
                                  {
                                     print(v2);
                                     print(" is palindrome\n");
                                  }
                                 else
                                  {
                                     print(v2);
                                     print(" is not palindrome\n");
                                  }
				
                                 
                                
				
                     }

                else if(strEql(ch,"concate"))
                     {
                              char v1[100],v2[100];
                              int res1=0,res2=0,result,i;
                              print("\nEnter string1 :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string2:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                print("\n");
                                print(v1);
                                print(v2);
                     }

                 else if(strEql(ch,"palindrome make"))
                     {
                               int i,l1,result;
                      	      char v1[100],v2[100];
                              string res;
                              res[100];
                              for(i=0;i<100;i++)
                                 {
                                    res[i]='\0';
                                    v1[i]='\0';
                                    v2[i]='\0';
                                 }
                              print("\nEnter String :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
                               inp[i]='\0';
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                print("\n");
                                l1=(int)strlength(v1);
                                i=0;
                                while(v1[i]!='\0')
                                     {
                                        v2[i]=v1[i];
                                        i++;
                                     }
                                res=r(v1,l1);
                                i=0;
                                while(v2[i]!='\0')
                                     {
                                        i++;
                                     }
                                v2[i-1]='\0';
                                print(v2);
                                print(res);
                                
                     }
                else if(strEql(ch,"mod"))
                     {
                              char v1[100],v2[100];
                              int l1,l2,res=0;
                              print("\nEnter value1:\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                                i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';


                               print("\nEnter string:\n");
                               i=0;
		               while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                               while(inp[i]!='\0')
		                {
		                   v2[i]=inp[i];
		                   i++;
		                }
                                v2[i]='\0';
                                l1=(int)strlength(v1);
                                l2=(int)strlength(v2);
                                res+=arraytoint(v1,l1);
                                if((arraytoint(v2,l2))>0)
                                { 
                                  res%=arraytoint(v2,l2); 
                                  print("\n");
                                  printint(res);
                                }
                                else
                                {print("\nerror!!!\n");}
                               
                               
                               
                     }
                else if(strEql(ch,"leap year"))
                     {
                      	      char v1[100];
                              int res1,l1;
                              print("\nEnter year :\n");
                              i=0;
		              while(inp[i])
		               {
		                   inp[i]='\0';
		                   i++;
		               }
		               inp=readStr();
                               i=0;
                                while(inp[i]!='\0')
		                {
		                   v1[i]=inp[i];
		                   i++;
		                }
                                v1[i]='\0';
                                l1=(int)strlength(v1);
				res1=arraytoint(v1,l1);
                                if(res1%400==0)
                                   {
				      print("\n");
                                      print(v1);
				      print(" is leap year\n");
                                   }
 				else if(res1%100==0)
                                   {
				      print("\n");
                                      print(v1);
				      print(" is not leap year\n");
                                   }
				else if(res1%4==0)
                                   {
				      print("\n");
                                      print(v1);
				      print(" is leap year\n");
                                   }
				else
                                   {
				      print("\n");
                                      print(v1);
				      print(" is not leap year\n");
                                   }
                     }
            
                else
                {
                        print("\nBad command!\n");
                }

                print("\n");
                
       }
return 0;
}
