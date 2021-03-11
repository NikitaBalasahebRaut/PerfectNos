/*
 Display perfect numbers from N numbers.
 */


#include<stdio.h>
#include<stdlib.h>

void ChkPerfectNo(int iSize,int arr[])
{
  int iCnt = 0;
  int iNo = 0;
  int i = 0;
  int iSum = 0;
  
    if(arr == NULL)
    {
        return;
    }
    if(iSize <= 0)
    {
        return;
    }
    
  printf("Perfect numbers are : \n ");
	
  for(iCnt = 0; iCnt < iSize; iCnt++)
  {
    iNo = arr[iCnt];
	iSum = 0;
	
	for(i = 1; i < iNo; i++)
	{
	    if((iNo % i) == 0) 
		{
		   iSum = iSum + i;
		}
	}
	
	if(iSum == iNo)
	{
	  printf("%d\n",iNo);
	}
  
  }
}

 int main()
 {
   int iNo = 0;
   int *ptr = NULL;
   int iCnt = 0;
   
   printf("Enter The N Numbers \n");
   scanf("%d",&iNo);
   
   if(iNo == 0)
   {
	   printf("Error : Invalid Input \n");
	   return -1;
   }
   ptr = (int*) malloc (sizeof(int) * iNo);
   
   if(ptr == NULL)
   {
	   printf("Error : unable to allocate memory \n");
	   return -1;
   }
   printf("Enter the values\n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      scanf("%d",&ptr[iCnt]);
   }
   
   printf("values are \n");
   for(iCnt = 0; iCnt < iNo; iCnt++)
   {
      printf("%d\n",ptr[iCnt]);
   }
   
   ChkPerfectNo(iNo,ptr);
   
      free(ptr);
 return 0;
 }
 
 /*
 
 output
 
 D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\PerfectNos>myexe
Enter The N Numbers
1
Enter the values
6
values are
6
Perfect numbers are :
 6

D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\PerfectNos>myexe
Enter The N Numbers
3
Enter the values
6
8
9
values are
6
8
9
Perfect numbers are :
 6

D:\ProgramTopicWise\LB\3ProblemsOnNNumbers\PerfectNos>myexe
Enter The N Numbers
7
Enter the values
42
44
17
19
6
75
69
values are
42
44
17
19
6
75
69
Perfect numbers are :
 6


*/