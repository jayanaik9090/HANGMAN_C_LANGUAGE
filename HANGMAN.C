/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    //printf("Hello World");
    char UserName[30];
    //char yes_no[5];
   // char yes[5]="yes";
    int a=1;
    printf("Enter your name : ");
    scanf("%s",UserName);
    printf("HI %s Welcome to the game Hangman\n\n",UserName);
    while(a!=0)
    {
     srand(time(NULL));
     int character=1;
     char* word="HiHello ThisisJayaandRafat";
     switch(rand()%23){
         case 1: word="DOLPHIN";character=7; break;
         case 2: word="DONKEY";character= 6; break;
         case 3: word="EAGLE";character=5; break;
         case 4: word="FISH";character=4; break;
         case 5: word="FROG";character=4; break;
         case 6: word="GERBIL";character=6; break;
         case 7: word="GOOSE";character=5; break;
         case 8: word="GOPHER";character=6; break;
         case 9: word="GORILLA";character=7; break;
         case 10: word="HORSE";character=5; break;
         case 11: word="IBIS";character=4; break;
         case 12: word="IGUANA";character=6; break;
         case 13: word="IGUANA";character=6; break;
         case 14: word="JACKAL";character=6; break;
         case 15: word="JAVANESE";character=8; break;
         case 16: word="JELLYFISH";character=9; break;
         case 17: word="KAKAPO";character=6; break;
         case 18: word="KANGAROO";character=8; break;
         case 19: word="KINGPENGUIN";character=11; break;
         case 20: word="KIWI";character=4; break;
         case 21: word="KOALA";character=5; break;
         case 22: word="LEMMING";character=7; break;
         case 23: word="LEMUR";character=5; break;
         case 24: word="LEOPARD";character=7; break;
         
         default: word="DOG";character=3; break;
     }
     printf("Try guessing the word by guessing the character:\n \n");
     char answer[100];
     char right_answer[100]=" ";
     strcpy(answer,"");
     for(int i=1;i<=character;i++){
	    strcat(answer,"_ ");
	    printf("_ ");
     
    }
    int b=0,c=0,p=1,finish=0;
    while(c<5)
    {
        printf("\nEnter a character(capital letter) to guess.... ");
	    char letter;
	    scanf("%s",&letter);
	    
	    if(strchr(word,letter)!=0)
	    {
	        for(int j=0;j<=character-1;j++)
	        {
	            if(letter==word[j])
	            {
	                p=j*2;
	                if(answer[p]!=letter) finish++;
	                answer[p]=letter;

	            }
	        }
	         printf("%s\n",answer);
	        printf("Correct Guess!\n");
	        printf("You got another try +1\n");
	        if(finish==character) {break; b=0;}
	        if(b!=0) printf("Letters you have used  %s",right_answer);
	        if(c>0)c--;
	    }
	    else
	    {
	        right_answer[2*b]=letter;
	        strcat(right_answer," ");
	        b++;
	       c++;
	       if(c==1) 
	       {
	           printf("o-----------\n|          |\n|\n|\n|\n|\n|\n|\n");
	       }
	       if(c==2)
	       {
	           
	       } printf("o-----------\n|          |\n|          O\n|\n|\n|\n|\n|\n"); 
	       
	       if(c==3)
	       {
	           printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|\n|\n|\n");  
	       }
	       if(c==4) 
	       {
	           printf("o-----------\n|          |\n|          O\n|          |\n|          |\n|         / \\\n|\n|\n");  
	       }
	       if(c==5)
	       {
	        printf("o-----------\n|          |\n|          O <--------|you killed me %s :(|\n|         \\|/\n|          |\n|         / \\\n|\n|\n",UserName);}
	       
	       if(c!=5)
	       {
	       printf("%d Tries left\n",5-c); 
	       printf("%s\n",answer);
	       printf("Letters you have used  %s",right_answer);
	       }
	    }
	    
	   }
    
    if(finish==character)
    { printf("            O <------|You saved me!!!! Thank you %s    \n",UserName);
        printf("Amazing! You won! The word was \"%s\" \n",word);
    }
    	else{
	    printf("You lost :( The word was \"%s\" \n\n",word); 
	}
		printf("Press:\n 1-Play again \n 0-Quit\n");
	scanf("%d",&a);
	}
    return 0;
}
