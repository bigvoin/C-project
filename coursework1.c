
#include<stdio.h>
#include<string.h>
#include<time.h>
 struct decks {  // creating a structure for the cards named decks
     char suit;
     int value;
 } ;

   struct decks card[52];       // making a decks of 52 cards
   struct decks card2[52];

 void deck1()           // populating the deck with the cards starting with 1D and ending with King C witch is represented as 12 and Ace i
                        // Asking the user for card position and printing the card at this position and the card next to it and before
{

   int position;
   char answer[20];




      for(int i=0; i<13; i++)
       {

             card[i].suit='D';
             card[i].value=i+1;
             printf("%d%c ",card[i].value,card[i].suit);
      }
printf("\n");
   for(int i=0; i<13; i++)
{
             card[i+13].suit='H';
             card[i+13].value=i+1;
           printf("%d%c ",card[i+13].value,card[i+13].suit);
}
printf("\n");
  for(int i=0; i<13; i++)
       {

             card[i+26].suit='S';
             card[i+26].value=i+1;
             printf("%d%c ",card[i+26].value,card[i+26].suit);
      }
printf("\n");

 for(int i=0; i<13; i++)
       {

             card[i+39].suit='C';
             card[i+39].value=i+1;
             printf("%d%c ",card[i+39].value,card[i+39].suit);
      }
printf("\n");
printf(".................................................................\n");
printf("Enter card:");
scanf("%d",&position);
printf("The card at position %d is %d%c.\n",position,card[position-1].value,card[position-1].suit);
printf("type (Yes/No) if you want to see the card after and before this position:");
 scanf("%s",answer);
  if(strcmp(answer,"Yes")==0){
   if(position==1)
{printf("The card in the position before %d is %d%c.\n",position,card[position+50].value,card[position+50].suit);
   printf("The card in the position after %d is %d%c.\n",position,card[position].value,card[position].suit);}

printf(".................................................................\n");
   if (position==52)
{
   printf("The card in the position before %d is %d%c.\n",position,card[position-2].value,card[position-2].suit);
   printf("The card in the position after %d is %d%c.\n",position,card[position-52].value,card[position-52].suit);

printf(".................................................................\n");
}
 if(position>1 && position<52){ printf("The card in the position before %d is %d%c.\n",position,card[position-2].value,card[position-2].suit);
   printf("The card in the position after %d is %d%c.\n",position,card[position].value,card[position].suit);
printf("\n");
printf(".................................................................\n");
}
}
}



void func()
{

char array[4]={'S','D','C','H'};
int n=0;
int i=1;
int z=0;
int position;
while(n<52)
{
  i=i+3;
 if(i>13)
 {
   i=i-13;
}
card2[n].value=i;
if(z>3)
{
z=z-4;
}
card2[n].suit=array[z];
z++;

printf("%d%c ",card2[n].value,card2[n].suit);
n++;
}
printf("\n");

printf("..................................................................\n");
char answer[20];

printf("Enter card:");
scanf("%d",&position);
printf("The card at position %d is %d%c.\n",position,card2[position-1].value,card2[position-1].suit);
printf("type (Yes/No) if you want to see the card after and before this position:");
 scanf("%s",answer);
  if(strcmp(answer,"Yes")==0){
   if(position==1)
{printf("The card at position before %d is %d%c.\n",position,card2[position+50].value,card2[position+50].suit);
   printf("The card at position after %d is %d%c.\n",position,card2[position].value,card2[position].suit);}
   if (position==52)
{
   printf("The card at position before %d is %d%c.\n",position,card2[position-2].value,card2[position-2].suit);
   printf("The card at position after %d is %d%c.\n",position,card2[position-52].value,card2[position-52].suit);
}

  if(position>1 && position<52){ printf("The card at position before %d is %d%c.\n",position,card2[position-2].value,card2[position-2].suit);
   printf("The card at position after %d is %d%c.\n",position,card2[position].value,card2[position].suit);
}
   }


printf("...........................................\n");
}

 void cut()
{
  int position;
 int n;
  printf("Choose at what card do you want to cut the deck:");
  scanf("%d",&n);
 position=n-1;
if (position==51)
{
  printf("You can't cut the deck on the last card");
}
else{
  printf("The card at the bottom will be: %d%c\n",card2[position].value,card2[position].suit);
 printf("The card at the top of the deck is %d%c.\n",card2[position+1].value,card2[position+1].suit);
}
printf("\n");
printf(".....................................................................\n");

}
int main()
{

 deck1();
 func();
 cut();
 struct decks card12[104];
 int n=0;
int i=0;
int position;
char answer[20];
while(n<104)
{
  card12[n]=card2[i];
  printf("%d%c ",card12[n].value,card12[n].suit);
n++;
 card12[n]=card[i];
printf("%d%c ",card12[n].value,card12[n].suit);
n++;
i++;
}
printf("\n");
printf("...........................................\n");
printf("Enter card:");
scanf("%d",&position);
printf("The card at position %d is %d%c.\n",position,card12[position-1].value,card12[position-1].suit);

printf("type (Yes/No) if you want to see the card after and before this position:");
 scanf("%s",answer);
  if(strcmp(answer,"Yes")==0){
   if(position==1)
{printf("The card at position before %d is %d%c.\n",position,card12[position+102].value,card12[position+102].suit);
   printf("The card at position after %d is %d%c.\n",position,card12[position].value,card12[position].suit);}
   if (position==104)
{
   printf("The card at position before %d is %d%c.\n",position,card12[position-2].value,card12[position-2].suit);
   printf("The card at position after %d is %d%c.\n",position,card12[position-104].value,card12[position-104].suit);
}

  if(position>1 && position<104){ printf("The card at position before %d is %d%c.\n",position,card12[position-2].value,card12[position-2].suit);
   printf("The card at position after %d is %d%c.\n",position,card12[position].value,card12[position].suit);
}


}
}
