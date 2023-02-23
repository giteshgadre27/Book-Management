#include<stdio.h> 
#include<string.h> 
typedef struct book 
{ 
 int id ; 
 char bname[100]; 
 char author[100]; 
 int price; 
 int sell_copies; 
}book; 
void storearray(book*,int); 
void displayarray(book*,int); 
void searcharray(book*,int); 
void countarray(book*,int); 
void maxprice(book*,int); 
void priceabove(book*,int); 
void maxsell(book*,int); 
 
int main() 
{ 
 int n; 
 printf("How Many Records you want to store : "); 
    scanf("%d",&n); 
 book arr[n]; 
 while(1) 
 { 
  printf("\n _____Menu________"); 
     printf("\n 1.Store Book Information"); 
     printf("\n 2.Display Book Information"); 
     printf("\n 3.Search Book by Author Name"); 
     printf("\n 4.Total Book Count"); 
     printf("\n 5.Check Maximum Price book"); 
     printf("\n 6.Check Books of price 200 and above"); 
     printf("\n 7.check maximum sold book "); 
     printf("\n 8.Exit"); 
  int ch ; 
     printf("\n Enter The Choice :"); 
     scanf("%d",&ch); 
     printf("\n________"); 
        if(ch==1) 
     {  
         storearray(arr,n);  
     }  
     if(ch==2) 
     { 
         displayarray(arr,n); 
       } 
     if(ch==3) 
     { 
      searcharray(arr,n);  
     } 
     if(ch==4) 
     { 
      countarray(arr,n); 
       } 
     if(ch==5) 
     { 
    maxprice(arr,n);  
     } 
     if(ch==6) 
     { 
      priceabove(arr,n); 
  } 
  if(ch==7) 
  { 
   maxsell(arr,n); 
  } 
     if(ch==8) 
     { 
      printf("\n Exit"); 
         break; 
     } 
   } 
   return 0 ;  
} 
 
void storearray(book* arr ,int t ) 
{ 
 int i; 
 for (i=0;i<t;i++) 
 { 
  printf("\n Book No : %d",i+1); 
  printf("\n Enter ID of Book : "); 
  scanf("%d",&arr[i].id); 
  fflush(stdin); 
  printf("\n Enter a Book Name :"); 
  gets(arr[i].bname); 
  fflush(stdin); 
  printf("\n Enter a Author Name :"); 
  gets(arr[i].author);  
  printf("\n Enter a price :"); 
  scanf("%d",&arr[i].price); 
  printf("\n Enter a sold copies :"); 
  scanf("%d",&arr[i].sell_copies); 
   
   
   
 } 
} 
 
void displayarray(book* arr,int t ) 
{ 
 int i ; 
 for (i=0;i<t;i++) 
 { 
  
  printf("\n ID     : %d",arr[i].id); 
  printf("\n Name   : %s",arr[i].bname); 
  printf("\n Author : %s",arr[i].author); 
  printf("\n Price  : %d",arr[i].price); 
   
   
 } 
 
} 
void countarray(book* arr,int t) 
{ 
 int i,n ; 
 int count=0; 
 for( i = 0 ; i < t ; i++) 
    { 
        count++; 
    } 
    printf("\nTotal Number of Books in Library : %d\n",count); 
  
} 
void searcharray(book* arr,int t) 
{ 
     int i ; 
     char check[20]; 
     printf("\nEnter Author Name: "); 
        scanf("%s",check); 
        for( i=0;i<t;i++) 
       { 
             if(strcmp(arr[i].author,check) == 0) 
            { 
                printf("\n Book Name of %s: %s\n",check,arr[i].bname); 
                printf("\n Price : %d\n",arr[i].price); 
                 
            } 
        }  
} 
void maxprice(book* arr , int t) 
{ 
 int i ; 
 char name[20]; 
 strcpy(name,arr[0].bname); 
    int max=arr[0].price; 
    for(i=0;i<t;i++) 
    { 
     if(arr[i].price>max) 
     { 
      max=arr[i].price; 
      printf("\n Maximum price book "); 
      printf("\n Price : %d\n",arr[i].price); 
      printf("\n Book Name : %s\n",arr[i].bname); 
      
  } 
 } 
  
} 
void priceabove(book* arr , int t) 
{ 
 
 int i ; 
  for(i=0;i<t;i++) 
    { 
        if(arr[i].price>=200) 
       { 
            printf("Book ID : %d\n",arr[i].id); 
            printf("Book Name : %s \n",arr[i].bname); 
            printf("Cost : %d\n",arr[i].price); 
        } 
    } 
} 
 
 
 
void maxsell(book* arr , int t) 
{ 
 int i ; 
 char name[20]; 
 strcpy(name,arr[0].bname); 
    int maxsell_book=arr[0].price; 
    for(i=0;i<t;i++) 
    { 
     if(arr[i].price>maxsell_book) 
     { 
      maxsell_book=arr[i].sell_copies; 
      printf("\n Maximum sold book copies :"); 
      printf("\n Price : %d\n",arr[i].price); 
      printf("\n Book Name : %s\n",arr[i].bname); 
      
  } 
 } 
  
}
