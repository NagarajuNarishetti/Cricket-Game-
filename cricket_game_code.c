#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int bating();
struct Player {
    char name[50];
    };
 main (){
 	int toss,bating_selection,toss_number_player,number,tsum,result,pscore,cscore,ctoss=0;
 	struct Player *player;
    player = (struct Player *)malloc(sizeof(struct Player));

    printf("Welcome to the Cricket Game!\n");
    printf("Enter your name: ");
    scanf("%s", player->name);

    printf("Hello, %s! Let's play!\n", player->name);
 	printf("select  odd-1  or even-2 for toss :  ");
 	scanf("%d",&toss);
 	printf("\nnow enter number of your choice below 100 :  ");
 	scanf("%d",&toss_number_player);
    srand(time(0));
    number = rand()%100;
    printf("\n%d is computers number\n",number);
    tsum=toss_number_player+number;
    printf("\nsum of your choices is %d\n",tsum);
    result=tsum%2;
    if(result==0&&toss==2)
    printf("\nsum is even ** you won the toss**\n");
    else if(result!=0&&toss==1)
    printf("sum is odd  ** you won the toss **\n");
    else{
    printf("**computer won the toss**\n");
    ctoss=1;} 
    if(ctoss==0){
    printf("\nselect whether to bat 1st or 2nd : ");
    scanf("%d",&bating_selection);
}
else{srand(time(0));
	  bating_selection =  rand()%2+1;
	  printf("computer selected %d\n",bating_selection);
}
    if(bating_selection==1&&ctoss==0){
    pscore=bating();
    printf("\n\n***Your score is %d ***\n\n",pscore);
     printf("It is time for computer bating");
    cscore=bating();
    printf("\n\n***The score of the Computer  is %d***\n\n",cscore);
     if(pscore>cscore)
    printf("**YOU WON with %d runs**\n",pscore-cscore);
    else if(pscore==cscore)
    printf("**game is a tie with %d runs each **\n",pscore);
    else
    printf("**Computer WON with %d runs**\n",cscore-pscore);
   
	}
	else{
		cscore=bating();
    printf("\n\n***The score of the Computer  is %d***\n\n",cscore);
    printf("It is time for your bating\n");
    pscore=bating();
    printf("\n\n***your score is %d ***\n\n",pscore);
    if(pscore>cscore)
    printf("**YOU WON with %d runs**\n",pscore-cscore);
    else if(pscore==cscore)
    printf("**game is a tie with %d runs each **\n",pscore);
    else
    printf("**Computer WON with %d runs**\n",cscore-pscore);
	}
 }
 int bating(){
 	   int pchoice, cchoice,score=0;
 		printf("\nwelcome to the game All the best\n\n");
		 do{
    	printf("enter a number below 7 :  ");
    	scanf("%d",&pchoice);
    	srand(time(0));
	  cchoice =  rand()%6+1;
	  printf("computer choice is %d\n",cchoice);
	  score+=pchoice+cchoice;
	  printf("\nscore increased to %d \n\n",score);
}while(pchoice!=cchoice);
return score;
 }
