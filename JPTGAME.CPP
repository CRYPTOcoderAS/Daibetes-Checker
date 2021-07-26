#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>


void start();
void getresults();
int i,j,life,maxrand;
char c ;
int main()
{
//clrscr() ;
cout<<"\n JACKPOT!!! GAME!!\n\n  " ;
start() ;
getresults() ;
}

void
start()
{
i=0;
j=0;
life=0;
maxrand=6;
cout<<"\n WELCOME TO THIS VIRTUAL PREDICTION GAME \n" ;
cout<<"\n\n Select difficulty LEVEL " ;
cout<<"\n\n 1:EASY(1-15) " ;
cout<<"\n\n 2:MEDIUM (1-30) " ;
cout<<"\n\n 3:DIFFICULT ( 1-50) " ;
cout<<"\n\n or type anyother to EXIT \n ";
c=30 ;
cout<<"\n ENTER YOUR CHOICE\n " ;

cin>>c ;
cout<<"\n\n" ;

switch (c)
{
case'1' : maxrand=15 ;
break ;
case'2': maxrand=30 ;
break ;
case'3': maxrand = 50 ;
break ;
default : exit(0) ;
break ;
}
life = 5 ;
srand ( (unsigned)time(NULL)) ;
j=rand()%maxrand ;
getresults () ;
}

void
getresults()
{
if (life<= 0 )
{ cout<<"\n you LOSE \n\n\n\n " ;
start() ;
  }
cout<<"\n type a number \n " ;
cin>>i ;

if ((i>maxrand) ||(i<0))
{ cout<<" error \n " ;
getresults() ;
}

if (i==j)
{ cout<<"YOU WIN!!! \n\n\n\n " ;
start() ;
}
else if (i>j)
{cout<<" too BIG" ;
life=life-1 ;
cout<<"\n NUMBER of life rem "<<life<<"\n\n" ;
getresults() ;
}
else if (i<j)
{ {cout<<" too SMALL" ;
life=life-1 ;
cout<<"\n NUMBER of life rem " <<life<<"\n\n" ;

getresults() ;
}
}}


/* void
  main()
{
cout<<"\njackpot game \n\n "  <<ch ;
}
}
} */
