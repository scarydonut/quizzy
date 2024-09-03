#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();
void reset_score();
void help();
void edit_score(float,char[]);
int main()
{
    int countr,r,r1,count,i,n;
    float score;
    char choice;
    char playername[20];
    mainhome:
    printf("\t\t\t  << QUIZ GAME >>\n");
    printf("\n\t\t****************************************");

    printf("\n\t\t\t      WELCOME\n ");
    printf("\n\t\t\t        to\n ");
    printf("\n\t\t\t    THE QUIZ GAME ");
    printf("\n\t\t");
    printf("\n\t\t****************************************");
    printf("\n\t\t   BECOME RICH EARN UPTO 1 MILLION $ ;-) ");
    printf("\n\t\t****************************************");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > Press V to view the highest score  ");
    printf("\n\t\t > Press R to reset score");
    printf("\n\t\t > press H for help            ");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getch());

    if(choice=='V')
 {
    system("cls");
    show_record();
    system("cls");
    goto mainhome;
 }
 
     else if(choice=='H')
	 {
         system("cls");
         help();
         getch();
         system("cls");
	     goto mainhome;
	 }
	 
    else if(choice=='R')
 {
       system("cls");
        reset_score();
	    getch();
	    goto mainhome;
      }
	 
     else if (choice=='Q')
	 {
         exit(1);
     }    
    
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n *********** Welcome %s to C Program Quiz Game *****************",playername);
        printf("\n\n Here are some tips you might wanna know before playing:");
        printf("\n ********************************************************************************");
        printf("\n >> There are 2 rounds in this Quiz Game,WARMUP ROUND & CHALLANGE ROUND");
        printf("\n >> In warmup round you will be asked a total of 3 questions to test your");
        printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
        printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
        printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
        printf("\n    total of 10 questions. Each right answer will be awarded with 10 points!");
        printf("\n    By this way you can score upto 100 :-) :-):-):-):-):-):-)!!!!!..........");
        printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
        printf("\n    right option.");
        printf("\n >> You will be asked questions continuously, till right answers are given");
        printf("\n >> No negative marking for wrong answers!");
        printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y  to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
    
       if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }
	
       else
		{
            system("cls");
            goto mainhome;
        }

     
     home:
     system("cls");
     count=0;
     
     
     for(i=1;i<=3;i++)
     {
        r1=i;
        switch(r1)
        {
                  case 1:
		          printf("\n\nA collecion of 8 bits are called?");
		          printf("\n\nA.bit\t\tB.word\n\nC.byte\t\tD.record");
		          if (toupper(getch())=='C')
		          {
	           		      printf("\n\nCorrect!!!");
                          count++;
			              getch();
			              system("cls");
			              break;
                   }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.byte");
		        getch();
		        system("cls");
		        break;
  	   	}
                  case 2:
		          printf("\n\nWhich of the following is a Palindrome number?");
		          printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		          if (toupper(getch())=='C')
		          {
			        printf("\n\nCorrect!!!");
                    count++;
			        getch();
			        system("cls");
			        break;
                 }
		
        
        else
	    {
	            printf("\n\nWrong!!! The correct answer is C.23232");
		        getch();
		        system("cls");
		        break;
  	   	}
        
        system("cls");
        
        case 3:
		printf("\n\n\nWhich of the following is used in pencils?");
		printf("\n\nA.Graphite\t\tB.Silicon\n\nC.Charcoal\t\tD.Phosphorus");
		
        
        if (toupper(getch())=='A')
		{
            printf("\n\nCorrect!!!");
            count++;
			getch();
			system("cls");
            break;
        }
		
        
        else
        {
               printf("\n\nWrong!!! The correct answer is A.Graphite");
		       getch();
		       system("cls");
               break;
        }
      }
  }

	
    if(count>=2)
	{
                goto test;
    }
	
    else
	{
            	system("cls");
            	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
            	getch();
            	goto mainhome;
	}
     
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play the Game ***",playername);
     printf("\n\n\n\n\t!Press any key to Start the Game!");
     if(toupper(getch())=='p')
     {
                              goto game;
     }
     
     
     game:
     countr=0;
     for(i=1;i<=10;i++)
     {
                       system("cls");
                       r=i;

     switch(r)
     {
		case 1:
		printf("\n\nAll are the example of input devices Except a:");
		printf("\n\nA.Scanner\t\tB.Mouse\n\nC.Printer\t\tD.Keyboard");
		if (toupper(getch())=='C')
		{
                                  printf("\n\nCorrect!!!");countr++;getch();
			                      break;
                                  getch();
         }
		
        
        else
        {
                                  printf("\n\nWrong!!! The correct answer is C.Printer");
                                  getch();
		                          goto score;
		                          break;
        }

	
    	case 2:
		printf("\n\n\nWhat kind of file extension .mpg?,");
		printf("\n\nA.Movie file \t\tB.Text file\n\nC.Image file\t\tD.Audio file");
		if (toupper(getch())=='A')
		{
                    printf("\n\nCorrect!!!");
                    countr++;
                    getch();
			        break;
         }
	
    
    	else
        {
                    printf("\n\nWrong!!! The correct answer is A.Movie file");
                    getch();
	                goto score;
		            break;
	     }

        case 3:
		printf("\n\n\nWadia Institute of Himalayan Geology is located at ");
		printf("\n\nA.Delhi\t\tB.Shimla\n\nC.Dehradun\t\tD.Kulu");
		if (toupper(getch())=='C')
		{
                     printf("\n\nCorrect!!!");
                     countr++;
                     getch();
			         break;
                     }
		else
	    {
                    printf("\n\nWrong!!! The correct answer is C.Dehradun");
                    getch();
		            goto score;
		            break;
                    }

        case 4:
		printf("\n\n\nWho is the founder of facebook?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if (toupper(getch())=='A')
		{
                                  printf("\n\nCorrect!!!");
                                  countr++;
                                  getch();
			                      break;
                                  }
		
        else
        {
                printf("\n\nWrong!!! The correct answer is A.Mark zuckerburg");
                getch();
       	        goto score;
		        break;
		       }

        
        case 5:
		printf("\n\n\nThe ratio of width of our National flag to its length is");
		printf("\n\nA.3:5\tB.2:3\n\nC.2:4\t\tD.3:4");
		if(toupper(getch())=='B')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is B.2:3");
		       getch();
		       goto score;
		       break;
		       }

        case 6:
		printf("\n\n\nPlants receive their nutrients mainly from,");
		printf("\n\nA.chlorophyll \t\tB.Atmosphere\n\nC.light\t\tD.soil");
		if (toupper(getch())=='D')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is D.soil");
		       getch();
		       goto score;
		       break;
		       }
	
		case 7:
		printf("\n\n\nWho invented the BALLPOINT PEN?");
		printf("\n\nA.Biro Brothers\t\tB.Waterman Brothers\n\nC.Bicc Brothers\t\tD.Write Brothers");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Biro Brothers");
		       getch();
		       goto score;
		       break;
		       }
        case 8:
		printf("\n\n\nWho was known as Iron man of India?");
		printf("\n\nA.Sardar Vallabhbhai Patel\t\tB.Bhagat Singh\n\nC.Jawaharlal Nehru\t\tD.Subhash Chandra Bose");
		if(toupper(getch())=='A')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is A.Sardar Vallabhbhai Patel");
		       getch();
		       goto score;
		       break;
		       }
        case 9:
		printf("\n\n\nWhich is the highest gallantry award in India?");
		printf("\n\nA.Kirti Chakra\t\tB.Vir chakra\n\nC.Param Vir Chakra\t\tD.Param Vishishtat Seva Medal");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;}
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Param Vir Chakra");
		       getch();
		       goto score;
		       break;
		       }
        case 10:
     	printf("\n\n\nWho is the founder of pixar animation?");
		printf("\n\nA.Mark zuckerburg\tB.Tesla\n\nC.Steve jobs\t\tD.Bill gates");
		if(toupper(getch())=='C')
		{
                                 printf("\n\nCorrect!!!");
                                 countr++;
                                 getch();
                                 break;
                                 
                                 }
		else
        {
		       printf("\n\nWrong!!! The correct answer is C.Steve jobs");
		       getch();
		       goto score;
		       break;
		       }

		}
  }
  
  
	score:
    system("cls");
	score=(float)countr*100000;
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
       printf("\n\t You won $%.2f",score);
       goto go;
    }

	 else if(score==1000000.00)
	 {
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t\t\t You won $%.2f",score);
	    printf("\n\t\t\t\t Thank You !!");
	 }
	 else
     {
	    printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        goto go;
     }

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getchar())=='Y')
	{
		goto home;
    }
        else
	    {
	     	edit_score(score,playername);
		    goto mainhome;
        }
      }
     }

void show_record()
{
     
	 char name[20];
	 float scr=0;
	 FILE *f;
	 f=fopen("score.txt","r");
	 fscanf(f,"%s%f",&name,&scr);
	 printf("\n\n\t\t*************************************************************");
	 printf("\n\n\t\t %s has secured the Highest Score %f",name,scr);
	 printf("\n\n\t\t*************************************************************");
	 fclose(f);
	 getch();
}

void reset_score()
{
    system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
}

void help()
{
    system("cls");
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n ......................... C program Quiz Game...........");
    printf("\n >> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND");
    printf("\n >> In warmup round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded $100,000.");
    printf("\n    By this way you can win upto ONE MILLION cash prize in USD...............");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n\t*********************BEST OF LUCK*********************************");
	printf("\n\n\t*****C PROGRAM QUIZ GAME is developed byADITYA KUMAR********");}

void edit_score(float score, char playernm[20])
{
    system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { 
        sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",playernm,sc);
	    fclose(f);
      }
}