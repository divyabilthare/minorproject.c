#include<stdio.h>
#include<conio.h>
int Menu();
void bus();
void cycle();
void rikshaw();
void delet();
void showdetail();
int noB=0,noR=0,noC=0,amount=0,count=0;
void main()
{ while(1)
{
 clrscr();
  switch(Menu())
  {
  case 1: bus();
	  break;
  case 2: cycle();
	  break;
  case 3: rikshaw();
	  break;
  case 4: showdetail();
	  break;
  case 5: delet();
	  break;
  case 6: exit(0);

  default:
  printf("Invalid choice:");
  }
  getch();
  }
}
  int Menu()
 {
 int ch;
printf("\n1. enter bus:");
printf("\n2. enter cycle:");
printf("\n3. enter rikshaw:");
printf("\n4. enter show status:");
printf("\n5. enter delete value:");
printf("\n6. exit:");
printf("\n \n enter your choice:");
scanf("%d",&ch);
return (ch);
}
void delet()
{
noB=0;
noC=0;
noR=0;
amount=0;
count=0;
}
void showdetail()
{
printf("\n number of bus=%d",noB);
printf("\n number of cycle=%d",noC);
printf("\n number of rikshaw=%d",noR);
printf("\n total number of vechicles=%d",count);
printf("\n total gain amount=%d",amount);
}
void bus()
{   printf("\n entry successful");
noB++;
amount=amount+100;
count++;
}
void cycle()
{   printf("\n entry successful");
noC++;
amount=amount+20;
count++;
}
void rikshaw()
{   printf("\n entry succesful");

noR++;
amount=amount+40;
count++;
}
