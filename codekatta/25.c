#include<stdio.h>                          
  void main( )                                                     
   {                                                           
       int i,j,m;                                              
       int median,a[m],t;                                    
                                                               
       printf("Enter the number");                  
       scanf("%d", &m);                                        
       printf("input of the number");                         
       for (i = 1; i <= m ; i++)
       {
        scanf("%d", &a[i]); 
  
       }
       if(m%2==0)
       {
    
          median = (a[m/2] + a[m/2+1])/2.0 ;
          }
       else
       {
          median = a[m/2 + 1];                                 
        }                                                       
for (i = 1 ; i <= m ; i++)
{
           printf("%d ", a[i]);                               
       printf("median number");                                                                          
   }    
